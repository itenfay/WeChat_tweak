//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class LotteryGiftInfo, MMUILabel, MMWebImageView;

@interface MMLiveLotteryDetailCardGiftCell : UICollectionViewCell
{
    _Bool _isSameGift;
    LotteryGiftInfo *_giftInfo;
    unsigned long long _type;
    long long _giftCount;
    MMWebImageView *_webImageView;
    MMUILabel *_titleLabel;
}

+ (id)getTitleStringWithString:(id)arg1 font:(id)arg2 numFont:(id)arg3 textColor:(id)arg4;
+ (id)getTitleLabelFontWithSize:(double)arg1;
+ (id)getCurrentAttributedStringWithTitle:(id)arg1 type:(unsigned long long)arg2 textColor:(id)arg3 isSameGift:(_Bool)arg4 giftCount:(long long)arg5;
+ (double)getTitleWidthWithTitle:(long long)arg1 type:(unsigned long long)arg2 textColor:(id)arg3 isSameGift:(_Bool)arg4 giftCount:(long long)arg5 height:(double)arg6;
+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSameGift; // @synthesize isSameGift=_isSameGift;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
@property(nonatomic) long long giftCount; // @synthesize giftCount=_giftCount;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) LotteryGiftInfo *giftInfo; // @synthesize giftInfo=_giftInfo;
- (void)layoutTitleLabel;
- (void)layoutWebImageView;
- (void)layoutUI;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithLotteryGift:(id)arg1 type:(unsigned long long)arg2 giftCount:(long long)arg3 isSameGift:(_Bool)arg4;

@end

