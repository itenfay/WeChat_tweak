//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EnterReportInfo, ExitReportInfo, NSMutableDictionary;

@interface SessionReportInfo
{
    EnterReportInfo *_enterInfo;
    ExitReportInfo *_exitInfo;
    NSMutableDictionary *_reddotInfo;
    unsigned long long _maxCostMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxCostMs; // @synthesize maxCostMs=_maxCostMs;
@property(retain, nonatomic) NSMutableDictionary *reddotInfo; // @synthesize reddotInfo=_reddotInfo;
@property(retain, nonatomic) ExitReportInfo *exitInfo; // @synthesize exitInfo=_exitInfo;
@property(retain, nonatomic) EnterReportInfo *enterInfo; // @synthesize enterInfo=_enterInfo;
- (void)clear;
- (id)description;
- (void)report:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

