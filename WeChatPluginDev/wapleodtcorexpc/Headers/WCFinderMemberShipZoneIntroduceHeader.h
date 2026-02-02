//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIButton, UICollectionView, UIImageView, UILabel, UITableView, UITableViewDiffableDataSource, WCFinderDetailTimeStringConfig, WCFinderEventDelegate, WCFinderFeedContentTextView, WCFinderMSInteractionView, WCFinderMemberShipIntroduceReporter, WCFinderMemberShipZoneIntroduceHeaderData, WCFinderNoMoreView, WCFinderProfileCardContainer, WCFinderReuseQueue, WCFinderStreamFooterView;
@protocol WCFinderMemberShipZoneIntroduceHeaderDelegate;

@interface WCFinderMemberShipZoneIntroduceHeader : UIView
{
    _Bool _descContentLabelIsExpand;
    WCFinderMemberShipZoneIntroduceHeaderData *_data;
    id <WCFinderMemberShipZoneIntroduceHeaderDelegate> _delegate;
    WCFinderMemberShipIntroduceReporter *_reporter;
    UILabel *_titleLabel;
    UILabel *_descTitleLabel;
    WCFinderFeedContentTextView *_descContentLabel;
    UILabel *_exclusiveLiveTitleLabel;
    WCFinderProfileCardContainer *_cardContainer;
    UILabel *_exclusiveFeedTitleLabel;
    UILabel *_exclusiveCollectionTitleLabel;
    UILabel *_exclusivePlaybackTitleLabel;
    UILabel *_exclusiveActivityTitleLabel;
    UICollectionView *_feedCollectionView;
    UICollectionView *_collectionCollectionView;
    UICollectionView *_playbackCollectionView;
    UITableView *_activityTableView;
    UILabel *_payNoticeTitleLabel;
    RichTextView *_payNoticeContent1;
    RichTextView *_payNoticeContent2;
    RichTextView *_payNoticeContent3;
    UIImageView *_dotView1;
    UIImageView *_dotView2;
    UIImageView *_dotView3;
    WCFinderStreamFooterView *_footerView;
    WCFinderStreamFooterView *_noMoreView;
    WCFinderNoMoreView *_activityNoMoreView;
    UITableViewDiffableDataSource *_dataSource;
    WCFinderReuseQueue *_reuseQueue;
    WCFinderEventDelegate *_eventDelegate;
    WCFinderDetailTimeStringConfig *_timeStringConfig;
    UIView *_topSeparatorLine;
    UIView *_bottomSeparatorLine;
    UIButton *_moreButton;
    WCFinderMSInteractionView *_interactionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMSInteractionView *interactionView; // @synthesize interactionView=_interactionView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
@property(retain, nonatomic) UIView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;
@property(retain, nonatomic) WCFinderDetailTimeStringConfig *timeStringConfig; // @synthesize timeStringConfig=_timeStringConfig;
@property(nonatomic) _Bool descContentLabelIsExpand; // @synthesize descContentLabelIsExpand=_descContentLabelIsExpand;
@property(retain, nonatomic) WCFinderEventDelegate *eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(retain, nonatomic) WCFinderReuseQueue *reuseQueue; // @synthesize reuseQueue=_reuseQueue;
@property(retain, nonatomic) UITableViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) WCFinderNoMoreView *activityNoMoreView; // @synthesize activityNoMoreView=_activityNoMoreView;
@property(retain, nonatomic) WCFinderStreamFooterView *noMoreView; // @synthesize noMoreView=_noMoreView;
@property(retain, nonatomic) WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIImageView *dotView3; // @synthesize dotView3=_dotView3;
@property(retain, nonatomic) UIImageView *dotView2; // @synthesize dotView2=_dotView2;
@property(retain, nonatomic) UIImageView *dotView1; // @synthesize dotView1=_dotView1;
@property(retain, nonatomic) RichTextView *payNoticeContent3; // @synthesize payNoticeContent3=_payNoticeContent3;
@property(retain, nonatomic) RichTextView *payNoticeContent2; // @synthesize payNoticeContent2=_payNoticeContent2;
@property(retain, nonatomic) RichTextView *payNoticeContent1; // @synthesize payNoticeContent1=_payNoticeContent1;
@property(retain, nonatomic) UILabel *payNoticeTitleLabel; // @synthesize payNoticeTitleLabel=_payNoticeTitleLabel;
@property(retain, nonatomic) UITableView *activityTableView; // @synthesize activityTableView=_activityTableView;
@property(retain, nonatomic) UICollectionView *playbackCollectionView; // @synthesize playbackCollectionView=_playbackCollectionView;
@property(retain, nonatomic) UICollectionView *collectionCollectionView; // @synthesize collectionCollectionView=_collectionCollectionView;
@property(retain, nonatomic) UICollectionView *feedCollectionView; // @synthesize feedCollectionView=_feedCollectionView;
@property(retain, nonatomic) UILabel *exclusiveActivityTitleLabel; // @synthesize exclusiveActivityTitleLabel=_exclusiveActivityTitleLabel;
@property(retain, nonatomic) UILabel *exclusivePlaybackTitleLabel; // @synthesize exclusivePlaybackTitleLabel=_exclusivePlaybackTitleLabel;
@property(retain, nonatomic) UILabel *exclusiveCollectionTitleLabel; // @synthesize exclusiveCollectionTitleLabel=_exclusiveCollectionTitleLabel;
@property(retain, nonatomic) UILabel *exclusiveFeedTitleLabel; // @synthesize exclusiveFeedTitleLabel=_exclusiveFeedTitleLabel;
@property(retain, nonatomic) WCFinderProfileCardContainer *cardContainer; // @synthesize cardContainer=_cardContainer;
@property(retain, nonatomic) UILabel *exclusiveLiveTitleLabel; // @synthesize exclusiveLiveTitleLabel=_exclusiveLiveTitleLabel;
@property(retain, nonatomic) WCFinderFeedContentTextView *descContentLabel; // @synthesize descContentLabel=_descContentLabel;
@property(retain, nonatomic) UILabel *descTitleLabel; // @synthesize descTitleLabel=_descTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderMemberShipIntroduceReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) __weak id <WCFinderMemberShipZoneIntroduceHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderMemberShipZoneIntroduceHeaderData *data; // @synthesize data=_data;
- (void)onFeedContentTextView:(id)arg1 clickText:(id)arg2 withRect:(struct CGRect)arg3;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2;
- (void)onActivityFeed:(id)arg1 notifyHeightChanged:(id)arg2;
- (void)onActivityFeed:(id)arg1 clickVideo:(id)arg2 originRect:(struct CGRect)arg3 originView:(id)arg4;
- (void)onActivityFeed:(id)arg1 clickPhoto:(id)arg2 photoIndex:(long long)arg3 originViewArr:(id)arg4;
- (void)onCardView:(id)arg1 expose:(long long *)arg2 exposeCount:(long long)arg3 unExpose:(long long *)arg4 unExposeCount:(long long)arg5;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onMemberShipZoneIntroduceHeaderDataChanged;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 indexPath:(id)arg2 cellForItemIdentifier:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)sizeForItem;
- (struct CGSize)mediaSizeForItem;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onSectionHeaderClickAll:(id)arg1;
- (double)getZoneTitleHeight;
- (void)update;
- (id)genMoreButton;
- (id)genSeparatorLine;
- (id)genDotView;
- (id)genFooterView;
- (id)genCollectionView;
- (id)genContentTextView;
- (id)genRichTextView;
- (id)genTitleLabel;
- (void)reloadTableViewData;
- (id)updateSnapshot;
- (id)genTableView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

