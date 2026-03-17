//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController;
@protocol WXCustomWebViewControllerProtocol;

@protocol WebPrefetcherJSApiLogicDelegate <NSObject>
- (_Bool)isJSApiFuncPermissionValid:(long long)arg1;
- (MMUIViewController<WXCustomWebViewControllerProtocol> *)getCurrentWebViewController;
@end

