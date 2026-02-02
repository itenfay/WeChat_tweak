//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCAccountPhoneVerifyViewController;

@protocol WCAccountPhoneVerifyViewControllerDelegate <NSObject>

@optional
- (void)onPhoneVerifyNext:(NSString *)arg1;
- (void)onPhoneVerifyAgain;
- (void)onPhoneVerifyVoice;
- (void)onPhoneVerifyBack:(WCAccountPhoneVerifyViewController *)arg1;
@end

