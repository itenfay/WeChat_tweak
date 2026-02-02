//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayOverseaBaseCgi;
@protocol WCPayOverseaGetTransferNameCgiDelegate;

@interface WCPayOverseaGetTransferNameCgi : NSObject
{
    id <WCPayOverseaGetTransferNameCgiDelegate> m_delegate;
    WCPayOverseaBaseCgi *m_cgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayOverseaBaseCgi *m_cgi; // @synthesize m_cgi;
@property(nonatomic) __weak id <WCPayOverseaGetTransferNameCgiDelegate> m_delegate; // @synthesize m_delegate;
- (void)callErrorDelegateWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaBaseCgiErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaBaseCgiReturnWithErrorType:(int)arg1 ErrorMsg:(id)arg2 Dictionary:(id)arg3;
- (void)startRequestWithQRCodeUrl:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

