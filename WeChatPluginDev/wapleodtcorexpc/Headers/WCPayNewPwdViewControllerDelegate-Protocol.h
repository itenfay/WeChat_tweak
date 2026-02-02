//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString, WCPayControlData;

@protocol WCPayNewPwdViewControllerDelegate <NSObject>
- (_Bool)isNewPwdLoading;
- (void)OnWCPayNewPwdViewControllerBack;

@optional
- (void)verifyPayBiotricNext:(NSData *)arg1 signature:(NSData *)arg2 signSrc:(NSString *)arg3;
- (void)verifyPayBiotricNext:(NSData *)arg1;
- (void)verifyPayPwdNext:(WCPayControlData *)arg1;
@end

