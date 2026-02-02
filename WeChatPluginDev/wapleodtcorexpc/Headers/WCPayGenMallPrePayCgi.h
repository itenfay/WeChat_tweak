//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayGenMallPrePayCgiDelegate;

@interface WCPayGenMallPrePayCgi : NSObject
{
    id <WCPayGenMallPrePayCgiDelegate> _cgiDelegate;
}

@property(nonatomic) __weak id <WCPayGenMallPrePayCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRquest;
- (id)initWithDelegate:(id)arg1 request:(id)arg2;

@end

