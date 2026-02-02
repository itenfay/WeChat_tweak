//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContactVerifyLogic, MMDeleteNotRegularContactLogic, NSString;
@protocol ContactVerifyPreCheckBusinessLogicDelegate;

@interface CContactVerifyPreCheckBusinessLogic
{
    CContactVerifyLogic *m_oContactVerifyLogic;
    MMDeleteNotRegularContactLogic *m_deleteNotRegularContactLogic;
    id <ContactVerifyPreCheckBusinessLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ContactVerifyPreCheckBusinessLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getDeleteNotRegularContactLogic;
- (_Bool)checkIsDeleteNotRegularContactBusiness:(int)arg1;
- (id)getViewController;
- (void)onContactVerifyPreCheckFailActionCancel:(id)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
- (void)onContactVerifyPreCheckFailActionDone:(id)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
- (void)onContactVerifyPreCheckFail:(id)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
- (void)onContactVerifyPreCheckSuccess:(id)arg1 opcode:(unsigned int)arg2;
- (_Bool)onShouldHandleContactVerifyPreCheckFail:(id)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
- (_Bool)sendVerifyUserPreCheck:(id)arg1 opcode:(unsigned int)arg2;
- (id)getContactVerifyLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

