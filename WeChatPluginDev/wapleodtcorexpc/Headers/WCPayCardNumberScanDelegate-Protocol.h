//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol WCPayCardNumberScanDelegate <NSObject>
- (void)didFindCardNumber:(NSString *)arg1 cardImage:(UIImage *)arg2 scanResult:(NSString *)arg3;

@optional
- (unsigned int)onWCPayCardNumberScanViewControllerSource;
- (void)clickHandInput;
- (void)clickCloseButton:(id)arg1;
@end

