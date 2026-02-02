//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveLotteryInfo, MMLiveLotteryDetailCardGiftFlowLayout, NSMutableArray, NSString, UICollectionView, UIImageView;

@interface MMLiveLotteryDetailCardGiftView : UIView
{
    UIImageView *_bgImageView;
    UICollectionView *_collectionView;
    MMLiveLotteryDetailCardGiftFlowLayout *_flowLayout;
    MMFinderLiveLotteryInfo *_lotteryInfo;
    unsigned long long _type;
    long long _giftCount;
    long long _column;
    long long _row;
    double _itemSize;
    double _collectionViewWidth;
    double _collectionViewHeight;
    NSMutableArray *_showGiftInfoArray;
}

+ (id)getShowGiftInfoWithLotteryInfo:(id)arg1;
+ (_Bool)isWinnerWithLotteryInfo:(id)arg1;
+ (long long)getColumnCount:(unsigned long long)arg1;
+ (double)getItemSize:(unsigned long long)arg1;
+ (double)getItemColumnMargin:(unsigned long long)arg1;
+ (double)getItemRowMargin;
+ (unsigned long long)getTypeWithLotteryInfo:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *showGiftInfoArray; // @synthesize showGiftInfoArray=_showGiftInfoArray;
@property(nonatomic) double collectionViewHeight; // @synthesize collectionViewHeight=_collectionViewHeight;
@property(nonatomic) double collectionViewWidth; // @synthesize collectionViewWidth=_collectionViewWidth;
@property(nonatomic) double itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(nonatomic) long long column; // @synthesize column=_column;
@property(nonatomic) long long giftCount; // @synthesize giftCount=_giftCount;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo; // @synthesize lotteryInfo=_lotteryInfo;
@property(retain, nonatomic) MMLiveLotteryDetailCardGiftFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (_Bool)isCurrentSameGift;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutUI;
- (void)addContentView;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (void)updateWithLotteryInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

