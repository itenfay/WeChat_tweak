//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCRedEnvWeAppDelegate <NSObject>
- (void)onRedEnvCancel;
- (void)onRedEnvFail:(NSString *)arg1;
- (void)onRedEnvSuccess:(NSDictionary *)arg1;
- (NSDictionary *)getRedEnvParam;
@end

