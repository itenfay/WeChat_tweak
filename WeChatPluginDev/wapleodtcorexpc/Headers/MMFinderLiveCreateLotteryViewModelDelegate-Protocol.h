//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveLotteryMethodItem;

@protocol MMFinderLiveCreateLotteryViewModelDelegate <NSObject>

@optional
- (void)onLiveLotteryRecordClick;
- (void)deleteLotteryClick:(FinderLiveLotteryMethodItem *)arg1 session:(long long)arg2;
- (void)lotteryBodyClick:(FinderLiveLotteryMethodItem *)arg1;
- (void)startLotteryClick:(FinderLiveLotteryMethodItem *)arg1;
- (void)createLotteryClick;
@end

