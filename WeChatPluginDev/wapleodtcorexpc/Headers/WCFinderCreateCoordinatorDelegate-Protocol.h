//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController, WCFinderCreateCoordinator;

@protocol WCFinderCreateCoordinatorDelegate <NSObject>

@optional
- (UIViewController *)getCustomControllerForShowFinderCreateAccount;
- (void)finderCreateCoordinatorStartCreateUserComplete;
- (void)finderRealNameSuccess:(WCFinderCreateCoordinator *)arg1;
- (void)finderCreateAccountCancel:(WCFinderCreateCoordinator *)arg1;
- (void)finderCreateAccountSuccess:(WCFinderCreateCoordinator *)arg1;
- (void)finderCreateAccountConfirmed:(WCFinderCreateCoordinator *)arg1;
- (void)finderCreateAccountViewShow:(WCFinderCreateCoordinator *)arg1;
@end

