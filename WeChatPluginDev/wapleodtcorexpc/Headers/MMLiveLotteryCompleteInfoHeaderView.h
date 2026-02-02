//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMCPLabel, MMFinderLiveLotteryRecord;

@interface MMLiveLotteryCompleteInfoHeaderView : UIView
{
    MMFinderLiveLotteryRecord *_lotteryRecord;
    MMCPLabel *_lotteryInfoTitleLabel;
    MMCPLabel *_lotteryInfoDescLabel;
}

+ (double)headerHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMCPLabel *lotteryInfoDescLabel; // @synthesize lotteryInfoDescLabel=_lotteryInfoDescLabel;
@property(retain, nonatomic) MMCPLabel *lotteryInfoTitleLabel; // @synthesize lotteryInfoTitleLabel=_lotteryInfoTitleLabel;
@property(retain, nonatomic) MMFinderLiveLotteryRecord *lotteryRecord; // @synthesize lotteryRecord=_lotteryRecord;
- (void)updateWithLotteryRecord:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

