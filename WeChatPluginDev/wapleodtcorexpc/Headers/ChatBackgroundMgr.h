//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatBackgroundSettings, NSMutableArray, NSMutableDictionary, NSString, UIImage;

@interface ChatBackgroundMgr
{
    ChatBackgroundSettings *m_settings;
    NSMutableArray *m_serverItems;
    NSMutableArray *m_downloadingItems;
    NSMutableArray *m_cancelingItems;
    NSMutableDictionary *m_downloadTaskBook;
    NSString *m_nsCachePathString;
    UIImage *m_ocacheImage;
    struct CGRect m_cacheRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_cancelingItems; // @synthesize m_cancelingItems;
@property(retain, nonatomic) NSMutableArray *m_downloadingItems; // @synthesize m_downloadingItems;
@property(retain, nonatomic) NSMutableArray *m_serverItems; // @synthesize m_serverItems;
@property(retain, nonatomic) ChatBackgroundSettings *m_settings; // @synthesize m_settings;
@property(retain, nonatomic) NSMutableDictionary *m_downloadTaskBook; // @synthesize m_downloadTaskBook;
- (id)usernameKv;
- (void)removeCancelingItem:(id)arg1;
- (void)addCancelingItem:(id)arg1;
- (void)removeDownloadingItem:(id)arg1;
- (void)addDownloadingItem:(id)arg1;
- (void)removeServerItem:(id)arg1;
- (void)addServerItem:(id)arg1;
- (void)removeAllCustomImages;
- (void)onPackageCancelFinish:(id)arg1;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageListUpdated:(id)arg1;
- (void)cancelItem:(id)arg1;
- (void)downloadItem:(id)arg1 forUsername:(id)arg2;
- (id)getAllItemsList;
- (void)tryUpdateListFromServer;
- (void)updateListenerData;
- (id)getChatBackgroundImagePathForUser:(id)arg1;
- (_Bool)isBkPhotoExistInNewPath:(id)arg1;
- (id)customImageNameFor:(id)arg1;
- (void)replaceOrInsertCustomImage:(id)arg1 andUsername:(id)arg2;
- (void)addBgMaskToImageView:(id)arg1;
- (id)getChatBackgroundViewForUser:(id)arg1;
- (id)getThumbImageViewForCID:(id)arg1;
- (id)imageInPath:(id)arg1;
- (void)resetAllPreferece;
- (_Bool)setBackgroundPreferenceByCustomImage:(id)arg1 forUsername:(id)arg2 notify:(_Bool)arg3;
- (_Bool)setBackgroundPreferenceByCustomImage:(id)arg1 forUsername:(id)arg2;
- (void)setBackgroundPreference:(id)arg1 forUsername:(id)arg2;
- (id)getBackgroundPreferenceForUsername:(id)arg1;
- (void)saveUserChatBackgroundSetting;
- (void)loadUserChatBackgroundSetting;
- (_Bool)unPackChatBackgroundPackToDir;
- (_Bool)unPackChatBackgroundPackIfNotExist;
- (_Bool)installChatUpdatePack:(id)arg1;
- (_Bool)isChatBKZipInBundle;
- (void)loadAllItems;
- (_Bool)createDirIfNotExist:(id)arg1;
- (id)getDownloadFinishedUsernameForCID:(long long)arg1;
- (void)setDownadFinishedCID:(long long)arg1 forUsername:(id)arg2;
- (void)onServiceMemoryWarning;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

