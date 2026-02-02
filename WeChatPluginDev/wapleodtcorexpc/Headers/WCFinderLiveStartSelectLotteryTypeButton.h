//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderLiveStartSelectLotteryTypeButton
{
    int _lotteryType;
    CDUnknownBlockType _selectButtonBlock;
}

+ (id)getSelectLotteryTypeButton;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selectButtonBlock; // @synthesize selectButtonBlock=_selectButtonBlock;
@property(nonatomic) int lotteryType; // @synthesize lotteryType=_lotteryType;
- (void)updateWithType:(int)arg1;
- (void)chooseWithType:(int)arg1;
- (id)getTitleWithType:(int)arg1;

@end

