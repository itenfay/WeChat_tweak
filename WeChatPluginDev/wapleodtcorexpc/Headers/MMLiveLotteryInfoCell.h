//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMFinderLiveLotteryInfo, MMFinderLiveRecordListLotteryInfo;

@interface MMLiveLotteryInfoCell
{
    unsigned int _supportMultiType;
    MMCPLabel *_lotteryInfoTitleLabel;
    MMCPLabel *_lotteryInfoDescLabel;
    MMCPLabel *_lotteryInfoRightDescTopLabel;
    MMCPLabel *_lotteryInfoRightDescBottomLabel;
    MMFinderLiveLotteryInfo *_lotteryInfo;
    MMFinderLiveRecordListLotteryInfo *_milestoneLotteryInfo;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveRecordListLotteryInfo *milestoneLotteryInfo; // @synthesize milestoneLotteryInfo=_milestoneLotteryInfo;
@property(retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo; // @synthesize lotteryInfo=_lotteryInfo;
@property(nonatomic) unsigned int supportMultiType; // @synthesize supportMultiType=_supportMultiType;
@property(retain, nonatomic) MMCPLabel *lotteryInfoRightDescBottomLabel; // @synthesize lotteryInfoRightDescBottomLabel=_lotteryInfoRightDescBottomLabel;
@property(retain, nonatomic) MMCPLabel *lotteryInfoRightDescTopLabel; // @synthesize lotteryInfoRightDescTopLabel=_lotteryInfoRightDescTopLabel;
@property(retain, nonatomic) MMCPLabel *lotteryInfoDescLabel; // @synthesize lotteryInfoDescLabel=_lotteryInfoDescLabel;
@property(retain, nonatomic) MMCPLabel *lotteryInfoTitleLabel; // @synthesize lotteryInfoTitleLabel=_lotteryInfoTitleLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)getAttendMethodTitle;
- (void)updateWithLotteryRecordInfo:(id)arg1;
- (void)updateWithMilestoneLotteryRecordInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

