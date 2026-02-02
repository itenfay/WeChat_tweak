//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol WCFinderGlobalRedDotFrequencyReportHelperDelegate <NSObject>

@optional
- (NSNumber *)onReportHelperGetCurrentBanCntAtPath:(NSString *)arg1 businessType:(unsigned long long)arg2;
- (NSNumber *)onReportHelperGetCurrentExposeCntAtPath:(NSString *)arg1 businessType:(unsigned long long)arg2;
- (NSNumber *)onReportHelperGetCurrentExposeStageAtPath:(NSString *)arg1 businessType:(unsigned long long)arg2;
- (NSNumber *)onReportHelperGetCurrentPunishStageAtPath:(NSString *)arg1 businessType:(unsigned long long)arg2;
- (NSNumber *)onReportHelperGetAccExpStartTimeAtPath:(NSString *)arg1 businessType:(unsigned long long)arg2;
- (NSString *)onReportHelperGetExposeRedDotIdAtPath:(NSString *)arg1 businessType:(unsigned long long)arg2;
- (NSNumber *)onReportHelperGetCurrentIsNextCleanPunishAtPath:(NSString *)arg1 businessType:(unsigned long long)arg2;
- (NSNumber *)onReportHelperGetIsNextPunishAtPath:(NSString *)arg1 businessType:(unsigned long long)arg2;
- (NSNumber *)onReportHelperGetIsBanAsUseBusinessAtPath:(NSString *)arg1 businessType:(unsigned long long)arg2;
- (NSNumber *)onReportHelperGetNextPunishMAtPath:(NSString *)arg1 businessType:(unsigned long long)arg2;
@end

