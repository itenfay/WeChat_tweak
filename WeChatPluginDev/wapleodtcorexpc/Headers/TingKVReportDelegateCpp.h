//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingKVReportDelegateCpp
{
}

- (void)idKeyStat:(int)arg1 key:(int)arg2 value:(int)arg3 isImportant:(int)arg4;
- (void)kvStat:(int)arg1 value:(id)arg2 isReportNow:(_Bool)arg3 isImportant:(_Bool)arg4 ignoreFreqLimit:(_Bool)arg5;
- (void)kvStatData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

