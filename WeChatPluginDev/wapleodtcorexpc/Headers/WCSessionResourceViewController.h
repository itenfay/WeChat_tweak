//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, ResourceBrowseCollectionView, StorageFootPanelView;

@interface WCSessionResourceViewController
{
    NSMutableArray *_sessionMsgInfos;
    ResourceBrowseCollectionView *_sessionBrowseView;
    StorageFootPanelView *_footPanelView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StorageFootPanelView *footPanelView; // @synthesize footPanelView=_footPanelView;
@property(retain, nonatomic) ResourceBrowseCollectionView *sessionBrowseView; // @synthesize sessionBrowseView=_sessionBrowseView;
@property(retain, nonatomic) NSMutableArray *sessionMsgInfos; // @synthesize sessionMsgInfos=_sessionMsgInfos;
- (void)onChatLogDataReloadItem;
- (void)willMoveToParentViewController:(id)arg1;
- (_Bool)wouldResponseToResourceBrowseCollectionViewClickRecordMsg;
- (id)onResourceBrowseCollectionViewGetParentUIViewController;
- (void)onResourceBrowseCollectionViewSelectChange:(id)arg1;
- (_Bool)isFootPanelRelateDataSelectEmpty;
- (_Bool)isFootPanelRelateDataLoading;
- (void)onFootPanelDeleteButtonClick;
- (void)p_deleteTheSelectedData;
- (void)onFootPanelSelectButtonClick;
- (id)getFootPanelSizeText;
- (id)getFootPanelLabelText;
- (id)getFootPanelDeletebuttonTitle;
- (id)getFootPanelSelectButtonTitle;
- (void)updateView;
- (void)setupView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSessionName:(id)arg1 msgInfo:(id)arg2;
- (_Bool)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

