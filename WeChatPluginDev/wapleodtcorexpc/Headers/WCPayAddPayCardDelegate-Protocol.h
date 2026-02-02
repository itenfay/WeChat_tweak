//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCPayAddPayCardDelegate <NSObject>

@optional
- (void)onAddPayCardResult:(_Bool)arg1 newCardBindSerial:(NSString *)arg2;
- (void)onAddPayCardResult:(_Bool)arg1;
- (NSString *)getCurrentURL;
- (NSDictionary *)getParams;
@end

