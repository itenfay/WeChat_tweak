//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMWebViewController, WCPayBindCardInfo;

@protocol WCPayAvaliablePayCardListViewDelegate <NSObject>
- (void)OnWCPayAvaliablePayCardListViewWebViewReturn:(MMWebViewController *)arg1;
- (void)OnWCPayAvaliablePayCardListViewPushWebView:(MMWebViewController *)arg1;
- (void)OnWCPayAvaliablePayCardListViewAddPayCard;
- (void)OnWCPayAvaliablePayCardListViewNext:(WCPayBindCardInfo *)arg1;
- (void)OnWCPayAvaliablePayCardListViewBack;
- (void)OnWCPayAvaliablePayCardListViewCancel;
@end

