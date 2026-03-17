//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderRedDotExposeModelDelegate <NSObject>

@optional
- (void)onRedDotExposeModelResetExposeBanCountAtPath:(NSString *)arg1 businessType:(unsigned long long)arg2 cleanAccType:(long long)arg3;
- (void)onRedDotExposeModelExposeCountIncreaseAtPath:(NSString *)arg1 businessType:(unsigned long long)arg2;
- (void)onRedDotExposeModelBanCountIncreaseAtPath:(NSString *)arg1 businessType:(unsigned long long)arg2;
- (void)onRedDotExposeModelBanCountResetAtPath:(NSString *)arg1 businessType:(unsigned long long)arg2;
@end

