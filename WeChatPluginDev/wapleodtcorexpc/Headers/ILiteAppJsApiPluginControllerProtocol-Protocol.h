//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LiteAppJsApiPluginScheduler, NSDictionary, NSMutableDictionary, NSString;

@protocol ILiteAppJsApiPluginControllerProtocol <NSObject>
@property(nonatomic) long long storeUiStatusBarStyle;
- (NSMutableDictionary *)extraData;
- (LiteAppJsApiPluginScheduler *)jsApiPluginScheduler;
- (void)publishGlobalEvent:(NSString *)arg1 params:(NSDictionary *)arg2;
- (unsigned int)getLiteAppUuid;
- (NSString *)getLiteAppId;
@end

