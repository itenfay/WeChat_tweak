//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TXCGlProgram : NSObject
{
    unsigned int _program;
    NSMutableDictionary *_uniforms;
    NSMutableDictionary *_attributes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSMutableDictionary *uniforms; // @synthesize uniforms=_uniforms;
@property(readonly, nonatomic) unsigned int program; // @synthesize program=_program;
- (void)setVec4:(struct GPUVector4)arg1 forUniformName:(id)arg2;
- (void)setVec2:(struct GPUVector2)arg1 forUniformName:(id)arg2;
- (void)setFloat:(float)arg1 forUniformName:(id)arg2;
- (void)setInt:(int)arg1 forUniformName:(id)arg2;
- (unsigned int)attributeIndexOf:(id)arg1;
- (unsigned int)uniformIndexOf:(id)arg1;
- (_Bool)checkLinkResult:(unsigned int)arg1;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)use;
- (unsigned int)setupProgramWithVertex:(id)arg1 fragment:(id)arg2;
- (void)dealloc;
- (id)initWithVertex:(id)arg1 fragment:(id)arg2;

@end

