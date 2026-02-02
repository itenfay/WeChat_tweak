//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableSet;

@interface WAEJBindingWebGLVertexArray
{
    _Bool _allEnableVertexAttribBufferBound;
    int _elementArrayBuffer;
    NSMutableSet *_enabledAttribs;
    NSMutableDictionary *_attribToBuffer;
}

+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 webglContext:(id)arg3 index:(unsigned int)arg4;
@property(nonatomic) NSMutableDictionary *attribToBuffer; // @synthesize attribToBuffer=_attribToBuffer;
@property(nonatomic) NSMutableSet *enabledAttribs; // @synthesize enabledAttribs=_enabledAttribs;
@property(nonatomic) _Bool allEnableVertexAttribBufferBound; // @synthesize allEnableVertexAttribBufferBound=_allEnableVertexAttribBufferBound;
@property(nonatomic) int elementArrayBuffer; // @synthesize elementArrayBuffer=_elementArrayBuffer;
- (void)removeBuffer:(int)arg1;
- (void)setAttribEnabled:(_Bool)arg1 at:(unsigned int)arg2;
- (void)setArrayBuffer:(int)arg1 forAttrib:(unsigned int)arg2;
- (void)updateAttribBufferBoundStatus;
- (_Bool)isAllEnabledVertexAttribBufferBound;
- (void)invalidate;
- (void)dealloc;
- (id)initWithWebGLContext:(id)arg1 index:(unsigned int)arg2;

@end

