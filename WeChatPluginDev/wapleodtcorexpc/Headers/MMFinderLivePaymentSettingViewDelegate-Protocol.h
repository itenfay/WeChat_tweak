//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLivePaymentSettingView;

@protocol MMFinderLivePaymentSettingViewDelegate <NSObject>

@optional
- (void)onMMFinderLivePaymentSettingViewClosed:(MMFinderLivePaymentSettingView *)arg1;
- (void)onMMFinderLivePaymentSettingViewChoosePriceInWecoin:(unsigned int)arg1;
@end

