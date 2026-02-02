//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol ScanLicenceBankCardNumberConfirmViewControllerDelegate <NSObject>
- (void)FillBankNumConfirmWithImage:(UIImage *)arg1 cardNumber:(NSString *)arg2;
- (void)FillBankNumCancel;
@end

