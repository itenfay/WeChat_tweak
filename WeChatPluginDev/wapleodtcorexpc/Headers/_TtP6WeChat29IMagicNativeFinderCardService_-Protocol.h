//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView;

@protocol _TtP6WeChat29IMagicNativeFinderCardService_
- (void)destroyBiz;
- (void)removeFrameSetViewWithFrameSetName:(NSString *)arg1;
- (void)notifyEventWithJsEventName:(NSString *)arg1 frameSetName:(NSString *)arg2;
- (void)controlAdVideoWithControlType:(int)arg1 frameSetName:(NSString *)arg2;
- (void)notifyFrameSetExposeWithFrameSetName:(NSString *)arg1 isExpose:(_Bool)arg2;
- (void)bindFrameSetViewWithContainerView:(UIView *)arg1 frameSetName:(NSString *)arg2 frameSetData:(NSString *)arg3;
- (void)controlPreloadAdMediaWithPreloadType:(int)arg1 frameSetName:(NSString *)arg2 frameSetData:(NSString *)arg3;
- (void)preRenderWithFrameSetName:(NSString *)arg1 frameSetData:(NSString *)arg2 containerRect:(struct CGRect)arg3;
- (void)createBiz;
@end

