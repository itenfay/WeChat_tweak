//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayWalletGetAllFunctionCgi;
@protocol WCPayOverseaPayFunctionListCgiDelegate;

@interface WCPayOverseaPayFunctionListCgi_v2 : NSObject
{
    _Bool _m_isCgiEnd;
    unsigned int _m_tpaCountry;
    id <WCPayOverseaPayFunctionListCgiDelegate> _m_delegate;
    WCPayWalletGetAllFunctionCgi *_m_getAllFunctionCgi;
}

+ (id)cacheObjectWithTpaCountry:(unsigned int)arg1;
+ (id)oldRespFrom:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPayWalletGetAllFunctionCgi *m_getAllFunctionCgi; // @synthesize m_getAllFunctionCgi=_m_getAllFunctionCgi;
@property(nonatomic) _Bool m_isCgiEnd; // @synthesize m_isCgiEnd=_m_isCgiEnd;
@property(nonatomic) unsigned int m_tpaCountry; // @synthesize m_tpaCountry=_m_tpaCountry;
@property(nonatomic) __weak id <WCPayOverseaPayFunctionListCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onGetWalletAllFunctionCgiResp:(id)arg1;
- (void)callOkDelegateWithRespObject:(id)arg1;
- (void)callErrorDelegateWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)startRequest;
- (_Bool)isCgiEnd;
- (id)initWithDelegate:(id)arg1 TpaCountry:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

