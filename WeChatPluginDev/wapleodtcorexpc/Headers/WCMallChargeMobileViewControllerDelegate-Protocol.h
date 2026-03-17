//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol WCMallChargeMobileViewControllerDelegate <NSObject>
- (_Bool)IsNeedShowChargeEnsureAlertView;
- (void)OnWCMallChargePhoneTelephoneInputComplete:(NSString *)arg1;
- (void)OnWCMallChargePhoneClearOldList;
- (NSArray *)GetWCMallMallProductsFiltedOldList:(NSString *)arg1;
- (_Bool)IsUsedWCMallMallProduct;
- (void)OnWCMallChargeMobileViewControllerSelectedProduct:(NSDictionary *)arg1;
- (void)OnWCMallInputedCompleteTelphone:(NSString *)arg1;
- (void)OnWCMallChargeMobileViewControllerRightActionBack;
- (void)OnWCMallChargeMobileViewControllerBack;
@end

