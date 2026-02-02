//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAAppTrialInfoLoader
{
    CDUnknownBlockType m_completeBlock;
    unsigned int _appServiceType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
- (void)updateNotifyInfoWithDownloadUrl:(id)arg1 md5Str:(id)arg2 extInfo:(id)arg3 oldNotify:(id)arg4;
- (void)sendRequest:(id)arg1 Retry:(unsigned int)arg2;
- (void)handleCheckTrialInfoResponse:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)requestTrialInfoWithPack:(id)arg1;
- (void)loadTrialInfoWithPack:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

