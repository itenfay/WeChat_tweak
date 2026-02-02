//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString, WCCoverPostReporter, WCFinderDataItem, WCTableViewManager;

@interface WCCustomizeViewController
{
    _Bool m_isUploading;
    WCTableViewManager *m_tableViewMgr;
    _Bool _canShowProfessionalCraft;
    NSMutableArray *_m_rowsData;
    MMTableView *_m_tableView;
    NSString *_m_username;
    WCFinderDataItem *_finderFeed;
    WCCoverPostReporter *_coverPostReporter;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canShowProfessionalCraft; // @synthesize canShowProfessionalCraft=_canShowProfessionalCraft;
@property(retain, nonatomic) WCCoverPostReporter *coverPostReporter; // @synthesize coverPostReporter=_coverPostReporter;
@property(retain, nonatomic) WCFinderDataItem *finderFeed; // @synthesize finderFeed=_finderFeed;
@property(retain, nonatomic) NSString *m_username; // @synthesize m_username=_m_username;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView=_m_tableView;
@property(retain, nonatomic) NSMutableArray *m_rowsData; // @synthesize m_rowsData=_m_rowsData;
- (long long)coverContentSourceFromFinderTabType:(int)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onFinishedSelectFinderFeed:(id)arg1;
- (void)finderFeedPickerPreviewViewController:(id)arg1 didClickDoneWithDataItem:(id)arg2;
- (void)finderFeedPickerViewControllerDidClickCancel:(id)arg1;
- (void)onClickSelectFromFinder;
- (void)showImagePicker:(long long)arg1;
- (void)onClickProfessionalCraft;
- (void)onClickTakePhoto;
- (void)onClickSelectFromAlbum;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)handleDidFinishPickingSightWithInfo:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (id)getNavigationController;
- (id)getViewController;
- (void)onFinishedSelectImage:(id)arg1;
- (void)popToMessageSessionView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)reloadRowData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

