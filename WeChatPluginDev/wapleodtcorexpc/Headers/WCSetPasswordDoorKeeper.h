//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, PasswordLogic, WCAccountSetPasswordViewController;

@interface WCSetPasswordDoorKeeper : NSObject
{
    PasswordLogic *_passwordLogic;
    NSObject *_selfHolder;
    WCAccountSetPasswordViewController *_setPasswordVC;
    MMUIViewController *_contentVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *contentVC; // @synthesize contentVC=_contentVC;
@property(nonatomic) __weak WCAccountSetPasswordViewController *setPasswordVC; // @synthesize setPasswordVC=_setPasswordVC;
@property(retain, nonatomic) NSObject *selfHolder; // @synthesize selfHolder=_selfHolder;
@property(retain, nonatomic) PasswordLogic *passwordLogic; // @synthesize passwordLogic=_passwordLogic;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)unknownFail:(id)arg1;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)passwordLogicPause:(id)arg1;
- (void)passwordLogicStart:(id)arg1;
- (void)passwordLogicCancel:(id)arg1;
- (void)showSetPasswordPage:(_Bool)arg1;
- (void)checkIfshowSetPasswordPage:(_Bool)arg1;
- (void)tryGoToSetPasswordPageFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

