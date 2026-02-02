//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMHeadImageView, MMImageView, MMUILabel, NSString;

@interface ChatRoomUpgradeOpenIMViewController
{
    MMHeadImageView *m_headImageView;
    MMUILabel *m_nickNameTextLabel;
    MMImageView *m_namePostIconView;
    unsigned int _m_scene;
    CContact *m_chatRoomContact;
    NSString *m_titleText;
    NSString *m_contentText;
    NSString *m_topTitleText;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_scene; // @synthesize m_scene=_m_scene;
- (void)setM_topTitleText:(id)arg1;
- (id)m_topTitleText;
- (void)setM_contentText:(id)arg1;
- (id)m_contentText;
- (void)setM_titleText:(id)arg1;
- (id)m_titleText;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
- (void)reportUpgradeChatRoomOperateWithGroupUserName:(id)arg1 upgradeChatRoomOperateResult:(unsigned int)arg2 upgradeChatRoomShowSystemMessageTyp:(unsigned int)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)OnUpgradeAssociateChatRoom:(id)arg1 withTicket:(id)arg2 withResult:(unsigned int)arg3 errorMsg:(id)arg4;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)onCancel;
- (void)doIAccept;
- (void)layoutTitleTextView;
- (void)layoutHeadView;
- (void)resetLayoutViewPosition;
- (void)layoutView;
- (void)viewWillLayoutSubviews;
- (void)addContentSubView;
- (void)initData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

