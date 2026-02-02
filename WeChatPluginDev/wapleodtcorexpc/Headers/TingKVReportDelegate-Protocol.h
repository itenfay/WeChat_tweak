//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSString, TingKVReportData;

@protocol TingKVReportDelegate <NSObject, UnitRCBaseProtocol>
- (void)idKeyStat:(int)arg1 key:(int)arg2 value:(int)arg3 isImportant:(int)arg4;
- (void)kvStat:(int)arg1 value:(NSString *)arg2 isReportNow:(_Bool)arg3 isImportant:(_Bool)arg4 ignoreFreqLimit:(_Bool)arg5;
- (void)kvStatData:(TingKVReportData *)arg1;
@end

