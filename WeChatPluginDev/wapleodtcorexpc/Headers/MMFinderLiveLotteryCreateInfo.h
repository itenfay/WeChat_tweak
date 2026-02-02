//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveLotteryAttendMethod, FinderLiveLotteryClaimMethod, FinderLiveLotteryPrizeMethod, MMFinderLiveTaskId, NSString;

@interface MMFinderLiveLotteryCreateInfo : NSObject
{
    unsigned int _lotteryDuration;
    unsigned int _lotteryWinnerCnt;
    unsigned int _methodId;
    unsigned int _wecoinCountToPay;
    MMFinderLiveTaskId *_liveTaskId;
    NSString *_lotteryDescription;
    FinderLiveLotteryAttendMethod *_method;
    FinderLiveLotteryClaimMethod *_claimMethod;
    FinderLiveLotteryPrizeMethod *_prizeMethod;
    unsigned long long _settingFlag;
}

+ (id)CreateWithLiveTaskId:(id)arg1 lotteryMethodItem:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int wecoinCountToPay; // @synthesize wecoinCountToPay=_wecoinCountToPay;
@property(nonatomic) unsigned int methodId; // @synthesize methodId=_methodId;
@property(nonatomic) unsigned long long settingFlag; // @synthesize settingFlag=_settingFlag;
@property(retain, nonatomic) FinderLiveLotteryPrizeMethod *prizeMethod; // @synthesize prizeMethod=_prizeMethod;
@property(retain, nonatomic) FinderLiveLotteryClaimMethod *claimMethod; // @synthesize claimMethod=_claimMethod;
@property(retain, nonatomic) FinderLiveLotteryAttendMethod *method; // @synthesize method=_method;
@property(nonatomic) unsigned int lotteryWinnerCnt; // @synthesize lotteryWinnerCnt=_lotteryWinnerCnt;
@property(retain, nonatomic) NSString *lotteryDescription; // @synthesize lotteryDescription=_lotteryDescription;
@property(nonatomic) unsigned int lotteryDuration; // @synthesize lotteryDuration=_lotteryDuration;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (id)description;
- (id)genLotteryMethodItem;
- (id)initWithLiveTaskId:(id)arg1;

@end

