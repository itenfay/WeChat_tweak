//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayQRCodeRewardEditMoneyViewControllerDelegate <NSObject>
- (void)onEditMoneyViewControllerConfirmRewardWithAmount:(long long)arg1 comment:(NSString *)arg2 shouldShowNickName:(_Bool)arg3;
- (void)onEditMoneyViewControllerBack;
@end

