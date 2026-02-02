//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMFinderLiveLotteryRecord, MMUIImageView;

@interface MMLiveLotteryRecordCell
{
    MMCPLabel *_liveRecordNameLabel;
    MMUIImageView *_arrowImageView;
    MMFinderLiveLotteryRecord *_lotteryRecord;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveLotteryRecord *lotteryRecord; // @synthesize lotteryRecord=_lotteryRecord;
@property(retain, nonatomic) MMUIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMCPLabel *liveRecordNameLabel; // @synthesize liveRecordNameLabel=_liveRecordNameLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithLotteryRecord:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

