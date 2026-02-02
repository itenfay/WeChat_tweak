//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, YYWAWebView;

@protocol YYWAWebViewSyncJSAPIDelegate <NSObject>

@optional
- (void)webview:(YYWAWebView *)arg1 onCallRawInnerSyncJSApi:(NSString *)arg2 params:(NSDictionary *)arg3 completion:(void (^)(NSString *))arg4;
@end

