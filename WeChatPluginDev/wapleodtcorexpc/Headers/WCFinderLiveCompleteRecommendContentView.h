//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveSquareStyleInfo, MMUIImageView, MMUILabel, NSArray, NSIndexPath, NSString, UICollectionView, UIViewController;
@protocol WCFinderFeedBaseViewControllerProtocol, WCFinderLiveCompleteRecommendContentViewDelegate;

@interface WCFinderLiveCompleteRecommendContentView : UIView
{
    _Bool _openAudienceNewLiveRecomend;
    _Bool _autoPlaying;
    id <WCFinderLiveCompleteRecommendContentViewDelegate> _delegate;
    double _containerViewHeight;
    FinderLiveSquareStyleInfo *_styleInfo;
    UIView *_videoContainerView;
    UIViewController<WCFinderFeedBaseViewControllerProtocol> *_currentViewController;
    NSIndexPath *_leftIndexPath;
    NSIndexPath *_rightIndexPath;
    NSString *_sessionExtraKey;
    NSArray *_itemArr;
    UIView *_verticalLineView;
    UICollectionView *_videoCollectionView;
    MMUILabel *_titleLabel;
    MMUILabel *_timeLabel;
    MMUILabel *_goSquareLabel;
    MMUILabel *_goSquareActionLabel;
    MMUIImageView *_arrowImageView;
    double _itemBottom;
    unsigned long long _tabId;
    double _videoCollectionViewHeight;
}

+ (double)contentViewWidthAndHeightScale;
- (void).cxx_destruct;
@property(nonatomic) double videoCollectionViewHeight; // @synthesize videoCollectionViewHeight=_videoCollectionViewHeight;
@property(nonatomic) unsigned long long tabId; // @synthesize tabId=_tabId;
@property(nonatomic) double itemBottom; // @synthesize itemBottom=_itemBottom;
@property(retain, nonatomic) MMUIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *goSquareActionLabel; // @synthesize goSquareActionLabel=_goSquareActionLabel;
@property(retain, nonatomic) MMUILabel *goSquareLabel; // @synthesize goSquareLabel=_goSquareLabel;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionView *videoCollectionView; // @synthesize videoCollectionView=_videoCollectionView;
@property(retain, nonatomic) UIView *verticalLineView; // @synthesize verticalLineView=_verticalLineView;
@property(retain, nonatomic) NSArray *itemArr; // @synthesize itemArr=_itemArr;
@property(retain, nonatomic) NSString *sessionExtraKey; // @synthesize sessionExtraKey=_sessionExtraKey;
@property(retain, nonatomic) NSIndexPath *rightIndexPath; // @synthesize rightIndexPath=_rightIndexPath;
@property(retain, nonatomic) NSIndexPath *leftIndexPath; // @synthesize leftIndexPath=_leftIndexPath;
@property(nonatomic) _Bool autoPlaying; // @synthesize autoPlaying=_autoPlaying;
@property(nonatomic) __weak UIViewController<WCFinderFeedBaseViewControllerProtocol> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(readonly, nonatomic) UIView *videoContainerView; // @synthesize videoContainerView=_videoContainerView;
@property(retain, nonatomic) FinderLiveSquareStyleInfo *styleInfo; // @synthesize styleInfo=_styleInfo;
@property(nonatomic) double containerViewHeight; // @synthesize containerViewHeight=_containerViewHeight;
@property(nonatomic) _Bool openAudienceNewLiveRecomend; // @synthesize openAudienceNewLiveRecomend=_openAudienceNewLiveRecomend;
@property(nonatomic) __weak id <WCFinderLiveCompleteRecommendContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickedGoSquare;
- (void)actionButtonClick:(id)arg1;
- (void)onClickRecommendItem:(id)arg1 dataItem:(id)arg2;
- (void)clickRecommendUrl:(id)arg1;
- (void)onClickCoverContact:(id)arg1 contentVM:(id)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onViewWillAppear;
- (void)updateVideoContainerViewHeight;
- (void)updateJumpInfoTabId:(unsigned long long)arg1;
- (void)layoutCardItem:(id)arg1;
- (double)videoContainerViewPadding;
- (double)itemMargin;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)getCollectionViewCellHeight;
- (double)getLiveCompleteRecommendContentViewHeight:(double)arg1 openAudienceNewLiveRecomend:(_Bool)arg2;
- (double)getCollectionViewCellWidth;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onRecommendGuideClickAction:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)report21053ClickActionWithDataItem:(id)arg1 index:(unsigned long long)arg2;
- (void)report21053ExposeActionWithDataItem:(id)arg1 index:(unsigned long long)arg2;
- (void)reportFeedAutoPlayIfNeeded:(id)arg1 play:(_Bool)arg2 index:(unsigned long long)arg3;
- (void)updateFeedExposeEnd:(id)arg1;
- (void)reportFeedExposeEnd:(id)arg1;
- (void)updateFeedExpose:(id)arg1;
- (void)reportNewValidRatioExposeEnd:(id)arg1;
- (void)reportFeedExpose:(id)arg1;
- (void)reportNewValidRatioExposeStart:(id)arg1;
- (void)bindNewExposeReport:(id)arg1 elementModel:(id)arg2 collectionView:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)checkAutoPlay:(struct CGPoint)arg1 topMargin:(double)arg2;
- (_Bool)isCellFullExpose:(id)arg1 topMargin:(double)arg2;
- (void)startPlayWithIndexPath:(id)arg1;
- (void)stopAutoPlay;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

