//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMCPLabel, MMFinderLiveFansGroupSignView, MMFinderLiveGlobalRankSignView, MMFinderLiveLiveRoleSignView, MMFinderLiveNormalTextSignView, MMFinderLiveRecentRewardGiftsView, MMFinderLiveRecentRewardUserItem, MMFinderLiveTask, MMUIImageView, NSMutableArray, NSString, UIView, WCFinderHeadImageView;
@protocol MMFinderLiveRecentRewardCollectionCellDelegate;

@interface MMFinderLiveRecentRewardCollectionCell : UICollectionViewCell
{
    _Bool _needSeparatorLine;
    unsigned int _visibleBadgeCount;
    id <MMFinderLiveRecentRewardCollectionCellDelegate> _cellDelegate;
    WCFinderHeadImageView *_headImageView;
    MMCPLabel *_displayNameLabel;
    MMFinderLiveGlobalRankSignView *_globalRankSignView;
    MMFinderLiveFansGroupSignView *_fansGroupSignView;
    MMFinderLiveLiveRoleSignView *_mysteriousSignView;
    MMFinderLiveNormalTextSignView *_buySignView;
    MMFinderLiveNormalTextSignView *_frequentWatchSignView;
    MMFinderLiveNormalTextSignView *_followerSignView;
    MMFinderLiveRecentRewardGiftsView *_recentRewardGiftsView;
    NSMutableArray *_giftItemsViews;
    UIView *_separatorLine;
    MMFinderLiveRecentRewardUserItem *_recentRewardUserItem;
    MMUIImageView *_roleIconImageView;
    MMUIImageView *_genderIconImageView;
}

+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *genderIconImageView; // @synthesize genderIconImageView=_genderIconImageView;
@property(retain, nonatomic) MMUIImageView *roleIconImageView; // @synthesize roleIconImageView=_roleIconImageView;
@property(retain, nonatomic) MMFinderLiveRecentRewardUserItem *recentRewardUserItem; // @synthesize recentRewardUserItem=_recentRewardUserItem;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) NSMutableArray *giftItemsViews; // @synthesize giftItemsViews=_giftItemsViews;
@property(nonatomic) unsigned int visibleBadgeCount; // @synthesize visibleBadgeCount=_visibleBadgeCount;
@property(retain, nonatomic) MMFinderLiveRecentRewardGiftsView *recentRewardGiftsView; // @synthesize recentRewardGiftsView=_recentRewardGiftsView;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *followerSignView; // @synthesize followerSignView=_followerSignView;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *frequentWatchSignView; // @synthesize frequentWatchSignView=_frequentWatchSignView;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *buySignView; // @synthesize buySignView=_buySignView;
@property(retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView; // @synthesize mysteriousSignView=_mysteriousSignView;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView; // @synthesize fansGroupSignView=_fansGroupSignView;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView; // @synthesize globalRankSignView=_globalRankSignView;
@property(retain, nonatomic) MMCPLabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) _Bool needSeparatorLine; // @synthesize needSeparatorLine=_needSeparatorLine;
@property(nonatomic) __weak id <MMFinderLiveRecentRewardCollectionCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (id)getFansGroupName;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (double)roleIconImageWidth;
- (double)genderIconImageViewWidth;
- (void)updateGenderImageView;
- (double)getFrequentWatchSignWidth;
- (double)getFollowerSignWidth;
- (double)getBuySignWidth;
- (double)getFansGroupSignWidth;
- (double)getGlobalRankSignWidth;
- (void)updateFollowerSignView;
- (void)updateFrequentWatchSignView;
- (void)updateBuySignView;
- (void)updateFansGroupSignView;
- (void)updateGlobalRankSignView;
- (void)updateMysteriousSignView;
- (id)getMinimumUsername:(id)arg1;
- (double)calculateFoldUserNameTotalLength;
- (double)calculateOriginalTotalLength;
- (double)calculateGiftsViewLength;
- (void)onClickLastOneItem;
- (void)updateWithRecentRewardUserItem:(id)arg1;
- (_Bool)isMysterious;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initGenderIconImageView;
- (void)initRoleIconImageView;
- (void)initSeperatorLine;
- (void)initRecentRewardGiftsView;
- (void)initFollowerSignView;
- (void)initFrequentWatchSignView;
- (void)initBuySignView;
- (void)initFansGroupSignView;
- (void)initMysteriousSignView;
- (void)initGlobalRankSignView;
- (void)initNameLabel;
- (void)initHeadImageView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

