//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAWebViewController;

@protocol WAWebViewControllerMenuActionCustomDelegate <NSObject>
- (_Bool)webViewControllerMenuMustNotShowFavItem:(WAWebViewController *)arg1;
- (_Bool)webViewControllerMenuMustNotShowADMenuItem:(WAWebViewController *)arg1;
- (_Bool)webViewControllerMenuMustNotHandleMenuShowOrDismiss:(WAWebViewController *)arg1;
- (_Bool)webViewControllerMenuMustShowGoHomeInWeApp:(WAWebViewController *)arg1;
- (_Bool)webViewControllerMenuMustNotShareTimeline:(WAWebViewController *)arg1;
- (_Bool)webViewControllerMenuMustNotShare:(WAWebViewController *)arg1;
@end

