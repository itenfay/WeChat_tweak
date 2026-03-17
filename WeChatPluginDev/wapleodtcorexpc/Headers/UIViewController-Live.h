//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@interface UIViewController (Live)
- (_Bool)isFullPageViewOverLiveRoom;
- (void)setIsLivePreviewMode:(_Bool)arg1;
- (_Bool)isLivePreviewMode;
- (void)setHasFullScreenPopup:(_Bool)arg1;
- (_Bool)hasFullScreenPopup;
- (_Bool)isPageSheetVC;
- (_Bool)isHalfPage;
- (void)setIsHalfPage:(_Bool)arg1;
- (id)liveOpenParam;
- (void)setLiveOpenParam:(id)arg1;
- (_Bool)needShowLiveMinimizeWindowForPresentedViewController;
- (void)setNeedShowLiveMinimizeWindowForPresentedViewController:(_Bool)arg1;
- (_Bool)needShowLiveMinimizeWindowForAllPushedViewControllers;
- (void)setNeedShowLiveMinimizeWindowForAllPushedViewControllers:(_Bool)arg1;
- (_Bool)needShowLiveMinizeWindow;
- (_Bool)doNotShowLiveMinimizeWindow;
- (void)setDoNotShowLiveMinimizeWindow:(_Bool)arg1;
- (void)setNeedShowLiveMinimizeWindow:(_Bool)arg1;
- (id)liveMinimizeWindowRunTimeHandler;
- (void)setLiveMinimizeWindowRunTimeHandler:(id)arg1;
@end

