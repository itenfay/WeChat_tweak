//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, EnterpriseBrandContactSelectViewController;

@protocol EnterpriseBrandContactSelectViewControllerDelegate <NSObject>

@optional
- (void)onEnterpriseCancelSelectBrand:(EnterpriseBrandContactSelectViewController *)arg1;
- (void)onEnterpriseSelectBrandContact:(CContact *)arg1 viewController:(EnterpriseBrandContactSelectViewController *)arg2;
@end

