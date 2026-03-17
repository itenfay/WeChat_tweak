//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol ITPReportWrapper <NSObject>
+ (void)setupGuid:(NSString *)arg1;
+ (void)initBeaconSDK;
- (void)reportEvent:(NSString *)arg1 withParams:(NSDictionary *)arg2;
@end

