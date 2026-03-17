//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol WCPayQRCodeRewardSetupViewControllerDelegate <NSObject>
- (void)onSetupViewControllerConfirmGenCodeWithAmountList:(NSArray *)arg1 rewardDesc:(NSString *)arg2 hasChangeDefaultAmount:(_Bool)arg3;
- (void)onSetupViewControllerBack;
@end

