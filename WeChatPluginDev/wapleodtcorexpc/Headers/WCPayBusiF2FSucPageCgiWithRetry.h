//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BusiF2FSucPageReq, NSString, WCPayBusiF2FSucPageCgi;
@protocol WCPayBusiF2FSucPageCgiDelegate;

@interface WCPayBusiF2FSucPageCgiWithRetry : NSObject
{
    _Bool _m_delayStart;
    unsigned int _m_firstDelay;
    unsigned int _m_retryDelay;
    unsigned int _m_maxRetryCount;
    unsigned int _m_currentRetryCount;
    id <WCPayBusiF2FSucPageCgiDelegate> _m_delegate;
    WCPayBusiF2FSucPageCgi *_m_cgi;
    BusiF2FSucPageReq *_m_request;
}

- (void).cxx_destruct;
@property unsigned int m_currentRetryCount; // @synthesize m_currentRetryCount=_m_currentRetryCount;
@property(retain) BusiF2FSucPageReq *m_request; // @synthesize m_request=_m_request;
@property unsigned int m_maxRetryCount; // @synthesize m_maxRetryCount=_m_maxRetryCount;
@property unsigned int m_retryDelay; // @synthesize m_retryDelay=_m_retryDelay;
@property unsigned int m_firstDelay; // @synthesize m_firstDelay=_m_firstDelay;
@property _Bool m_delayStart; // @synthesize m_delayStart=_m_delayStart;
@property(retain) WCPayBusiF2FSucPageCgi *m_cgi; // @synthesize m_cgi=_m_cgi;
@property __weak id <WCPayBusiF2FSucPageCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onWCPayBusiF2FSucPageCgiError:(id)arg1;
- (void)onWCPayBusiF2FSucPageCgiResp:(id)arg1;
- (void)delayStartRequest;
- (void)startRequest:(id)arg1 delayStart:(_Bool)arg2 firstDelay:(unsigned int)arg3 retryDelay:(unsigned int)arg4 maxRetryCount:(unsigned int)arg5;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

