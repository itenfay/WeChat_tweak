//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BusiF2FGetFavorReq;
@protocol WCPayBusiF2FGetFavorCgiDelegate;

@interface WCPayBusiF2FGetFavorCgi
{
    _Bool _m_isLoading;
    id <WCPayBusiF2FGetFavorCgiDelegate> _m_cgiDelegate;
    BusiF2FGetFavorReq *_m_nextRequest;
    double _m_interval;
}

- (void).cxx_destruct;
@property double m_interval; // @synthesize m_interval=_m_interval;
@property _Bool m_isLoading; // @synthesize m_isLoading=_m_isLoading;
@property(retain) BusiF2FGetFavorReq *m_nextRequest; // @synthesize m_nextRequest=_m_nextRequest;
@property(nonatomic) __weak id <WCPayBusiF2FGetFavorCgiDelegate> m_cgiDelegate; // @synthesize m_cgiDelegate=_m_cgiDelegate;
- (void)delayStartRequest;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startNextRequest:(id)arg1;
- (void)start;
- (_Bool)isLoading;
- (id)initWithDelegate:(id)arg1 interval:(double)arg2;

@end

