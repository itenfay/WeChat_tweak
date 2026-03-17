//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol WAFileSpaceTraceLogicScanDataSource <NSObject>
- (unsigned long long)scanIntervalWithPrefix:(NSString *)arg1;
- (NSString *)directoryOfAppId:(NSString *)arg1 prefix:(NSString *)arg2;
- (NSArray *)appIdsThatHaveDirectoryWithPrefix:(NSString *)arg1;
@end

