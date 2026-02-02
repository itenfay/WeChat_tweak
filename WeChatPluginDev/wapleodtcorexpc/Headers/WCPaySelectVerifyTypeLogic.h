//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMVoidCallback, NSString, WCPayRealnameRouteCgi;

@interface WCPaySelectVerifyTypeLogic
{
    _Bool _hasStartAddCard;
    int _fromScene;
    int _payScene;
    long long _scene;
    NSString *_sessionId;
    MMVoidCallback *_successCallback;
    MMVoidCallback *_cancelCallback;
    WCPayRealnameRouteCgi *_realnameRouteCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayRealnameRouteCgi *realnameRouteCgi; // @synthesize realnameRouteCgi=_realnameRouteCgi;
@property _Bool hasStartAddCard; // @synthesize hasStartAddCard=_hasStartAddCard;
@property(nonatomic) int payScene; // @synthesize payScene=_payScene;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) MMVoidCallback *cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(retain, nonatomic) MMVoidCallback *successCallback; // @synthesize successCallback=_successCallback;
@property(retain) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)OnRealnameVerfitySuccessNotification:(id)arg1;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)realnameVerifyLogicDidFinishWithTinyAppUri:(id)arg1;
- (void)DirectBindCard;
- (void)OnBack;
- (void)OnSelectBindCardVerify;
- (void)OnSelectRealnameVerify:(id)arg1;
- (id)onWCPaySelectVerifyTypeViewControllerSessionId;
- (void)OnSelectBindCard;
- (void)openLiteAppFromRealname:(id)arg1;
- (void)startLogic;
- (void)dealloc;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

