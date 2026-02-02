//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCSessionPerformanceModel
{
    NSString *_pageName;
    unsigned long long _caseId;
    unsigned long long _costTime;
    unsigned long long _totalCostTime;
    unsigned long long _timestampMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long timestampMs; // @synthesize timestampMs=_timestampMs;
@property(nonatomic) unsigned long long totalCostTime; // @synthesize totalCostTime=_totalCostTime;
@property(nonatomic) unsigned long long costTime; // @synthesize costTime=_costTime;
@property(nonatomic) unsigned long long caseId; // @synthesize caseId=_caseId;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toString;
- (id)getAttrDictionary;

@end

