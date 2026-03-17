//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCPayPayJSApiLogicParamDelegate <NSObject>
- (NSString *)getTinyappPath;
- (NSString *)getTinyappUserName;
- (NSDictionary *)getWCPayPayParam;
@end

