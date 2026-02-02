//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, ScopeRiskPopUpInfo, WAAppAuthRespData;

@protocol WAAppDetailInfoManagerExtension <NSObject>

@optional
- (void)onDeleteAppUseUserInfo:(NSArray *)arg1 errorCode:(int)arg2 errMsg:(NSString *)arg3;
- (void)onAppAuthInfoListModifyFailedWithRiskControlInfo:(ScopeRiskPopUpInfo *)arg1;
- (void)onAppAuthInfoListModifyEnd:(_Bool)arg1 AuthDataList:(NSArray *)arg2;
- (void)onWeAppReceiveMsgStatusChangedSuccess:(_Bool)arg1 WeAppUserName:(NSString *)arg2;
- (void)onModAppAuthInfoListWithAppid:(NSString *)arg1 errorCode:(int)arg2;
- (void)onGetAppAuthInfo:(WAAppAuthRespData *)arg1 appid:(NSString *)arg2 errorCode:(int)arg3;
@end

