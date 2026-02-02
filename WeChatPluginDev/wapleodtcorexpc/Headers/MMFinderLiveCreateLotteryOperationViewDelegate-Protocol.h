//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveCreateLotteryDataItem, NSIndexPath;

@protocol MMFinderLiveCreateLotteryOperationViewDelegate <NSObject>
- (_Bool)isComeFromStaterVC;
- (NSIndexPath *)getScrollToRowAtIndexPath;
- (void)onLiveLotteryRecordClick;
- (void)createLotteryClick;
- (void)createlotterySelect:(MMFinderLiveCreateLotteryDataItem *)arg1 indexPath:(NSIndexPath *)arg2;
@end

