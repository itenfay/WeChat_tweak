//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface EmotionRewardTipsStatisticsData
{
    unsigned int _lastPidContiousSendTimes;
    NSString *_lastSendPid;
    NSMutableDictionary *_sendedPidCountWrapDic;
}

+ (void)initialize;
+ (void)PBArrayAdd_sendedPidCountWrapDic;
+ (void)PBArrayAdd_lastPidContiousSendTimes;
+ (void)PBArrayAdd_lastSendPid;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sendedPidCountWrapDic; // @synthesize sendedPidCountWrapDic=_sendedPidCountWrapDic;
@property(nonatomic) unsigned int lastPidContiousSendTimes; // @synthesize lastPidContiousSendTimes=_lastPidContiousSendTimes;
@property(retain, nonatomic) NSString *lastSendPid; // @synthesize lastSendPid=_lastSendPid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

