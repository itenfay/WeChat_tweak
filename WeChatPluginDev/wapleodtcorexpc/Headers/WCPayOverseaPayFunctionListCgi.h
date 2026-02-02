//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WCPayOverseaPayFunctionListCgiDelegate;

@interface WCPayOverseaPayFunctionListCgi : NSObject
{
    _Bool _m_isCgiEnd;
    unsigned int _m_tpaCountry;
    id <WCPayOverseaPayFunctionListCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_isCgiEnd; // @synthesize m_isCgiEnd=_m_isCgiEnd;
@property(nonatomic) unsigned int m_tpaCountry; // @synthesize m_tpaCountry=_m_tpaCountry;
@property(nonatomic) __weak id <WCPayOverseaPayFunctionListCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callOkDelegateWithRespObject:(id)arg1;
- (void)callErrorDelegateWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)startRequest;
- (_Bool)isCgiEnd;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 TpaCountry:(unsigned int)arg2;

@end

