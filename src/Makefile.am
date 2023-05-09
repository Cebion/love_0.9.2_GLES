AM_CPPFLAGS = -I$(srcdir) -I$(srcdir)/modules -I$(srcdir)/libraries -I$(srcdir)/libraries/enet/libenet/include $(LOVE_INCLUDES) $(FILE_OFFSET)	$(SDL_CFLAGS) $(lua_CFLAGS) $(freetype2_CFLAGS)	$(openal_CFLAGS) $(devil_CFLAGS) $(libmodplug_CFLAGS)	$(vorbisfile_CFLAGS)
AUTOMAKE_OPTIONS = subdir-objects
SUBDIRS =
SUFFIXES = .lua .lua.h

if LOVE_BUILD_EXE
# LÖVE executable
bin_PROGRAMS = love
#love_LDFLAGS =
love_LDADD = liblove.la $(lua_LIBS)
love_SOURCES = love.cpp

if LOVE_TARGET_OSX
love_LIBTOOLFLAGS = --tag=OBJCXX
love_SOURCES += \
    ../platform/macosx/OSX.h \
    ../platform/macosx/OSX.mm
else
love_LIBTOOLFLAGS = --tag=CXX
endif
endif

# Compile scripts
.lua.lua.h:
	cd scripts; 	$(LUA_EXECUTABLE) auto.lua $<

# libLÖVE
lib_LTLIBRARIES = liblove.la
liblove_la_LDFLAGS = -module -export-dynamic $(LDFLAGS)
liblove_la_LIBADD = 	$(SDL_LIBS) $(freetype2_LIBS) $(lua_LIBS)	$(openal_LIBS) $(devil_LIBS) $(libmodplug_LIBS)	$(vorbisfile_LIBS)
liblove_la_SOURCES = \
    ./common/math.h \
    ./common/Data.h \
    ./common/EnumMap.h \
    ./common/Exception.h \
    ./common/Exception.cpp \
    ./common/int.h \
    ./common/Object.h \
    ./common/config.h \
    ./common/Vector.cpp \
    ./common/Reference.h \
    ./common/utf8.h \
    ./common/runtime.h \
    ./common/types.h \
    ./common/StringMap.h \
    ./common/wrap_Data.h \
    ./common/Memoizer.cpp \
    ./common/delay.h \
    ./common/wrap_Data.cpp \
    ./common/version.h \
    ./common/Reference.cpp \
    ./common/runtime.cpp \
    ./common/Variant.cpp \
    ./common/Matrix.cpp \
    ./common/b64.cpp \
    ./common/b64.h \
    ./common/Variant.h \
    ./common/Module.cpp \
    ./common/Memoizer.h \
    ./common/delay.cpp \
    ./common/Module.h \
    ./common/Matrix.h \
    ./common/utf8.cpp \
    ./common/Vector.h \
    ./common/Object.cpp \
    ./scripts/boot.lua.h \
    ./scripts/graphics.lua.h

if LOVE_MODULE_AUDIO
if LOVE_IMPLEMENTATION_AUDIO_NULL
liblove_la_SOURCES += \
    ./modules/audio/null/Source.h \
    ./modules/audio/null/Audio.h \
    ./modules/audio/null/Audio.cpp \
    ./modules/audio/null/Source.cpp
endif

if LOVE_IMPLEMENTATION_AUDIO_OPENAL
liblove_la_SOURCES += \
    ./modules/audio/openal/Pool.h \
    ./modules/audio/openal/Source.h \
    ./modules/audio/openal/Pool.cpp \
    ./modules/audio/openal/Audio.h \
    ./modules/audio/openal/Audio.cpp \
    ./modules/audio/openal/Source.cpp
endif

liblove_la_SOURCES += \
    ./modules/audio/Source.h \
    ./modules/audio/wrap_Source.h \
    ./modules/audio/wrap_Source.cpp \
    ./modules/audio/wrap_Audio.h \
    ./modules/audio/Audio.h \
    ./modules/audio/Audio.cpp \
    ./modules/audio/wrap_Audio.cpp \
    ./modules/audio/Source.cpp
endif

if LOVE_MODULE_EVENT
if LOVE_IMPLEMENTATION_EVENT_SDL
liblove_la_SOURCES += \
    ./modules/event/sdl/wrap_Event.h \
    ./modules/event/sdl/Event.cpp \
    ./modules/event/sdl/Event.h \
    ./modules/event/sdl/wrap_Event.cpp
endif

liblove_la_SOURCES += \
    ./modules/event/Event.cpp \
    ./modules/event/Event.h
endif

if LOVE_MODULE_FILESYSTEM
if LOVE_IMPLEMENTATION_FILESYSTEM_PHYSFS
liblove_la_SOURCES += \
    ./modules/filesystem/physfs/File.h \
    ./modules/filesystem/physfs/Filesystem.cpp \
    ./modules/filesystem/physfs/Filesystem.h \
    ./modules/filesystem/physfs/File.cpp
endif

liblove_la_SOURCES += \
    ./modules/filesystem/wrap_Filesystem.h \
    ./modules/filesystem/wrap_FileData.h \
    ./modules/filesystem/wrap_File.cpp \
    ./modules/filesystem/File.h \
    ./modules/filesystem/wrap_File.h \
    ./modules/filesystem/FileData.h \
    ./modules/filesystem/wrap_Filesystem.cpp \
    ./modules/filesystem/wrap_FileData.cpp \
    ./modules/filesystem/FileData.cpp \
    ./modules/filesystem/File.cpp
endif

if LOVE_MODULE_FONT
if LOVE_IMPLEMENTATION_FONT_FREETYPE
liblove_la_SOURCES += \
    ./modules/font/freetype/TrueTypeRasterizer.cpp \
    ./modules/font/freetype/TrueTypeRasterizer.h \
    ./modules/font/freetype/Font.cpp \
    ./modules/font/freetype/wrap_Font.h \
    ./modules/font/freetype/Font.h \
    ./modules/font/freetype/wrap_Font.cpp
endif

liblove_la_SOURCES += \
    ./modules/font/wrap_GlyphData.cpp \
    ./modules/font/wrap_Rasterizer.h \
    ./modules/font/wrap_Rasterizer.cpp \
    ./modules/font/Rasterizer.cpp \
    ./modules/font/ImageRasterizer.h \
    ./modules/font/ImageRasterizer.cpp \
    ./modules/font/GlyphData.h \
    ./modules/font/wrap_GlyphData.h \
    ./modules/font/Rasterizer.h \
    ./modules/font/Vera.ttf.h \
    ./modules/font/GlyphData.cpp \
    ./modules/font/Font.h
endif

if LOVE_MODULE_GRAPHICS
if LOVE_IMPLEMENTATION_GRAPHICS_OPENGL
liblove_la_SOURCES += \
    ./modules/graphics/opengl/wrap_ParticleSystem.h \
    ./modules/graphics/opengl/Graphics.cpp \
    ./modules/graphics/opengl/Graphics.h \
    ./modules/graphics/opengl/wrap_Image.cpp \
    ./modules/graphics/opengl/wrap_Graphics.h \
    ./modules/graphics/opengl/wrap_Shader.h \
    ./modules/graphics/opengl/Canvas.h \
    ./modules/graphics/opengl/Texture.h \
    ./modules/graphics/opengl/OpenGL.h \
    ./modules/graphics/opengl/Polyline.h \
    ./modules/graphics/opengl/Mesh.cpp \
    ./modules/graphics/opengl/VertexBuffer.cpp \
    ./modules/graphics/opengl/wrap_Texture.h \
    ./modules/graphics/opengl/wrap_Canvas.h \
    ./modules/graphics/opengl/wrap_Mesh.cpp \
    ./modules/graphics/opengl/wrap_SpriteBatch.cpp \
    ./modules/graphics/opengl/SpriteBatch.h \
    ./modules/graphics/opengl/wrap_Mesh.h \
    ./modules/graphics/opengl/wrap_Texture.cpp \
    ./modules/graphics/opengl/wrap_ParticleSystem.cpp \
    ./modules/graphics/opengl/wrap_SpriteBatch.h \
    ./modules/graphics/opengl/Image.cpp \
    ./modules/graphics/opengl/Shader.h \
    ./modules/graphics/opengl/ParticleSystem.h \
    ./modules/graphics/opengl/SpriteBatch.cpp \
    ./modules/graphics/opengl/Font.cpp \
    ./modules/graphics/opengl/VertexBuffer.h \
    ./modules/graphics/opengl/Shader.cpp \
    ./modules/graphics/opengl/ParticleSystem.cpp \
    ./modules/graphics/opengl/wrap_Image.h \
    ./modules/graphics/opengl/wrap_Font.h \
    ./modules/graphics/opengl/Font.h \
    ./modules/graphics/opengl/Polyline.cpp \
    ./modules/graphics/opengl/Canvas.cpp \
    ./modules/graphics/opengl/wrap_Shader.cpp \
    ./modules/graphics/opengl/OpenGL.cpp \
    ./modules/graphics/opengl/Mesh.h \
    ./modules/graphics/opengl/wrap_Canvas.cpp \
    ./modules/graphics/opengl/wrap_Font.cpp \
    ./modules/graphics/opengl/Image.h \
    ./modules/graphics/opengl/wrap_Graphics.cpp \
    ./modules/graphics/opengl/wrap_Quad.h \
    ./modules/graphics/opengl/wrap_Quad.cpp
endif

liblove_la_SOURCES += \
    ./modules/graphics/Graphics.cpp \
    ./modules/graphics/Graphics.h \
    ./modules/graphics/Texture.h \
    ./modules/graphics/Quad.cpp \
    ./modules/graphics/Volatile.h \
    ./modules/graphics/Volatile.cpp \
    ./modules/graphics/Quad.h \
    ./modules/graphics/Color.h \
    ./modules/graphics/Texture.cpp \
    ./modules/graphics/Drawable.h
endif

if LOVE_MODULE_IMAGE
if LOVE_IMPLEMENTATION_IMAGE_MAGPIE
liblove_la_SOURCES += \
    ./modules/image/magpie/CompressedFormatHandler.h \
    ./modules/image/magpie/PVRHandler.h \
    ./modules/image/magpie/ddsHandler.cpp \
    ./modules/image/magpie/DevilHandler.h \
    ./modules/image/magpie/FormatHandler.h \
    ./modules/image/magpie/ddsHandler.h \
    ./modules/image/magpie/KTXHandler.h \
    ./modules/image/magpie/DevilHandler.cpp \
    ./modules/image/magpie/KTXHandler.cpp \
    ./modules/image/magpie/CompressedData.cpp \
    ./modules/image/magpie/ImageData.h \
    ./modules/image/magpie/CompressedData.h \
    ./modules/image/magpie/Image.cpp \
    ./modules/image/magpie/PKMHandler.cpp \
    ./modules/image/magpie/PKMHandler.h \
    ./modules/image/magpie/ImageData.cpp \
    ./modules/image/magpie/Image.h \
    ./modules/image/magpie/PVRHandler.cpp \
    ./modules/image/magpie/FormatHandler.cpp
endif

liblove_la_SOURCES += \
    ./modules/image/wrap_Image.cpp \
    ./modules/image/CompressedData.cpp \
    ./modules/image/ImageData.h \
    ./modules/image/wrap_CompressedData.h \
    ./modules/image/wrap_ImageData.h \
    ./modules/image/CompressedData.h \
    ./modules/image/wrap_Image.h \
    ./modules/image/wrap_CompressedData.cpp \
    ./modules/image/ImageData.cpp \
    ./modules/image/wrap_ImageData.cpp \
    ./modules/image/Image.h
endif

if LOVE_MODULE_JOYSTICK
if LOVE_IMPLEMENTATION_JOYSTICK_SDL
liblove_la_SOURCES += \
    ./modules/joystick/sdl/Joystick.h \
    ./modules/joystick/sdl/Joystick.cpp \
    ./modules/joystick/sdl/JoystickModule.cpp \
    ./modules/joystick/sdl/JoystickModule.h
endif

liblove_la_SOURCES += \
    ./modules/joystick/wrap_JoystickModule.h \
    ./modules/joystick/wrap_Joystick.cpp \
    ./modules/joystick/wrap_Joystick.h \
    ./modules/joystick/Joystick.h \
    ./modules/joystick/Joystick.cpp \
    ./modules/joystick/wrap_JoystickModule.cpp \
    ./modules/joystick/JoystickModule.h
endif

if LOVE_MODULE_KEYBOARD
if LOVE_IMPLEMENTATION_KEYBOARD_SDL
liblove_la_SOURCES += \
    ./modules/keyboard/sdl/Keyboard.cpp \
    ./modules/keyboard/sdl/Keyboard.h
endif

liblove_la_SOURCES += \
    ./modules/keyboard/Keyboard.cpp \
    ./modules/keyboard/wrap_Keyboard.h \
    ./modules/keyboard/Keyboard.h \
    ./modules/keyboard/wrap_Keyboard.cpp
endif

if LOVE_MODULE_LOVE
liblove_la_SOURCES += \
    ./modules/love/love.h \
    ./modules/love/love.cpp
endif

if LOVE_MODULE_MATH
liblove_la_SOURCES += \
    ./modules/math/wrap_Math.cpp \
    ./modules/math/RandomGenerator.h \
    ./modules/math/BezierCurve.h \
    ./modules/math/MathModule.h \
    ./modules/math/wrap_RandomGenerator.cpp \
    ./modules/math/MathModule.cpp \
    ./modules/math/RandomGenerator.cpp \
    ./modules/math/wrap_Math.h \
    ./modules/math/wrap_BezierCurve.cpp \
    ./modules/math/BezierCurve.cpp \
    ./modules/math/wrap_BezierCurve.h \
    ./modules/math/wrap_RandomGenerator.h
endif

if LOVE_MODULE_MOUSE
if LOVE_IMPLEMENTATION_MOUSE_SDL
liblove_la_SOURCES += \
    ./modules/mouse/sdl/Cursor.cpp \
    ./modules/mouse/sdl/Mouse.cpp \
    ./modules/mouse/sdl/Mouse.h \
    ./modules/mouse/sdl/Cursor.h
endif

liblove_la_SOURCES += \
    ./modules/mouse/Cursor.cpp \
    ./modules/mouse/Mouse.cpp \
    ./modules/mouse/wrap_Mouse.cpp \
    ./modules/mouse/wrap_Cursor.cpp \
    ./modules/mouse/wrap_Cursor.h \
    ./modules/mouse/Mouse.h \
    ./modules/mouse/Cursor.h \
    ./modules/mouse/wrap_Mouse.h
endif

if LOVE_MODULE_PHYSICS
if LOVE_IMPLEMENTATION_PHYSICS_BOX2D
liblove_la_SOURCES += \
    ./modules/physics/box2d/MouseJoint.h \
    ./modules/physics/box2d/RevoluteJoint.h \
    ./modules/physics/box2d/World.cpp \
    ./modules/physics/box2d/wrap_FrictionJoint.h \
    ./modules/physics/box2d/Fixture.h \
    ./modules/physics/box2d/wrap_World.cpp \
    ./modules/physics/box2d/wrap_MotorJoint.h \
    ./modules/physics/box2d/wrap_ChainShape.cpp \
    ./modules/physics/box2d/Shape.h \
    ./modules/physics/box2d/wrap_CircleShape.h \
    ./modules/physics/box2d/GearJoint.h \
    ./modules/physics/box2d/wrap_WheelJoint.cpp \
    ./modules/physics/box2d/wrap_EdgeShape.cpp \
    ./modules/physics/box2d/CircleShape.cpp \
    ./modules/physics/box2d/Physics.h \
    ./modules/physics/box2d/wrap_WheelJoint.h \
    ./modules/physics/box2d/CircleShape.h \
    ./modules/physics/box2d/DistanceJoint.h \
    ./modules/physics/box2d/ChainShape.cpp \
    ./modules/physics/box2d/wrap_Contact.h \
    ./modules/physics/box2d/wrap_GearJoint.h \
    ./modules/physics/box2d/Shape.cpp \
    ./modules/physics/box2d/WheelJoint.cpp \
    ./modules/physics/box2d/wrap_PolygonShape.h \
    ./modules/physics/box2d/PolygonShape.h \
    ./modules/physics/box2d/wrap_CircleShape.cpp \
    ./modules/physics/box2d/DistanceJoint.cpp \
    ./modules/physics/box2d/PulleyJoint.cpp \
    ./modules/physics/box2d/wrap_Physics.cpp \
    ./modules/physics/box2d/wrap_WeldJoint.h \
    ./modules/physics/box2d/wrap_MouseJoint.cpp \
    ./modules/physics/box2d/PolygonShape.cpp \
    ./modules/physics/box2d/wrap_DistanceJoint.h \
    ./modules/physics/box2d/EdgeShape.h \
    ./modules/physics/box2d/wrap_DistanceJoint.cpp \
    ./modules/physics/box2d/Physics.cpp \
    ./modules/physics/box2d/PulleyJoint.h \
    ./modules/physics/box2d/wrap_ChainShape.h \
    ./modules/physics/box2d/Joint.cpp \
    ./modules/physics/box2d/wrap_PulleyJoint.cpp \
    ./modules/physics/box2d/MotorJoint.cpp \
    ./modules/physics/box2d/MouseJoint.cpp \
    ./modules/physics/box2d/wrap_EdgeShape.h \
    ./modules/physics/box2d/wrap_Contact.cpp \
    ./modules/physics/box2d/wrap_MouseJoint.h \
    ./modules/physics/box2d/wrap_RopeJoint.cpp \
    ./modules/physics/box2d/wrap_MotorJoint.cpp \
    ./modules/physics/box2d/wrap_WeldJoint.cpp \
    ./modules/physics/box2d/wrap_Joint.cpp \
    ./modules/physics/box2d/Contact.cpp \
    ./modules/physics/box2d/FrictionJoint.h \
    ./modules/physics/box2d/wrap_Joint.h \
    ./modules/physics/box2d/PrismaticJoint.cpp \
    ./modules/physics/box2d/wrap_Body.h \
    ./modules/physics/box2d/Body.cpp \
    ./modules/physics/box2d/ChainShape.h \
    ./modules/physics/box2d/FrictionJoint.cpp \
    ./modules/physics/box2d/WeldJoint.h \
    ./modules/physics/box2d/wrap_RevoluteJoint.cpp \
    ./modules/physics/box2d/Contact.h \
    ./modules/physics/box2d/wrap_Fixture.h \
    ./modules/physics/box2d/MotorJoint.h \
    ./modules/physics/box2d/wrap_Shape.h \
    ./modules/physics/box2d/wrap_Body.cpp \
    ./modules/physics/box2d/wrap_Shape.cpp \
    ./modules/physics/box2d/Joint.h \
    ./modules/physics/box2d/GearJoint.cpp \
    ./modules/physics/box2d/RevoluteJoint.cpp \
    ./modules/physics/box2d/wrap_Physics.h \
    ./modules/physics/box2d/RopeJoint.cpp \
    ./modules/physics/box2d/World.h \
    ./modules/physics/box2d/wrap_RevoluteJoint.h \
    ./modules/physics/box2d/wrap_PulleyJoint.h \
    ./modules/physics/box2d/wrap_PrismaticJoint.cpp \
    ./modules/physics/box2d/WeldJoint.cpp \
    ./modules/physics/box2d/Fixture.cpp \
    ./modules/physics/box2d/wrap_Fixture.cpp \
    ./modules/physics/box2d/PrismaticJoint.h \
    ./modules/physics/box2d/EdgeShape.cpp \
    ./modules/physics/box2d/wrap_GearJoint.cpp \
    ./modules/physics/box2d/RopeJoint.h \
    ./modules/physics/box2d/wrap_PolygonShape.cpp \
    ./modules/physics/box2d/wrap_FrictionJoint.cpp \
    ./modules/physics/box2d/WheelJoint.h \
    ./modules/physics/box2d/wrap_RopeJoint.h \
    ./modules/physics/box2d/wrap_World.h \
    ./modules/physics/box2d/wrap_PrismaticJoint.h \
    ./modules/physics/box2d/Body.h
endif

liblove_la_SOURCES += \
    ./modules/physics/Shape.h \
    ./modules/physics/Shape.cpp \
    ./modules/physics/Joint.cpp \
    ./modules/physics/Body.cpp \
    ./modules/physics/Joint.h \
    ./modules/physics/Body.h
endif

if LOVE_MODULE_SOUND
if LOVE_IMPLEMENTATION_SOUND_LULLABY
liblove_la_SOURCES += \
    ./modules/sound/lullaby/VorbisDecoder.cpp \
    ./modules/sound/lullaby/GmeDecoder.cpp \
    ./modules/sound/lullaby/Sound.h \
    ./modules/sound/lullaby/VorbisDecoder.h \
    ./modules/sound/lullaby/WaveDecoder.cpp \
    ./modules/sound/lullaby/ModPlugDecoder.cpp \
    ./modules/sound/lullaby/ModPlugDecoder.h \
    ./modules/sound/lullaby/WaveDecoder.h \
    ./modules/sound/lullaby/GmeDecoder.h \
    ./modules/sound/lullaby/Sound.cpp \
    ./modules/sound/lullaby/Decoder.cpp \
    ./modules/sound/lullaby/Decoder.h
endif

liblove_la_SOURCES += \
    ./modules/sound/wrap_SoundData.cpp \
    ./modules/sound/SoundData.cpp \
    ./modules/sound/Sound.h \
    ./modules/sound/SoundData.h \
    ./modules/sound/wrap_SoundData.h \
    ./modules/sound/wrap_Sound.cpp \
    ./modules/sound/wrap_Decoder.cpp \
    ./modules/sound/Sound.cpp \
    ./modules/sound/Decoder.h \
    ./modules/sound/wrap_Sound.h \
    ./modules/sound/wrap_Decoder.h
endif

if LOVE_MODULE_SYSTEM
if LOVE_IMPLEMENTATION_SYSTEM_SDL
liblove_la_SOURCES += \
    ./modules/system/sdl/System.h \
    ./modules/system/sdl/System.cpp
endif

liblove_la_SOURCES += \
    ./modules/system/System.h \
    ./modules/system/System.cpp \
    ./modules/system/wrap_System.h \
    ./modules/system/wrap_System.cpp
endif

if LOVE_MODULE_THREAD
if LOVE_IMPLEMENTATION_THREAD_SDL
liblove_la_SOURCES += \
    ./modules/thread/sdl/Thread.h \
    ./modules/thread/sdl/threads.cpp \
    ./modules/thread/sdl/threads.h \
    ./modules/thread/sdl/Thread.cpp
endif

liblove_la_SOURCES += \
    ./modules/thread/Thread.h \
    ./modules/thread/wrap_Channel.h \
    ./modules/thread/LuaThread.h \
    ./modules/thread/LuaThread.cpp \
    ./modules/thread/ThreadModule.h \
    ./modules/thread/threads.cpp \
    ./modules/thread/threads.h \
    ./modules/thread/ThreadModule.cpp \
    ./modules/thread/wrap_ThreadModule.h \
    ./modules/thread/Channel.cpp \
    ./modules/thread/wrap_Channel.cpp \
    ./modules/thread/wrap_LuaThread.cpp \
    ./modules/thread/Channel.h \
    ./modules/thread/wrap_ThreadModule.cpp \
    ./modules/thread/wrap_LuaThread.h
endif

if LOVE_MODULE_TIMER
if LOVE_IMPLEMENTATION_TIMER_SDL
liblove_la_SOURCES += \
    ./modules/timer/sdl/Timer.h \
    ./modules/timer/sdl/Timer.cpp
endif

liblove_la_SOURCES += \
    ./modules/timer/wrap_Timer.h \
    ./modules/timer/Timer.h \
    ./modules/timer/wrap_Timer.cpp
endif

if LOVE_MODULE_WINDOW
if LOVE_IMPLEMENTATION_WINDOW_SDL
liblove_la_SOURCES += \
    ./modules/window/sdl/Window.h \
    ./modules/window/sdl/Window.cpp
endif

liblove_la_SOURCES += \
    ./modules/window/Window.h \
    ./modules/window/wrap_Window.cpp \
    ./modules/window/Window.cpp \
    ./modules/window/wrap_Window.h
endif

if LOVE_LIBRARY_BOX2D
liblove_la_SOURCES += \
    ./libraries/Box2D/Dynamics/b2Fixture.h \
    ./libraries/Box2D/Dynamics/b2World.h \
    ./libraries/Box2D/Dynamics/b2Fixture.cpp \
    ./libraries/Box2D/Dynamics/Joints/b2RevoluteJoint.cpp \
    ./libraries/Box2D/Dynamics/Joints/b2MotorJoint.h \
    ./libraries/Box2D/Dynamics/Joints/b2WeldJoint.h \
    ./libraries/Box2D/Dynamics/Joints/b2PrismaticJoint.h \
    ./libraries/Box2D/Dynamics/Joints/b2GearJoint.h \
    ./libraries/Box2D/Dynamics/Joints/b2WheelJoint.cpp \
    ./libraries/Box2D/Dynamics/Joints/b2RopeJoint.cpp \
    ./libraries/Box2D/Dynamics/Joints/b2FrictionJoint.cpp \
    ./libraries/Box2D/Dynamics/Joints/b2PulleyJoint.cpp \
    ./libraries/Box2D/Dynamics/Joints/b2DistanceJoint.cpp \
    ./libraries/Box2D/Dynamics/Joints/b2DistanceJoint.h \
    ./libraries/Box2D/Dynamics/Joints/b2Joint.cpp \
    ./libraries/Box2D/Dynamics/Joints/b2WeldJoint.cpp \
    ./libraries/Box2D/Dynamics/Joints/b2Joint.h \
    ./libraries/Box2D/Dynamics/Joints/b2WheelJoint.h \
    ./libraries/Box2D/Dynamics/Joints/b2GearJoint.cpp \
    ./libraries/Box2D/Dynamics/Joints/b2MotorJoint.cpp \
    ./libraries/Box2D/Dynamics/Joints/b2MouseJoint.h \
    ./libraries/Box2D/Dynamics/Joints/b2PrismaticJoint.cpp \
    ./libraries/Box2D/Dynamics/Joints/b2MouseJoint.cpp \
    ./libraries/Box2D/Dynamics/Joints/b2PulleyJoint.h \
    ./libraries/Box2D/Dynamics/Joints/b2RopeJoint.h \
    ./libraries/Box2D/Dynamics/Joints/b2RevoluteJoint.h \
    ./libraries/Box2D/Dynamics/Joints/b2FrictionJoint.h \
    ./libraries/Box2D/Dynamics/b2WorldCallbacks.cpp \
    ./libraries/Box2D/Dynamics/b2ContactManager.cpp \
    ./libraries/Box2D/Dynamics/Contacts/b2ChainAndPolygonContact.h \
    ./libraries/Box2D/Dynamics/Contacts/b2EdgeAndCircleContact.h \
    ./libraries/Box2D/Dynamics/Contacts/b2CircleContact.h \
    ./libraries/Box2D/Dynamics/Contacts/b2ChainAndPolygonContact.cpp \
    ./libraries/Box2D/Dynamics/Contacts/b2ContactSolver.cpp \
    ./libraries/Box2D/Dynamics/Contacts/b2Contact.cpp \
    ./libraries/Box2D/Dynamics/Contacts/b2EdgeAndCircleContact.cpp \
    ./libraries/Box2D/Dynamics/Contacts/b2ChainAndCircleContact.cpp \
    ./libraries/Box2D/Dynamics/Contacts/b2PolygonContact.h \
    ./libraries/Box2D/Dynamics/Contacts/b2Contact.h \
    ./libraries/Box2D/Dynamics/Contacts/b2PolygonAndCircleContact.h \
    ./libraries/Box2D/Dynamics/Contacts/b2EdgeAndPolygonContact.h \
    ./libraries/Box2D/Dynamics/Contacts/b2CircleContact.cpp \
    ./libraries/Box2D/Dynamics/Contacts/b2EdgeAndPolygonContact.cpp \
    ./libraries/Box2D/Dynamics/Contacts/b2ContactSolver.h \
    ./libraries/Box2D/Dynamics/Contacts/b2ChainAndCircleContact.h \
    ./libraries/Box2D/Dynamics/Contacts/b2PolygonContact.cpp \
    ./libraries/Box2D/Dynamics/Contacts/b2PolygonAndCircleContact.cpp \
    ./libraries/Box2D/Dynamics/b2ContactManager.h \
    ./libraries/Box2D/Dynamics/b2World.cpp \
    ./libraries/Box2D/Dynamics/b2Island.cpp \
    ./libraries/Box2D/Dynamics/b2Body.h \
    ./libraries/Box2D/Dynamics/b2WorldCallbacks.h \
    ./libraries/Box2D/Dynamics/b2Body.cpp \
    ./libraries/Box2D/Dynamics/b2TimeStep.h \
    ./libraries/Box2D/Dynamics/b2Island.h \
    ./libraries/Box2D/Box2D.h \
    ./libraries/Box2D/Common/b2Draw.h \
    ./libraries/Box2D/Common/b2Math.h \
    ./libraries/Box2D/Common/b2BlockAllocator.cpp \
    ./libraries/Box2D/Common/b2BlockAllocator.h \
    ./libraries/Box2D/Common/b2Math.cpp \
    ./libraries/Box2D/Common/b2StackAllocator.h \
    ./libraries/Box2D/Common/b2GrowableStack.h \
    ./libraries/Box2D/Common/b2StackAllocator.cpp \
    ./libraries/Box2D/Common/b2Draw.cpp \
    ./libraries/Box2D/Common/b2Timer.cpp \
    ./libraries/Box2D/Common/b2Settings.cpp \
    ./libraries/Box2D/Common/b2Settings.h \
    ./libraries/Box2D/Common/b2Timer.h \
    ./libraries/Box2D/Rope/b2Rope.h \
    ./libraries/Box2D/Rope/b2Rope.cpp \
    ./libraries/Box2D/Collision/b2CollideCircle.cpp \
    ./libraries/Box2D/Collision/b2Distance.h \
    ./libraries/Box2D/Collision/b2BroadPhase.h \
    ./libraries/Box2D/Collision/b2CollideEdge.cpp \
    ./libraries/Box2D/Collision/b2DynamicTree.h \
    ./libraries/Box2D/Collision/b2Distance.cpp \
    ./libraries/Box2D/Collision/b2DynamicTree.cpp \
    ./libraries/Box2D/Collision/b2CollidePolygon.cpp \
    ./libraries/Box2D/Collision/b2Collision.h \
    ./libraries/Box2D/Collision/b2TimeOfImpact.cpp \
    ./libraries/Box2D/Collision/b2Collision.cpp \
    ./libraries/Box2D/Collision/Shapes/b2PolygonShape.cpp \
    ./libraries/Box2D/Collision/Shapes/b2EdgeShape.cpp \
    ./libraries/Box2D/Collision/Shapes/b2CircleShape.h \
    ./libraries/Box2D/Collision/Shapes/b2PolygonShape.h \
    ./libraries/Box2D/Collision/Shapes/b2ChainShape.h \
    ./libraries/Box2D/Collision/Shapes/b2CircleShape.cpp \
    ./libraries/Box2D/Collision/Shapes/b2Shape.h \
    ./libraries/Box2D/Collision/Shapes/b2EdgeShape.h \
    ./libraries/Box2D/Collision/Shapes/b2ChainShape.cpp \
    ./libraries/Box2D/Collision/b2BroadPhase.cpp \
    ./libraries/Box2D/Collision/b2TimeOfImpact.h
endif

if LOVE_LIBRARY_WUFF
liblove_la_SOURCES += \
    ./libraries/Wuff/wuff_convert.h \
    ./libraries/Wuff/wuff_config.h \
    ./libraries/Wuff/wuff.h \
    ./libraries/Wuff/wuff.c \
    ./libraries/Wuff/wuff_memory.c \
    ./libraries/Wuff/wuff_internal.c \
    ./libraries/Wuff/wuff_internal.h \
    ./libraries/Wuff/wuff_convert.c
endif

if LOVE_LIBRARY_DDSPARSE
liblove_la_SOURCES += \
    ./libraries/ddsparse/ddsinfo.h \
    ./libraries/ddsparse/ddsparse.h \
    ./libraries/ddsparse/ddsparse.cpp
endif

if LOVE_LIBRARY_ENET
liblove_la_SOURCES += \
    ./libraries/enet/libenet/unix.c \
    ./libraries/enet/libenet/protocol.c \
    ./libraries/enet/libenet/callbacks.c \
    ./libraries/enet/libenet/compress.c \
    ./libraries/enet/libenet/list.c \
    ./libraries/enet/libenet/peer.c \
    ./libraries/enet/libenet/packet.c \
    ./libraries/enet/libenet/host.c \
    ./libraries/enet/libenet/include/enet/protocol.h \
    ./libraries/enet/libenet/include/enet/time.h \
    ./libraries/enet/libenet/include/enet/types.h \
    ./libraries/enet/libenet/include/enet/callbacks.h \
    ./libraries/enet/libenet/include/enet/win32.h \
    ./libraries/enet/libenet/include/enet/list.h \
    ./libraries/enet/libenet/include/enet/utility.h \
    ./libraries/enet/libenet/include/enet/unix.h \
    ./libraries/enet/libenet/include/enet/enet.h \
    ./libraries/enet/libenet/win32.c \
    ./libraries/enet/lua-enet.h \
    ./libraries/enet/enet.cpp
endif

if LOVE_LIBRARY_GLAD
liblove_la_SOURCES += \
    ./libraries/glad/glad.hpp \
    ./libraries/glad/gladfuncs.hpp \
    ./libraries/glad/glad.cpp
endif

if LOVE_LIBRARY_LUASOCKET
liblove_la_SOURCES += \
    ./libraries/luasocket/libluasocket/mime.c \
    ./libraries/luasocket/libluasocket/ftp.lua.h \
    ./libraries/luasocket/libluasocket/ltn12.lua.h \
    ./libraries/luasocket/libluasocket/unix.c \
    ./libraries/luasocket/libluasocket/smtp.lua.h \
    ./libraries/luasocket/libluasocket/url.lua.h \
    ./libraries/luasocket/libluasocket/tcp.c \
    ./libraries/luasocket/libluasocket/udp.h \
    ./libraries/luasocket/libluasocket/options.h \
    ./libraries/luasocket/libluasocket/auxiliar.c \
    ./libraries/luasocket/libluasocket/except.h \
    ./libraries/luasocket/libluasocket/udp.c \
    ./libraries/luasocket/libluasocket/mime.lua.h \
    ./libraries/luasocket/libluasocket/timeout.h \
    ./libraries/luasocket/libluasocket/luasocket.c \
    ./libraries/luasocket/libluasocket/socket.lua.h \
    ./libraries/luasocket/libluasocket/buffer.h \
    ./libraries/luasocket/libluasocket/io.h \
    ./libraries/luasocket/libluasocket/mime.h \
    ./libraries/luasocket/libluasocket/timeout.c \
    ./libraries/luasocket/libluasocket/io.c \
    ./libraries/luasocket/libluasocket/buffer.c \
    ./libraries/luasocket/libluasocket/luasocket.h \
    ./libraries/luasocket/libluasocket/http.lua.h \
    ./libraries/luasocket/libluasocket/select.c \
    ./libraries/luasocket/libluasocket/options.c \
    ./libraries/luasocket/libluasocket/lua.h \
    ./libraries/luasocket/libluasocket/inet.c \
    ./libraries/luasocket/libluasocket/tcp.h \
    ./libraries/luasocket/libluasocket/socket.h \
    ./libraries/luasocket/libluasocket/unix.h \
    ./libraries/luasocket/libluasocket/tp.lua.h \
    ./libraries/luasocket/libluasocket/inet.h \
    ./libraries/luasocket/libluasocket/auxiliar.h \
    ./libraries/luasocket/libluasocket/usocket.c \
    ./libraries/luasocket/libluasocket/usocket.h \
    ./libraries/luasocket/libluasocket/select.h \
    ./libraries/luasocket/libluasocket/except.c \
    ./libraries/luasocket/luasocket.h \
    ./libraries/luasocket/luasocket.cpp
endif

if LOVE_LIBRARY_LUAUTF8
liblove_la_SOURCES += \
    ./libraries/luautf8/lutf8lib.c \
    ./libraries/luautf8/lprefix.h \
    ./libraries/luautf8/lutf8lib.h
endif

if LOVE_LIBRARY_NOISE1234
liblove_la_SOURCES += \
    ./libraries/noise1234/simplexnoise1234.h \
    ./libraries/noise1234/simplexnoise1234.cpp
endif

if LOVE_LIBRARY_UTF8
liblove_la_SOURCES += \
    ./libraries/utf8/utf8.h \
    ./libraries/utf8/utf8/unchecked.h \
    ./libraries/utf8/utf8/checked.h \
    ./libraries/utf8/utf8/core.h
endif

if !LOVE_NOMPG123
liblove_la_SOURCES += \
    ./modules/sound/lullaby/Mpg123Decoder.cpp \
    ./modules/sound/lullaby/Mpg123Decoder.h
endif
