//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol WSWebViewPluginableProtocol;

@protocol IWSWebViewPluginProtocol <NSObject>
@property(nonatomic) __weak id <WSWebViewPluginableProtocol> webviewOwner;
- (void)handleEvent:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
@end

