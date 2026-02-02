//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCVideoProducerBaseViewControllerFragment
{
    struct CGRect _containerFrame;
}

@property(nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
- (_Bool)hidesStatusBar;
- (_Bool)useTransparentNavibar;
- (void)dismissFragmentAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)showFragmentAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (double)getFragmentVisibleHeight;
- (double)getFragmentHeight;
- (_Bool)isShowing;
- (struct CGRect)getContainerFrame;
- (void)updateContainerFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithContainerFrame:(struct CGRect)arg1;
- (void)setViewTop:(double)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (double)getContentHeightWhenShowing;
- (void)onRelayoutViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

