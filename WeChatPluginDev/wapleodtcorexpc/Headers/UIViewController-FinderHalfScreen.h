//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@interface UIViewController (FinderHalfScreen)
- (_Bool)isPresentedByJumpInfo;
- (void)setJumpInfoPresentedFlag:(_Bool)arg1 type:(int)arg2;
- (_Bool)presentedHalfScreenStatusBarHidden;
- (void)setPresentedHalfScreenStatusBarHidden:(_Bool)arg1;
- (void)_observeViewFrameChanged:(id)arg1 changeBlock:(CDUnknownBlockType)arg2;
- (void)bindListenProgressObjectModel:(id)arg1;
- (id)_getBindDismissTransition;
- (id)_getBindTransformView;
- (id)_getBindContainerView;
- (id)findPreViewController;
- (void)tagHasAlreadyDisplay;
- (void)unHookVCForFinderVideoPlayStatus;
- (void)removeFinderHalfScreenState;
- (void)hookVCForFinderVideoPlayStatus;
- (void)setFinderHalfScreenStateBindVC:(id)arg1;
- (void)setFinderHalfScreenState;
@end

