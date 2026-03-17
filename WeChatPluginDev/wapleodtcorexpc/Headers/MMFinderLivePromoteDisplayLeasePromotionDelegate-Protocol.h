//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLivePromoteDisplayLeaseToken;

@protocol MMFinderLivePromoteDisplayLeasePromotionDelegate <NSObject>
- (void)onPromoteDisplayLeaseUserDismissed:(MMFinderLivePromoteDisplayLeaseToken *)arg1;
- (void)onPromoteDisplayLeaseExpired:(MMFinderLivePromoteDisplayLeaseToken *)arg1;
- (void)onPromoteDisplayLeaseRelinquished:(MMFinderLivePromoteDisplayLeaseToken *)arg1;
- (void)onPromoteDisplayLeaseViewLayoutRequested:(MMFinderLivePromoteDisplayLeaseToken *)arg1;
@end

