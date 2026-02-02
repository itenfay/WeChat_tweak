//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, UIImageView;

@interface MMLiveRewardGainRecordsBar
{
    CDUnknownBlockType _giftRecordsButtonClickedBlock;
    NSString *_rewardWecoinCntTitle;
    MMUIButton *_giftRecordsButton;
    UIImageView *_avatarIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *avatarIcon; // @synthesize avatarIcon=_avatarIcon;
@property(retain, nonatomic) MMUIButton *giftRecordsButton; // @synthesize giftRecordsButton=_giftRecordsButton;
@property(retain, nonatomic) NSString *rewardWecoinCntTitle; // @synthesize rewardWecoinCntTitle=_rewardWecoinCntTitle;
@property(copy, nonatomic) CDUnknownBlockType giftRecordsButtonClickedBlock; // @synthesize giftRecordsButtonClickedBlock=_giftRecordsButtonClickedBlock;
- (void)onGiftRecordsButtonClicked;
- (void)sizeToFits;
- (void)updateRewardWecoinCnt:(unsigned long long)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;

@end

