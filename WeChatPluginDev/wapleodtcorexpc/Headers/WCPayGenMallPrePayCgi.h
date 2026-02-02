//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayGenMallPrePayCgiDelegate;

@interface WCPayGenMallPrePayCgi
{
    id <WCPayGenMallPrePayCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayGenMallPrePayCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRquest;
- (id)initWithDelegate:(id)arg1 request:(id)arg2;

@end

