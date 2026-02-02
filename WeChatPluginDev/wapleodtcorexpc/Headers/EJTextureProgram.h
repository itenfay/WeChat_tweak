//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EJTextureProgram : NSObject
{
    _Bool _ready;
    unsigned int _program;
    unsigned int _vertexShader;
    unsigned int _fragmentShader;
    unsigned int _position;
    unsigned int _coords;
    unsigned int _texture;
    unsigned int _vao;
    unsigned int _vbo;
    unsigned int _ebo;
}

@property(readonly, nonatomic) _Bool ready; // @synthesize ready=_ready;
- (_Bool)compileShader:(const char *)arg1 withType:(unsigned int)arg2 shaderHandle:(unsigned int *)arg3;
- (void)destroy;
- (void)use;
- (_Bool)create:(const char *)arg1 fragmentsShader:(const char *)arg2;
- (void)dealloc;

@end

