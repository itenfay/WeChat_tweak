//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportTaskClosedItem
{
    unsigned int _costTime;
    unsigned int _isTriggerDownload;
    unsigned int _preloadType;
    unsigned int _isSyncUpdateContact;
    unsigned int _isSyncLaunchCgi;
    unsigned int _phase;
    unsigned int _splashADState;
    unsigned int _isSyncJsApiInfoCgi;
    unsigned int _isSyncABTestInfoCgi;
    unsigned int _reason;
    unsigned int _subReason;
    long long _startTimeStamp;
    long long _endTimeStamp;
}

@property(nonatomic) unsigned int subReason; // @synthesize subReason=_subReason;
@property(nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned int isSyncABTestInfoCgi; // @synthesize isSyncABTestInfoCgi=_isSyncABTestInfoCgi;
@property(nonatomic) unsigned int isSyncJsApiInfoCgi; // @synthesize isSyncJsApiInfoCgi=_isSyncJsApiInfoCgi;
@property(nonatomic) unsigned int splashADState; // @synthesize splashADState=_splashADState;
@property(nonatomic) unsigned int phase; // @synthesize phase=_phase;
@property(nonatomic) unsigned int isSyncLaunchCgi; // @synthesize isSyncLaunchCgi=_isSyncLaunchCgi;
@property(nonatomic) unsigned int isSyncUpdateContact; // @synthesize isSyncUpdateContact=_isSyncUpdateContact;
@property(nonatomic) unsigned int preloadType; // @synthesize preloadType=_preloadType;
@property(nonatomic) unsigned int isTriggerDownload; // @synthesize isTriggerDownload=_isTriggerDownload;
@property(nonatomic) unsigned int costTime; // @synthesize costTime=_costTime;
@property(nonatomic) long long endTimeStamp; // @synthesize endTimeStamp=_endTimeStamp;
@property(nonatomic) long long startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
- (id)reportString;
- (int)reportID;

@end

