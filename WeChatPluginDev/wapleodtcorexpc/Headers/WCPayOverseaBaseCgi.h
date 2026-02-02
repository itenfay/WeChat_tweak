//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WCPayOverseaBaseCgiDelegate;

@interface WCPayOverseaBaseCgi : NSObject
{
    id <WCPayOverseaBaseCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayOverseaBaseCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)callOkDelegateWithErrorType:(int)arg1 ErrorMsg:(id)arg2 Dictionary:(id)arg3;
- (void)callErrorDelegateWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequestWithCgiId:(unsigned int)arg1 Data:(id)arg2 isNeedNotify:(_Bool)arg3;
- (void)startNotNotifyRequstWithCgiId:(unsigned int)arg1 Data:(id)arg2;
- (void)startRequestWithCgiId:(unsigned int)arg1 Data:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

