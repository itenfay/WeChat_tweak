//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MBExternalViewStub, NSString;

@interface MagicWeAppCardSclFrameSetView
{
    _Bool _haveNewNativeViewTexture;
    struct __CVBuffer *_pixelBuffer;
    MBExternalViewStub *_mbView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MBExternalViewStub *mbView; // @synthesize mbView=_mbView;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(nonatomic) _Bool haveNewNativeViewTexture; // @synthesize haveNewNativeViewTexture=_haveNewNativeViewTexture;
- (void)setMBExternalViewStub:(id)arg1;
- (void)handleNativeViewPointerEvent:(id)arg1;
- (void)onPixelBufferCallBack:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2;
- (void)initNativeViewTexture;
- (unsigned long long)getNativeViewTextureRotation;
- (struct __CVBuffer *)getNativeViewTexture;
- (long long)getNativeViewContentMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

