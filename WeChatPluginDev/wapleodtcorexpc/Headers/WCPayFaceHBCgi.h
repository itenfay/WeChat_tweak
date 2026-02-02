//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayFaceHBCgiDelegate;

@interface WCPayFaceHBCgi
{
    id <WCPayFaceHBCgiDelegate> m_delegate;
    NSString *m_key;
    unsigned int _cgiNumber;
    unsigned int _m_uiRetryCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiRetryCount; // @synthesize m_uiRetryCount=_m_uiRetryCount;
@property(nonatomic) unsigned int cgiNumber; // @synthesize cgiNumber=_cgiNumber;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequest:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 Key:(id)arg2;

@end

