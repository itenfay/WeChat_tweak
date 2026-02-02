//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayBusiF2FZeroCallBackCgiDelegate;

@interface WCPayBusiF2FZeroCallBackCgi
{
    id <WCPayBusiF2FZeroCallBackCgiDelegate> _m_cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayBusiF2FZeroCallBackCgiDelegate> m_cgiDelegate; // @synthesize m_cgiDelegate=_m_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

