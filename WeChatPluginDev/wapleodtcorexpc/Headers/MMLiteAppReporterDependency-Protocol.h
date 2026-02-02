//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiteAppMetricsInfo, NSString;

@protocol MMLiteAppReporterDependency <NSObject>
- (NSString *)generateUUID;
- (MMLiteAppMetricsInfo *)getMetricsInfo;
- (void)kvlog:(int)arg1 logString:(NSString *)arg2;
@end

