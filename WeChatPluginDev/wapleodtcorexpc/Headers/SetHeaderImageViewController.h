//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMHeadImageView, MMTableView, NSString, UIButton, UILabel, UIView;
@protocol SetHeaderImageViewDelegate;

@interface SetHeaderImageViewController
{
    MMTableView *m_tableView;
    MMHeadImageView *m_headView;
    UILabel *m_userNameLabel;
    UILabel *m_nickNameLabel;
    UILabel *m_remarkLabel;
    UILabel *m_dddedLabel;
    UIButton *m_opBtn;
    UIButton *m_RemarkBtn;
    UIButton *m_BlockBtn;
    UIView *m_headerView;
    UIView *m_footerView;
    CContact *m_contact;
    _Bool m_bInContactsInit;
    _Bool m_bInContactsAfter;
    id <SetHeaderImageViewDelegate> m_delegate;
    unsigned int m_uEventId;
    unsigned int m_uiUploadHeadEventID;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SetHeaderImageViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)dealloc;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)modifyContactRemark:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (id)getViewController;
- (void)onIKnowItBtnClick:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onChangeImg:(id)arg1;
- (void)showChangeImg:(id)arg1;
- (void)showImagePicker:(long long)arg1;
- (void)handleImage:(id)arg1;
- (void)updateHead:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initFooterView;
- (void)initHeaderView;
- (void)initTableView;
- (void)initData;
- (id)init;
- (void)updateBlockBtn;
- (void)updateRemarkBtn;
- (void)initRemarkLabel;
- (void)updateRemarkLabel;
- (void)initUserNameLabel;
- (void)initNickNameLabel;
- (void)updateNickNameLabel;
- (void)initHeadImage;
- (void)initMessageIdToListen;
- (void)updateHeadImage;
- (id)getSettingHeadImage;
- (void)tryGetContactUsrImg;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

