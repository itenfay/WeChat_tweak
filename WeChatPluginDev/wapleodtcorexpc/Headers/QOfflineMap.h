//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSCache, NSMutableArray, NSString, QConfigManager, QConfigPreference, QOfflineMapDownloader;

@interface QOfflineMap : NSObject
{
    NSCache *_offlineConfigCache;
    NSString *_dirNew;
    NSString *_domain;
    QConfigManager *_configManager;
    QConfigPreference *_configPreference;
    NSString *_offlineConfigPath;
    NSMutableArray *_itemArray;
    QOfflineMapDownloader *_downloader;
}

+ (_Bool)offlineMapEnable;
+ (id)sharedOfflineMap;
- (void).cxx_destruct;
@property(retain, nonatomic) QOfflineMapDownloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(copy, nonatomic) NSString *offlineConfigPath; // @synthesize offlineConfigPath=_offlineConfigPath;
@property(retain, nonatomic) QConfigPreference *configPreference; // @synthesize configPreference=_configPreference;
@property(retain, nonatomic) QConfigManager *configManager; // @synthesize configManager=_configManager;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *dirNew; // @synthesize dirNew=_dirNew;
@property(retain, nonatomic) NSCache *offlineConfigCache; // @synthesize offlineConfigCache=_offlineConfigCache;
- (void)setOfflineMapStatus:(_Bool)arg1;
- (id)createQOfflineItem:(id)arg1 withInfo:(id)arg2;
- (id)createKCOfflineItem:(id)arg1 withInfo:(id)arg2;
- (id)assembleVersionDictionary:(id)arg1;
- (void)updateLocalVersionPlist:(id)arg1 withDictionary:(id)arg2;
- (void)createOfflineMapCacheDirectory;
- (id)getOfflineItemLocalVersionPlist;
- (id)getCDNConfigCityList;
- (id)getOfflineMapConfigPath:(id)arg1;
- (id)getOfflineMapCitiesDictionary;
- (id)getOfflineItemDownloadURL:(id)arg1;
- (id)getOfflineDisplayName:(id)arg1 withInfoDict:(id)arg2;
- (id)getCityListArray:(id)arg1 withDictionary:(id)arg2;
- (id)getConfigVersionDict;
- (long long)compareVersionNumber:(id)arg1 withLocalVersionDict:(id)arg2;
- (void)createOfflineCitiesArray;
- (void)reloadItems:(CDUnknownBlockType)arg1;
- (void)deleteItem:(id)arg1;
@property(readonly, nonatomic) NSArray *downloadingItems;
- (void)cancelDownload:(id)arg1;
@property(readonly, nonatomic) NSArray *items;
- (void)downloadItem:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setUpConfigManager;
- (id)init;

@end

