//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CEnterpriseContact, EnterpriseSessionSelectViewController;

@protocol EnterpriseSessionSelectViewControllerDelegate <NSObject>

@optional
- (void)OnEnterpriseCancelSelectSession:(EnterpriseSessionSelectViewController *)arg1;
- (void)OnEnterpriseSelectSession:(CEnterpriseContact *)arg1 viewController:(EnterpriseSessionSelectViewController *)arg2;
@end

