//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCRealTimeKVReportWrap
{
    _Bool _needRealTime;
    _Bool _reportSuccess;
    _Bool _tryReportFail;
    unsigned int _logId;
    NSString *_value;
    NSString *_extKey;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool tryReportFail; // @synthesize tryReportFail=_tryReportFail;
@property(nonatomic) _Bool reportSuccess; // @synthesize reportSuccess=_reportSuccess;
@property(retain, nonatomic) NSString *extKey; // @synthesize extKey=_extKey;
@property(nonatomic) _Bool needRealTime; // @synthesize needRealTime=_needRealTime;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) unsigned int logId; // @synthesize logId=_logId;

@end

