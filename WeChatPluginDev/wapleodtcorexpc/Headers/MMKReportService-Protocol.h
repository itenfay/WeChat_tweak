//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMKReportService <NSObject>
- (NSString *)getLastSessionInfo;
- (void)setLastSessionInfo:(NSString *)arg1;
- (long long)svrTimeMs;
- (void)kvStat:(int)arg1 val:(NSString *)arg2;
- (void)idkeyStat:(long long)arg1 key:(long long)arg2 val:(long long)arg3 isImportant:(_Bool)arg4;
@end

