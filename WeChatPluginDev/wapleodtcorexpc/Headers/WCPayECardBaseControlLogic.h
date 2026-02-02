//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayECardCgiError;

@interface WCPayECardBaseControlLogic
{
    WCPayECardCgiError *_baseECardCgiError;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayECardCgiError *baseECardCgiError; // @synthesize baseECardCgiError=_baseECardCgiError;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)handleECardCgiError:(id)arg1;
- (void)showAlertWith:(id)arg1;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

