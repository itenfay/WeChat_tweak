//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayFillCredInfoViewControllerDelegate <NSObject>
- (void)onFillCredInfoViewControllerConfirmWithName:(NSString *)arg1 credType:(NSString *)arg2 credNum:(NSString *)arg3;
- (void)onFillCredInfoViewControllerBack;
@end

