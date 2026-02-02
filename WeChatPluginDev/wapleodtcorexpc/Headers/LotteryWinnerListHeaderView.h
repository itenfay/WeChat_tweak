//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveLotteryInfo, MMUILabel, UIImageView;

@interface LotteryWinnerListHeaderView : UIView
{
    UIView *_lotteryIconView;
    UIImageView *_lotteryIconImg;
    MMUILabel *_lotteryNameLabel;
    MMUILabel *_lotteryDescriptionTitleLabel;
    MMUILabel *_lotteryActionTitleLabel;
    MMUILabel *_lotteryWinTimeTitleLabel;
    UIView *_sepelateLine;
    MMFinderLiveLotteryInfo *_lotteryInfo;
}

+ (double)headerHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo; // @synthesize lotteryInfo=_lotteryInfo;
@property(retain, nonatomic) UIView *sepelateLine; // @synthesize sepelateLine=_sepelateLine;
@property(retain, nonatomic) MMUILabel *lotteryWinTimeTitleLabel; // @synthesize lotteryWinTimeTitleLabel=_lotteryWinTimeTitleLabel;
@property(retain, nonatomic) MMUILabel *lotteryActionTitleLabel; // @synthesize lotteryActionTitleLabel=_lotteryActionTitleLabel;
@property(retain, nonatomic) MMUILabel *lotteryDescriptionTitleLabel; // @synthesize lotteryDescriptionTitleLabel=_lotteryDescriptionTitleLabel;
@property(retain, nonatomic) MMUILabel *lotteryNameLabel; // @synthesize lotteryNameLabel=_lotteryNameLabel;
@property(retain, nonatomic) UIImageView *lotteryIconImg; // @synthesize lotteryIconImg=_lotteryIconImg;
@property(retain, nonatomic) UIView *lotteryIconView; // @synthesize lotteryIconView=_lotteryIconView;
- (id)innerGetLotteryAttendTypeStr;
- (void)updateLotteryInfo:(id)arg1;
- (void)layoutSeparateLine;
- (void)layoutLotteryWinTimeTitleLabel;
- (void)layoutLotteryActionTitleLabel;
- (void)layoutLotteryDescriptionTitleLabel;
- (void)layoutLotteryNameLabel;
- (void)layoutLotteryIcon;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

