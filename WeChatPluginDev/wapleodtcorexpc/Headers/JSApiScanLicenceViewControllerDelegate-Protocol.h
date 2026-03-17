//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol JSApiScanLicenceViewControllerDelegate <NSObject>
- (void)didFindCalibrateCardImage:(UIImage *)arg1 cardType:(unsigned long long)arg2;
- (void)didFindBankCardNumber:(NSString *)arg1 cardImage:(UIImage *)arg2;
- (void)onReturnBtnClick;
@end

