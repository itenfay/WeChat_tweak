//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMVoidCallback, MMVoidITransmitKvDataCallback, NSString;

@interface MMKindaRealNameManagerImpl : NSObject
{
    MMVoidITransmitKvDataCallback *_privacyVCCallBack;
    MMVoidCallback *_realnameCancelCallBack;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMVoidCallback *realnameCancelCallBack; // @synthesize realnameCancelCallBack=_realnameCancelCallBack;
@property(retain, nonatomic) MMVoidITransmitKvDataCallback *privacyVCCallBack; // @synthesize privacyVCCallBack=_privacyVCCallBack;
- (void)startRealNameVerifyPhone:(id)arg1;
- (void)realnameVerifyLogicDidFinishWithTinyAppUri:(id)arg1;
- (void)goToRealNameInputUIImpl:(id)arg1 cancelCallback:(id)arg2 data:(id)arg3;
- (void)onWCPayPrivacyViewControllerClickAgree:(_Bool)arg1 marketingSwitchClosed:(_Bool)arg2;
- (void)callPrivacyDutyPageImpl:(id)arg1;
- (void)reportRealnameAction:(int)arg1;
- (void)startRealNameImpl:(id)arg1 cancelCallback:(id)arg2 data:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

