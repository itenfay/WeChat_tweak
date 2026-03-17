//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;

@protocol WCCardAddHelperDelegate <NSObject>
- (void)onAddCancel;
- (void)onAddFail:(NSString *)arg1;
- (void)onAddSuccess:(NSString *)arg1;
- (UIViewController *)getViewController;
@end

