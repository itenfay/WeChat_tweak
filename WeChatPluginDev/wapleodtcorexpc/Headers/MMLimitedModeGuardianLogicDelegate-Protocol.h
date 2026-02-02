//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMLimitedModeGuardianLogicDelegate <NSObject>

@optional
- (void)onAgreeTeenagerModeAuthorization:(NSString *)arg1 businessType:(unsigned int)arg2 success:(_Bool)arg3 errMsg:(NSString *)arg4;
- (void)onUnBindTeenagerModeGuardianWithSuccess:(_Bool)arg1 errMsg:(NSString *)arg2;
- (void)onBindTeenagerModeGuardianWithSuccess:(_Bool)arg1 errMsg:(NSString *)arg2;
- (void)onGetTeenagerModePreBindGuardianInfo:(NSString *)arg1 success:(_Bool)arg2 errMsg:(NSString *)arg3;
@end

