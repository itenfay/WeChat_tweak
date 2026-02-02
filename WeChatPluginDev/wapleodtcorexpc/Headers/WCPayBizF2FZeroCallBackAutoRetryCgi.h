//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BusiF2FZeroCallBackReq, NSString, WCPayBusiF2FZeroCallBackCgi;
@protocol WCPayBusiF2FZeroCallBackCgiDelegate;

@interface WCPayBizF2FZeroCallBackAutoRetryCgi : NSObject
{
    unsigned int _m_retryTimes;
    unsigned int _m_currentRetryTimes;
    double _m_retryInterval;
    id <WCPayBusiF2FZeroCallBackCgiDelegate> _m_cgiDelegate;
    WCPayBusiF2FZeroCallBackCgi *_m_zeroPayCgi;
    BusiF2FZeroCallBackReq *_m_request;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_currentRetryTimes; // @synthesize m_currentRetryTimes=_m_currentRetryTimes;
@property(retain, nonatomic) BusiF2FZeroCallBackReq *m_request; // @synthesize m_request=_m_request;
@property(retain, nonatomic) WCPayBusiF2FZeroCallBackCgi *m_zeroPayCgi; // @synthesize m_zeroPayCgi=_m_zeroPayCgi;
@property(nonatomic) __weak id <WCPayBusiF2FZeroCallBackCgiDelegate> m_cgiDelegate; // @synthesize m_cgiDelegate=_m_cgiDelegate;
@property(nonatomic) double m_retryInterval; // @synthesize m_retryInterval=_m_retryInterval;
@property(nonatomic) unsigned int m_retryTimes; // @synthesize m_retryTimes=_m_retryTimes;
- (void)onWCPayBusiF2FZeroCallBackCgiError:(id)arg1;
- (void)onWCPayBusiF2FZeroCallBackCgiResp:(id)arg1;
- (void)startRetryRequest;
- (void)startFirstRequest;
- (void)startRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1 retryTimes:(unsigned int)arg2 retryInterval:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

