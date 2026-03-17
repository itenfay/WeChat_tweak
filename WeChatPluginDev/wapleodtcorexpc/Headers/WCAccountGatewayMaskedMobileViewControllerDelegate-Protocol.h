//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCAccountGatewayMaskedMobileViewController;

@protocol WCAccountGatewayMaskedMobileViewControllerDelegate <NSObject>

@optional
- (void)onGatewayViewControllerUseOtherPhone;
- (void)onGatewayViewControllerGoNext;
- (void)onGatewayViewControllerQuit:(WCAccountGatewayMaskedMobileViewController *)arg1;
@end

