//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCBGRecommendMgrDelegate;

@interface WCBGRecommendMgr
{
    id <WCBGRecommendMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCBGRecommendMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)onPackageListUpdated:(id)arg1;
- (void)MMResource_updateBGStorage;
- (id)MMResource_getPackageDataOfBGStorage;
- (id)MMResource_getBGStorage;
- (long long)MMResource_packageKey;
- (void)MMResource_init;
- (_Bool)saveBGStorage:(id)arg1 forLanguage:(id)arg2;
- (id)loadBGStorageForLanguage:(id)arg1;
- (void)SnsCGI_didFailToUpdateBGStorageWithErrorLog:(id)arg1;
- (void)SnsCGI_didUpdateBGStorage:(id)arg1 forLanguage:(id)arg2;
- (void)SnsCGI_updateBGStorage;
- (id)SnsCGI_getBGStorage;
- (unsigned long long)cleanCache;
- (void)didUpdateBGStorage;
- (void)updateBGStorage;
- (id)getBGStorage;
- (_Bool)validateBGStorage:(id)arg1;
- (id)currentLanguage;
- (id)init;

@end

