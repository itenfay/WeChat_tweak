//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayF2FDeleteRecordCgiDelegate;

@interface WCPayF2FDeleteRecordCgi
{
    NSString *_billID;
    unsigned long long _timeStamp;
    unsigned long long _timeFormat;
    id <WCPayF2FDeleteRecordCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayF2FDeleteRecordCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
@property(nonatomic) unsigned long long timeFormat; // @synthesize timeFormat=_timeFormat;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *billID; // @synthesize billID=_billID;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startSendRequest;
- (id)initWithDelegate:(id)arg1;

@end

