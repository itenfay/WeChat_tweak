//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveLotteryContact, MMCPLabel, MMFinderLiveLotteryInfo, MMHeadImageView, MMLiveLotteryDetailCardGiftFlowLayout, MMUIButton, MMUILabel, NSMutableArray, NSString, UICollectionView;
@protocol MMLiveLotteryWinnerRecordCellDelegate;

@interface MMLiveLotteryWinnerRecordCell
{
    _Bool _isAudience;
    id <MMLiveLotteryWinnerRecordCellDelegate> _cellDelegate;
    MMHeadImageView *_headImageView;
    MMCPLabel *_displayNameLabel;
    FinderLiveLotteryContact *_lotteryContact;
    MMUILabel *_addressLabel;
    MMFinderLiveLotteryInfo *_lotteryInfo;
    NSMutableArray *_dataArray;
    UICollectionView *_collectionView;
    MMUIButton *_winTitleButton;
    long long _giftShowType;
    long long _giftRowNum;
    MMLiveLotteryDetailCardGiftFlowLayout *_giftFlowLayout;
}

+ (long long)getGiftRowNumWithLotteryContact:(id)arg1 showMoreLine:(_Bool)arg2;
+ (_Bool)isGiftShowMoreLine:(id)arg1;
+ (_Bool)canShowLotteryGift:(id)arg1;
+ (id)getDataArrayWithLotteryInfo:(id)arg1 lotteryContact:(id)arg2;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveLotteryDetailCardGiftFlowLayout *giftFlowLayout; // @synthesize giftFlowLayout=_giftFlowLayout;
@property(nonatomic) long long giftRowNum; // @synthesize giftRowNum=_giftRowNum;
@property(nonatomic) long long giftShowType; // @synthesize giftShowType=_giftShowType;
@property(retain, nonatomic) MMUIButton *winTitleButton; // @synthesize winTitleButton=_winTitleButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo; // @synthesize lotteryInfo=_lotteryInfo;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
@property(retain, nonatomic) MMUILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) FinderLiveLotteryContact *lotteryContact; // @synthesize lotteryContact=_lotteryContact;
@property(retain, nonatomic) MMCPLabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak id <MMLiveLotteryWinnerRecordCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void)prepareForReuse;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)isCurrentSameGift;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutAudience;
- (void)layoutAnchor;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)getNumberWidthGiftInfo:(id)arg1;
- (double)getCollectionViewNumberMarginWithShowType:(long long)arg1;
- (double)getCollectionViewColumnMarginWithShowType:(long long)arg1;
- (double)getCollectionViewRowMargin:(_Bool)arg1;
- (double)getCollectionViewItemSizeWithShowType:(long long)arg1;
- (double)getCollectionViewHeightWithShowType:(long long)arg1 giftRowNum:(long long)arg2;
- (void)updateWithWinnerContact:(id)arg1 isAudience:(_Bool)arg2 lotteryInfo:(id)arg3 giftShowType:(long long)arg4;
- (void)initNameLabel;
- (void)initHeaderImageView;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)lotteryWinnerRecordHeadImageViewLeftMargin;
- (double)lotteryWinnerRecordHeadImageViewRightMargin;
- (double)lotteryWinnerRecordCellInnerPadding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

