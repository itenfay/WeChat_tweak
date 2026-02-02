//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAEJBindingWebGLContextAttributes
{
    _Bool _mAlpha;
    _Bool _mDepth;
    _Bool _mStencil;
    _Bool _mAntialias;
    _Bool _mPremultipliedAlpha;
    _Bool _mPreserveDrawingBuffer;
}

+ (void *)_ptr_to_get_preserveDrawingBuffer;
+ (void *)_ptr_to_get_premultipliedAlpha;
+ (void *)_ptr_to_get_antialias;
+ (void *)_ptr_to_get_stencil;
+ (void *)_ptr_to_get_depth;
+ (void *)_ptr_to_get_alpha;
@property(nonatomic) _Bool _mPreserveDrawingBuffer; // @synthesize _mPreserveDrawingBuffer;
@property(nonatomic) _Bool _mPremultipliedAlpha; // @synthesize _mPremultipliedAlpha;
@property(nonatomic) _Bool _mAntialias; // @synthesize _mAntialias;
@property(nonatomic) _Bool _mStencil; // @synthesize _mStencil;
@property(nonatomic) _Bool _mDepth; // @synthesize _mDepth;
@property(nonatomic) _Bool _mAlpha; // @synthesize _mAlpha;
- (struct OpaqueJSValue *)_get_preserveDrawingBuffer:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_premultipliedAlpha:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_antialias:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_stencil:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_depth:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_alpha:(struct OpaqueJSContext *)arg1;

@end

