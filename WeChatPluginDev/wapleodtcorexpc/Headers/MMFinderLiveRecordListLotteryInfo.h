//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveLotteryInfo, MMFinderLiveMilestoneLotteryInfo;

@interface MMFinderLiveRecordListLotteryInfo : NSObject
{
    unsigned int _type;
    MMFinderLiveMilestoneLotteryInfo *_milestoneLotteryInfo;
    MMFinderLiveLotteryInfo *_lotteryInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo; // @synthesize lotteryInfo=_lotteryInfo;
@property(retain, nonatomic) MMFinderLiveMilestoneLotteryInfo *milestoneLotteryInfo; // @synthesize milestoneLotteryInfo=_milestoneLotteryInfo;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)initWithLotteryInfo:(id)arg1;

@end

