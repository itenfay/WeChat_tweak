//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAWebViewController;

@protocol WAWebViewMutiFuncMenuViewDelegate <NSObject>
- (void)onWebViewMenuHomeButtonClicked;
- (void)onWebViewMenuCustomRightButtonClick;
- (_Bool)isWebviewPresenting;
- (void)onWebViewMenuReturn;

@optional
- (double)getStatusBarHeight;
- (void)onWebviewMenuWeAppEntryBtnClicked;
- (WAWebViewController *)getCurrentWebView;
@end

