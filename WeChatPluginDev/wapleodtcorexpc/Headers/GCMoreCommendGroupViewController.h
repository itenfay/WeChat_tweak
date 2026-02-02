//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCCollectionViewManager, GCCollectionViewSectionModel, GCGroupServer, GCLoadingMoreCellModel, NSString, UICollectionView;

@interface GCMoreCommendGroupViewController
{
    GCCollectionViewManager *_collectionViewManager;
    UICollectionView *_collectionView;
    GCGroupServer *_groupServer;
    GCCollectionViewSectionModel *_sectionModel;
    GCLoadingMoreCellModel *_loadMoreCellModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCLoadingMoreCellModel *loadMoreCellModel; // @synthesize loadMoreCellModel=_loadMoreCellModel;
@property(retain, nonatomic) GCCollectionViewSectionModel *sectionModel; // @synthesize sectionModel=_sectionModel;
@property(retain, nonatomic) GCGroupServer *groupServer; // @synthesize groupServer=_groupServer;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) GCCollectionViewManager *collectionViewManager; // @synthesize collectionViewManager=_collectionViewManager;
- (struct CGRect)collectionViewFrame;
- (void)onMoreChatRoomRespone:(id)arg1;
- (struct CGRect)getImgFrameWithIdentifier:(id)arg1;
- (void)onOpenChatRoomConfig:(id)arg1 cellModel:(id)arg2;
- (void)onLoadMoreData;
- (void)viewDidLayoutSubviews;
- (void)loadMoreChatRoom;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

