//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController;

@protocol MMAuthorizeViewControllerDelegate <NSObject>
- (void)onScopeViewControllerClose:(MMUIViewController *)arg1;
- (void)onScopeViewControllerDeny:(MMUIViewController *)arg1;
- (void)onScopeViewControllerConfirm:(MMUIViewController *)arg1;
@end

