//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMGPUGLProgram : NSObject
{
    NSMutableArray *attributes;
    NSMutableArray *uniforms;
    unsigned int program;
    unsigned int vertShader;
    unsigned int fragShader;
    _Bool _initialized;
    NSString *_vertexShaderLog;
    NSString *_fragmentShaderLog;
    NSString *_programLog;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *programLog; // @synthesize programLog=_programLog;
@property(copy, nonatomic) NSString *fragmentShaderLog; // @synthesize fragmentShaderLog=_fragmentShaderLog;
@property(copy, nonatomic) NSString *vertexShaderLog; // @synthesize vertexShaderLog=_vertexShaderLog;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
- (void)dealloc;
- (void)validate;
- (void)use;
- (_Bool)link;
- (unsigned int)uniformIndex:(id)arg1;
- (unsigned int)attributeIndex:(id)arg1;
- (void)addAttribute:(id)arg1;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 string:(id)arg3;
- (id)initWithVertexShaderFilename:(id)arg1 fragmentShaderFilename:(id)arg2;
- (id)initWithVertexShaderString:(id)arg1 fragmentShaderFilename:(id)arg2;
- (id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;

@end

