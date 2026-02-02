//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DeviceRankDetailResonse, NSMutableDictionary, NSString;

@interface DeviceRankProfileMgr
{
    DeviceRankDetailResonse *m_selfDeviceRank;
    NSString *m_nsCDNClientID;
    NSMutableDictionary *m_profileConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsCDNClientID; // @synthesize m_nsCDNClientID;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleRankDelFollowResponse:(id)arg1;
- (void)handleRankAddFollowResponse:(id)arg1;
- (void)handleRankGetUserRankDetailResponse:(id)arg1;
- (void)handleUpdateCoverResponse:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)delFollowWithUserName:(id)arg1;
- (void)addFollowWithFollowItem:(id)arg1;
- (void)saveProfileConfig;
- (void)setConfigWithObject:(id)arg1 key:(id)arg2;
- (id)GetDeviceRankProfileConfig;
- (void)tryLoadDeviceRankProfileConfig;
- (void)UpdateDeviceRankProfile;
- (void)saveRankProfile;
- (id)getRankProfileConfigCacheFile;
- (id)getRankProfileCacheOldPath;
- (id)getRankProfileHistoryPath;
- (id)getRankProfileCacheFilePath;
- (id)getRankCoverCacheOldPath;
- (id)getRankCoverCacheFilePath;
- (unsigned int)saveCoverImg:(id)arg1;
- (id)loadCoverImgCache;
- (id)GetSelfDeviceRankCache;
- (void)tryLoadDeviceRankProfile;
- (void)UpdateDeviceRankMotto:(id)arg1;
- (id)GetDeviceRankMotto;
- (void)UpdateDeviceRankCoverWithImg:(id)arg1;
- (id)GetDeviceRankCoverImg;
- (id)GetDeviceRankProfileWithBrandUser:(id)arg1 UserName:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

