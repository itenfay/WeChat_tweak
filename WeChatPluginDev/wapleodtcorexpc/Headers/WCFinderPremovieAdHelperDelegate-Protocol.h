//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderJumpInfo;

@protocol WCFinderPremovieAdHelperDelegate <NSObject>
- (void)finderPremovieAdFeedbackViewFrameShouldChangeWithAdLabelFrame:(struct CGRect)arg1;
- (void)finderPremovieAdFeedbackViewShouldShowWithAdLabelFrame:(struct CGRect)arg1;
- (void)finderPremovieAdDidClickJumpInfo:(WCFinderJumpInfo *)arg1;
- (void)finderPremovieAdShouldClose;
- (void)finderPremovieAdShouldShow;
@end

