//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSObject, NSString, ProfileSetting, ProtobufCGIWrap;

@protocol IBrandAttrMgrExt

@optional
- (void)onBizProfileSettingModified:(NSString *)arg1 setting:(ProfileSetting *)arg2 finderUserName:(NSString *)arg3;
- (void)onFetchBizProfile:(NSString *)arg1 resp:(ProtobufCGIWrap *)arg2 action:(int)arg3 userInfo:(NSObject *)arg4;
- (void)onBrandContactModified:(NSString *)arg1 withAttrChanged:(NSDictionary *)arg2;
@end

