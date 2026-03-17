//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController, WCDataItem, WCMomentsShareScopeViewController;

@protocol WCMomentsShareScopeViewControllerDelegate <NSObject>
- (void)onClickUserName:(NSString *)arg1;
- (void)onClickTagGroup:(unsigned int)arg1;
- (UIViewController *)shareScopeViewControllerGetPresentingVC:(WCMomentsShareScopeViewController *)arg1;
- (void)shareScopeViewController:(WCMomentsShareScopeViewController *)arg1 didClickModifyScopeButton:(WCDataItem *)arg2;
@end

