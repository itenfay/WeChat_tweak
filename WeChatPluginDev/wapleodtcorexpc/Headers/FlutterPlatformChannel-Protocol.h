//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, NSString;

@protocol FlutterPlatformChannel
- (NSString *)getWeChatRevisionWithError:(id *)arg1;
- (NSNumber *)isScreenOnWithError:(id *)arg1;
- (void)mediumVibrateForce:(_Bool)arg1 error:(id *)arg2;
- (void)lightVibrateForce:(_Bool)arg1 error:(id *)arg2;
- (NSString *)getAppVersionWithError:(id *)arg1;
@end

