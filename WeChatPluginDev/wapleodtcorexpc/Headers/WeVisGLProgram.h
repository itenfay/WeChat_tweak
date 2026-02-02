//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WeVisGLProgram : NSObject
{
    NSMutableArray *attributes;
    NSMutableArray *uniforms;
    unsigned int vertShaderId;
    unsigned int fragShaderId;
    _Bool _isCompileAndLinked;
    unsigned int _programId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCompileAndLinked; // @synthesize isCompileAndLinked=_isCompileAndLinked;
@property(nonatomic) unsigned int programId; // @synthesize programId=_programId;
- (_Bool)validate;
- (void)bind;
- (_Bool)link;
- (unsigned int)uniformIndex:(id)arg1;
- (unsigned int)attributeIndex:(id)arg1;
- (void)addAttribute:(id)arg1;
- (void)dealloc;
- (id)initWithVertShader:(const char *)arg1 fragShader:(const char *)arg2;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 source:(const char *)arg3;

@end

