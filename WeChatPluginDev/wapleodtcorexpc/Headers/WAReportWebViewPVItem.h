//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportWebViewPVItem
{
    unsigned int _publicLibVersion;
    unsigned long long _costtime;
    unsigned long long _staytime;
    NSString *_referpagepath;
    unsigned long long _targetAction;
    NSString *_targetpagepath;
    unsigned long long _clickTimestamp;
    NSString *_referAction;
    unsigned long long _staytimeFuncpageStart;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long staytimeFuncpageStart; // @synthesize staytimeFuncpageStart=_staytimeFuncpageStart;
@property(copy, nonatomic) NSString *referAction; // @synthesize referAction=_referAction;
@property(nonatomic) unsigned int publicLibVersion; // @synthesize publicLibVersion=_publicLibVersion;
@property(nonatomic) unsigned long long clickTimestamp; // @synthesize clickTimestamp=_clickTimestamp;
@property(copy, nonatomic) NSString *targetpagepath; // @synthesize targetpagepath=_targetpagepath;
@property(nonatomic) unsigned long long targetAction; // @synthesize targetAction=_targetAction;
@property(copy, nonatomic) NSString *referpagepath; // @synthesize referpagepath=_referpagepath;
@property(nonatomic) unsigned long long staytime; // @synthesize staytime=_staytime;
@property(nonatomic) unsigned long long costtime; // @synthesize costtime=_costtime;
- (id)reportString;

@end

