//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol _TtP6WeChat18IMRServiceListener_
- (void)onEnvErrorWithErrType:(long long)arg1 errMsg:(NSString *)arg2;
- (void)onEnvResUnloaded:(NSString *)arg1 sceneName:(NSString *)arg2;
- (void)onEnvResLoaded:(NSString *)arg1 sceneName:(NSString *)arg2;
- (void)onEnvResUpdated:(NSString *)arg1;
- (void)onEnvDestroyed;
- (void)onEnvPrepared;
@end

