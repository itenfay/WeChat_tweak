//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderDataItem;

@protocol WCFinderLandScapePlayCompleteTipsViewDelegate <NSObject>
- (WCFinderDataItem *)finderLandScapePlayCompleteTipsViewLastCompletedDataItem;
- (void)finderLandScapePlayCompleteTipsViewDidCountdownActionOver:(WCFinderDataItem *)arg1;
- (void)finderLandScapePlayCompleteTipsViewDidClickNextBtnWithDataItem:(WCFinderDataItem *)arg1;
- (void)finderLandScapePlayCompleteTipsViewDidClickReturnBtn;
- (void)finderLandScapePlayCompleteTipsViewDidClickReplayBtn;
@end

