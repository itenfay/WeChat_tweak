//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayF2FPayCheckCgiDelegate;

@interface WCPayF2FPayCheckCgi
{
    unsigned int _amount;
    NSString *_f2fId;
    NSString *_transId;
    NSString *_extendStr;
    NSString *_receiverOpenId;
    id <WCPayF2FPayCheckCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayF2FPayCheckCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
@property(nonatomic) unsigned int amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *receiverOpenId; // @synthesize receiverOpenId=_receiverOpenId;
@property(retain, nonatomic) NSString *extendStr; // @synthesize extendStr=_extendStr;
@property(retain, nonatomic) NSString *transId; // @synthesize transId=_transId;
@property(retain, nonatomic) NSString *f2fId; // @synthesize f2fId=_f2fId;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startSendRequest;
- (id)initWithDelegate:(id)arg1;

@end

