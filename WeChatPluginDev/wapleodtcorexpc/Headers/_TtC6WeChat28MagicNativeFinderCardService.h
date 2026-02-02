//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat28MagicNativeFinderCardService
{
    MISSING_TYPE *$__lazy_storage_$__frameSetRootConfig;
    MISSING_TYPE *$__lazy_storage_$__bizConfig;
    MISSING_TYPE *finderBiz;
}

- (void).cxx_destruct;
- (id)init;
- (void)jsApiEventHandler:(id)arg1 extraInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)destroyBiz;
- (void)removeFrameSetViewWithFrameSetName:(id)arg1;
- (void)notifyEventWithJsEventName:(id)arg1 frameSetName:(id)arg2;
- (void)notifyFrameSetExposeWithFrameSetName:(id)arg1 isExpose:(_Bool)arg2;
- (void)controlAdVideoWithControlType:(int)arg1 frameSetName:(id)arg2;
- (void)bindFrameSetViewWithContainerView:(id)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)controlPreloadAdMediaWithPreloadType:(int)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)preRenderWithFrameSetName:(id)arg1 frameSetData:(id)arg2 containerRect:(struct CGRect)arg3;
- (void)createBiz;

@end

