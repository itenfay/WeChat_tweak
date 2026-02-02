//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAEJGLProgram2D : NSObject
{
    unsigned int program;
    unsigned int screen;
}

+ (void)linkProgram:(unsigned int)arg1;
+ (int)compileShaderSource:(const char *)arg1 type:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int screen; // @synthesize screen;
@property(readonly, nonatomic) unsigned int program; // @synthesize program;
- (void)getUniforms;
- (void)bindAttributeLocations;
- (void)dealloc;
- (id)initWithVertexShader:(const char *)arg1 fragmentShader:(const char *)arg2;

@end

