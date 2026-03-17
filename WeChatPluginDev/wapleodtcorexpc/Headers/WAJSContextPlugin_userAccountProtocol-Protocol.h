//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WADataPipePerformance;

@protocol WAJSContextPlugin_userAccountProtocol <NSObject>
@property(retain, nonatomic) NSString *appId;
@property(retain, nonatomic) WADataPipePerformance *performance;
@property(retain) NSDictionary *dicInputParam;
- (_Bool)isHolderTaskKilled;
- (void)endWithTimeout;
- (void)onUserAccountJSEventEnd;
- (void)mainThread_runUserAccountJSEvent:(NSDictionary *)arg1;
@end

