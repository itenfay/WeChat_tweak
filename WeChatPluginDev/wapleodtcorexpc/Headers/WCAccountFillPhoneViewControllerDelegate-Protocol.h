//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCAccountFillPhoneViewController;

@protocol WCAccountFillPhoneViewControllerDelegate <NSObject>

@optional
- (void)onFillPhoneNext:(NSString *)arg1 countryIsoCode:(NSString *)arg2 phoneNum:(NSString *)arg3;
- (void)onFillPhoneBack:(WCAccountFillPhoneViewController *)arg1;
@end

