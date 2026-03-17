//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class KidsWatchRegisterVerifyCodeCardView;

@protocol KidsWatchRegisterVerifyCodeCardViewDelegate <NSObject>

@optional
- (void)onVerifyCodeChanged:(KidsWatchRegisterVerifyCodeCardView *)arg1;
- (void)onTapSendVerifyCodeButton:(KidsWatchRegisterVerifyCodeCardView *)arg1;
@end

