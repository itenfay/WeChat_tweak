//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSArray, NSDictionary;
@protocol WXCustomWebViewControllerProtocol;

@protocol WebviewJSEventHandlerBaseDelegate <NSObject>
- (MMUIViewController<WXCustomWebViewControllerProtocol> *)webviewController;

@optional
- (NSDictionary *)isExistJSApis:(NSArray *)arg1;
@end

