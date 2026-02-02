//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NewLifeMMKVKeyModel;

@interface NewLifeSyncLogic
{
    NewLifeMMKVKeyModel *_kvModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NewLifeMMKVKeyModel *kvModel; // @synthesize kvModel=_kvModel;
- (_Bool)enableAffSyncLogic;
- (id)generateClientInfo;
- (void)triggerEnterDiscoveryTimeLineSync;
- (void)triggerEnterDiscoveryFinderSync;
- (void)triggerEnterDiscoverySync;
- (void)triggerGlobalSearchSync;
- (void)triggerEnterForForegroundSync;
- (void)onEndWithContinueFlag;
- (void)addSyncTask:(id)arg1;
- (void)syncWithScene:(unsigned int)arg1;
- (void)syncWithEnterScene;
- (void)syncWithSwitchToFinderUsername:(id)arg1;
- (void)syncWithActionNotifyData:(id)arg1;
- (id)otherRelatedKeyPathList;
- (void)setLastBuffer:(id)arg1;
- (void)setSyncBuffer:(id)arg1;
- (id)initWithKVModel:(id)arg1;

@end

