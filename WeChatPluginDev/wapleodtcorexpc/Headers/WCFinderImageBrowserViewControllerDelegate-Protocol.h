//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIImageView, WCFinderImageBrowserViewController;

@protocol WCFinderImageBrowserViewControllerDelegate <NSObject>
- (void)imageBrowser:(WCFinderImageBrowserViewController *)arg1 didSwitchPhotoWithIndex:(unsigned long long)arg2;
- (void)imageBrowserViewControllerWillDismissSelf:(WCFinderImageBrowserViewController *)arg1;
- (UIImageView *)imageBrowserViewControllerTransitionImageView:(WCFinderImageBrowserViewController *)arg1;
- (void)imageBrowserTransitionAnimationWithStart:(_Bool)arg1 present:(_Bool)arg2;
@end

