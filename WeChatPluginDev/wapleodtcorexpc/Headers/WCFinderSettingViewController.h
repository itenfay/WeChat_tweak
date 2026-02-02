//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderNewUserPrepareResponse, NSString, WCFinderContact, WCFinderGetWechatHDHeadFetcher, WCFinderHeadImageView, WCTableViewManager;

@interface WCFinderSettingViewController
{
    FinderNewUserPrepareResponse *_userPrepareResponse;
    WCTableViewManager *_tableViewManager;
    WCFinderHeadImageView *_imageView;
    WCFinderGetWechatHDHeadFetcher *_wechatHDHeadFetcher;
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCFinderGetWechatHDHeadFetcher *wechatHDHeadFetcher; // @synthesize wechatHDHeadFetcher=_wechatHDHeadFetcher;
@property(retain, nonatomic) WCFinderHeadImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) FinderNewUserPrepareResponse *userPrepareResponse; // @synthesize userPrepareResponse=_userPrepareResponse;
- (void)onFinderContactUpdate:(id)arg1;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (id)generateCGImageFromImage:(id)arg1;
- (void)handleImage:(id)arg1;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)imageCropperDidCancel:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)loadImageToEditor:(id)arg1;
- (void)onSelectAvatarFromWechat;
- (id)createImagePickerObj:(long long)arg1 isAvatar:(_Bool)arg2;
- (void)onPhotoLibrary;
- (void)onCamera;
- (void)NSStringSelectViewControllerOnModifySex:(id)arg1;
- (void)pickLocation:(id)arg1;
- (_Bool)enableEditPersonalInfo;
- (void)onModCoverSuccess;
- (void)continueModCover:(id)arg1 userCancel:(_Bool)arg2 error:(id)arg3;
- (void)continueCleanCover;
- (void)clickCoverSetting;
- (void)clickSignature;
- (void)clickEditSexCell;
- (void)clickEditBirthCell;
- (void)clickOldVersionEditLocationCell;
- (void)longPressFinderIdCell;
- (void)clickNameCell;
- (void)clickEditHeadImageCell;
- (id)makeSectionSeparator;
- (void)requestData;
- (void)makeEditHeadImageCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableView;
- (void)configureTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

