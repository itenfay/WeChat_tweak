//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContactVerifyLogic, MMLoadingView, NSDictionary, NSMutableArray, NSString, UIView;
@protocol ContactsCreateChatRoomLogicDelegate;

@interface ContactsCreateChatRoomLogic
{
    NSDictionary *m_dicMultiSelect;
    UIView *m_ParentView;
    MMLoadingView *m_loadingView;
    id <ContactsCreateChatRoomLogicDelegate> m_Delegate;
    unsigned int m_uiUseChatState;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSMutableArray *m_arrNeedVerifyUsrName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiUseChatState; // @synthesize m_uiUseChatState;
@property(nonatomic) __weak id <ContactsCreateChatRoomLogicDelegate> m_Delegate; // @synthesize m_Delegate;
- (id)genOpenIMErrorString:(id)arg1 needVerify:(_Bool *)arg2;
- (void)OnOpenIMCreateGroup:(id)arg1 withStatus:(int)arg2 resp:(id)arg3;
- (void)OnCreateGroup:(id)arg1 withStatus:(int)arg2 resp:(id)arg3;
- (id)genErrorString:(id)arg1 needVerify:(_Bool *)arg2;
- (id)getErrorContactName:(id)arg1;
- (void)verifyContact;
- (_Bool)createChatRoom;
- (id)genMemerList;
- (void)stopLoading;
- (void)startLoading;
- (_Bool)start:(id)arg1 parentView:(id)arg2;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

