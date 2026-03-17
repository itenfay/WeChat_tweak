//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DeviceRankDetailResonse, NSArray, NSString;

@protocol IDeviceRankProfileMgrExt

@optional
- (void)onDelFollowWithUserName:(NSString *)arg1 error:(int)arg2;
- (void)onAddFollowWithFollowItems:(NSArray *)arg1 error:(int)arg2;
- (void)onGotUserRankDetail:(NSString *)arg1 rankDetailResp:(DeviceRankDetailResonse *)arg2 err:(int)arg3;
- (void)onUpdateCoverImageError:(int)arg1;
- (void)onCoverImageChanged;
@end

