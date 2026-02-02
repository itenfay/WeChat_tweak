//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayCancelPayCgiDelegate;

@interface WCPayCancelPayCgi
{
    id <WCPayCancelPayCgiDelegate> _cgiDelegate;
    NSString *_reqKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reqKey; // @synthesize reqKey=_reqKey;
@property(nonatomic) __weak id <WCPayCancelPayCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (_Bool)selectCgi;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1 PayScene:(unsigned int)arg2 PayChannel:(unsigned int)arg3 ReqKey:(id)arg4;

@end

