//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayRealnameRegResp;

@protocol WCPayRealnameSuccessViewControllerDelegate <NSObject>
- (WCPayRealnameRegResp *)onWCPayRealnameSuccessViewControllerGetData;
- (_Bool)onWCPayRealnameSuccessViewControllerShowRetry;
- (NSString *)onWCPayRealnameSuccessViewControllerButtonTitle;
- (NSString *)onWCPayRealnameSuccessViewControllerDesc;
- (NSString *)onWCPayRealnameSuccessViewControllerTitle;
- (void)onWCPayRealnameSuccessViewControllerRetry;
- (void)onWCPayRealnameSuccessViewControllerDone;
- (void)onWCPayRealnameSuccessViewControllerBack;
@end

