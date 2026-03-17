//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol V2TXLivePremierObserver <NSObject>

@optional
- (void)onLicenceLoaded:(int)arg1 Reason:(NSString *)arg2;
- (void)onLog:(long long)arg1 log:(NSString *)arg2;
@end

