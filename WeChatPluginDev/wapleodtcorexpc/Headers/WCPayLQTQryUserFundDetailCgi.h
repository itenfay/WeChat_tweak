//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayLQTQryUserFundDetailCgiDelegate;

@interface WCPayLQTQryUserFundDetailCgi
{
    _Bool _fromServer;
    id <WCPayLQTQryUserFundDetailCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fromServer; // @synthesize fromServer=_fromServer;
@property(nonatomic) __weak id <WCPayLQTQryUserFundDetailCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)cacheResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startSendRequestWithTraceInfo:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

