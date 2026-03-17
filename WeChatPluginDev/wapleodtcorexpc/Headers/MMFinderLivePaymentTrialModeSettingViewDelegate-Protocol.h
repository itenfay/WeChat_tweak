//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLivePaymentTrialModeSettingView;

@protocol MMFinderLivePaymentTrialModeSettingViewDelegate <NSObject>

@optional
- (void)onPaymentTrialModeSettingViewClosed:(MMFinderLivePaymentTrialModeSettingView *)arg1;
- (void)onUpdatePurchaseLivePreviewType:(long long)arg1;
@end

