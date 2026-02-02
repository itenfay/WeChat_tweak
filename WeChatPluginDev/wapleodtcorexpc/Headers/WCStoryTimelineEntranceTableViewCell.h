//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIButton, UICollectionView, UIImageView, UILabel, UIView, WCStoryReportUtil, WCStoryTimelineEntranceCollectionViewLayout;
@protocol WCStoryTimelineEntranceTableViewCellDelegate;

@interface WCStoryTimelineEntranceTableViewCell
{
    _Bool _canShowDeleteButton;
    _Bool _canAdjustInset;
    id <WCStoryTimelineEntranceTableViewCellDelegate> _delegate;
    NSMutableArray *_unreadStoryDataUnits;
    NSMutableArray *_unreadCommentStoryDataUnits;
    unsigned long long _timestampUnreadStoryCount;
    unsigned long long _unreadCommentCount;
    WCStoryReportUtil *_storyReportUtil;
    UIButton *_topButton;
    UICollectionView *_collectionView;
    UILabel *_unreadCommentCountLabel;
    UIImageView *_unreadCommentImageview;
    UIView *_separatorLine;
    WCStoryTimelineEntranceCollectionViewLayout *_layout;
    double _lastScrollViewX;
    UIButton *_deleteButton;
    CDUnknownBlockType _showPreviewBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType showPreviewBlock; // @synthesize showPreviewBlock=_showPreviewBlock;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) _Bool canAdjustInset; // @synthesize canAdjustInset=_canAdjustInset;
@property(nonatomic) _Bool canShowDeleteButton; // @synthesize canShowDeleteButton=_canShowDeleteButton;
@property(nonatomic) double lastScrollViewX; // @synthesize lastScrollViewX=_lastScrollViewX;
@property(retain, nonatomic) WCStoryTimelineEntranceCollectionViewLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIImageView *unreadCommentImageview; // @synthesize unreadCommentImageview=_unreadCommentImageview;
@property(retain, nonatomic) UILabel *unreadCommentCountLabel; // @synthesize unreadCommentCountLabel=_unreadCommentCountLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIButton *topButton; // @synthesize topButton=_topButton;
@property(retain, nonatomic) WCStoryReportUtil *storyReportUtil; // @synthesize storyReportUtil=_storyReportUtil;
@property(nonatomic) unsigned long long unreadCommentCount; // @synthesize unreadCommentCount=_unreadCommentCount;
@property(nonatomic) unsigned long long timestampUnreadStoryCount; // @synthesize timestampUnreadStoryCount=_timestampUnreadStoryCount;
@property(retain, nonatomic) NSMutableArray *unreadCommentStoryDataUnits; // @synthesize unreadCommentStoryDataUnits=_unreadCommentStoryDataUnits;
@property(retain, nonatomic) NSMutableArray *unreadStoryDataUnits; // @synthesize unreadStoryDataUnits=_unreadStoryDataUnits;
@property(nonatomic) __weak id <WCStoryTimelineEntranceTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickDeleteButtonAction;
- (void)reloadCollectionViewInsetWithAnimation:(_Bool)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)flowLayout;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)shouldShowTopButton;
- (double)cellBaseHeight;
- (void)layoutCustomSubViews;
- (id)userNameStrFromDataUnits:(id)arg1;
- (void)reportExposeData;
- (void)scrollToTop;
- (void)resetCollectionInset;
- (void)clearFriendStoryVideo;
- (void)reloadData;
- (_Bool)hasSetupUnreadUserNameArray;
- (void)setupSubviews;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

