//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayGetF2FReceiveDetailDataCgiDelegate;

@interface WCPayGetF2FReceiveDetailDataCgi
{
    unsigned int _maxRecordPerTime;
    unsigned long long _fromTimeStamp;
    unsigned long long _timeFormat;
    NSString *_lastBillID;
    id <WCPayGetF2FReceiveDetailDataCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayGetF2FReceiveDetailDataCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
@property(nonatomic) unsigned int maxRecordPerTime; // @synthesize maxRecordPerTime=_maxRecordPerTime;
@property(copy, nonatomic) NSString *lastBillID; // @synthesize lastBillID=_lastBillID;
@property(nonatomic) unsigned long long timeFormat; // @synthesize timeFormat=_timeFormat;
@property(nonatomic) unsigned long long fromTimeStamp; // @synthesize fromTimeStamp=_fromTimeStamp;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startSendRequest;
- (id)initWithDelegate:(id)arg1;

@end

