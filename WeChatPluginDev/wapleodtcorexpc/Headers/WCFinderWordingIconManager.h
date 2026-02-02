//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderObjectExtInfoList, NSDictionary, NSLock, NSMapTable, NSMutableDictionary, NSString, WCFinderDynamicIconFetcher, WCFinderGlobalWordingIconConfig;

@interface WCFinderWordingIconManager : NSObject
{
    _Bool _enableStoreToLocal;
    CDUnknownBlockType _downloadActionBlock;
    NSString *_currentVersion;
    NSLock *_storeLock;
    FinderObjectExtInfoList *_pendingSaveConfig;
    unsigned long long _compressLimitSize;
    long long _lastSaveTime;
    NSDictionary *_defaultWordingConfigMap;
    NSMutableDictionary *_feedContentWordingConfigMap;
    CDUnknownBlockType _serverConfigSetter;
    CDUnknownBlockType _globalConfigSetter;
    WCFinderGlobalWordingIconConfig *_globalConfig;
    WCFinderGlobalWordingIconConfig *_serverGlobalConfig;
    NSMapTable *_imageCacheMap;
    WCFinderDynamicIconFetcher *_iconFetcher;
    NSMutableDictionary *_dynamicImageMap;
    NSMutableDictionary *_dynamicKeyedImageMap;
    NSMutableDictionary *_globalItems;
    NSMutableDictionary *_dynamicPageMap;
    NSMutableDictionary *_iconUrlDefaultDic;
}

+ (void)configIconUrlDefaultDic:(id)arg1;
+ (void)configIconURLKey:(id)arg1 lightURL:(id)arg2 darkURL:(id)arg3 containerDic:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *iconUrlDefaultDic; // @synthesize iconUrlDefaultDic=_iconUrlDefaultDic;
@property(retain, nonatomic) NSMutableDictionary *dynamicPageMap; // @synthesize dynamicPageMap=_dynamicPageMap;
@property(retain, nonatomic) NSMutableDictionary *globalItems; // @synthesize globalItems=_globalItems;
@property(retain, nonatomic) NSMutableDictionary *dynamicKeyedImageMap; // @synthesize dynamicKeyedImageMap=_dynamicKeyedImageMap;
@property(retain, nonatomic) NSMutableDictionary *dynamicImageMap; // @synthesize dynamicImageMap=_dynamicImageMap;
@property(retain, nonatomic) WCFinderDynamicIconFetcher *iconFetcher; // @synthesize iconFetcher=_iconFetcher;
@property(retain, nonatomic) NSMapTable *imageCacheMap; // @synthesize imageCacheMap=_imageCacheMap;
@property(retain, nonatomic) WCFinderGlobalWordingIconConfig *serverGlobalConfig; // @synthesize serverGlobalConfig=_serverGlobalConfig;
@property(retain, nonatomic) WCFinderGlobalWordingIconConfig *globalConfig; // @synthesize globalConfig=_globalConfig;
@property(copy, nonatomic) CDUnknownBlockType globalConfigSetter; // @synthesize globalConfigSetter=_globalConfigSetter;
@property(copy, nonatomic) CDUnknownBlockType serverConfigSetter; // @synthesize serverConfigSetter=_serverConfigSetter;
@property(retain, nonatomic) NSMutableDictionary *feedContentWordingConfigMap; // @synthesize feedContentWordingConfigMap=_feedContentWordingConfigMap;
@property(retain, nonatomic) NSDictionary *defaultWordingConfigMap; // @synthesize defaultWordingConfigMap=_defaultWordingConfigMap;
@property(nonatomic) long long lastSaveTime; // @synthesize lastSaveTime=_lastSaveTime;
@property(nonatomic) unsigned long long compressLimitSize; // @synthesize compressLimitSize=_compressLimitSize;
@property(retain, nonatomic) FinderObjectExtInfoList *pendingSaveConfig; // @synthesize pendingSaveConfig=_pendingSaveConfig;
@property(retain, nonatomic) NSLock *storeLock; // @synthesize storeLock=_storeLock;
@property(retain, nonatomic) NSString *currentVersion; // @synthesize currentVersion=_currentVersion;
@property(nonatomic) _Bool enableStoreToLocal; // @synthesize enableStoreToLocal=_enableStoreToLocal;
@property(copy, nonatomic) CDUnknownBlockType downloadActionBlock; // @synthesize downloadActionBlock=_downloadActionBlock;
- (id)dynamicIdIconUrl:(long long)arg1;
- (id)getValueForObject:(id)arg1 withIdentify:(SEL)arg2 classType:(Class)arg3;
- (id)getValueForConfig:(id)arg1 withIdentify:(SEL)arg2 classType:(Class)arg3;
- (id)fetchURLIconConfigWithIdentifier:(SEL)arg1;
- (id)fetchIconConfigWithIdentifier:(SEL)arg1;
- (id)fetchDynamicIconWithIconName:(id)arg1 args:(id)arg2 defaultIconSVGName:(id)arg3;
- (id)fetchNamedIdDynamicIconWithArgs:(id)arg1;
- (id)fetchDynamicIconWithKey:(id)arg1 color:(id)arg2 size:(struct CGSize)arg3;
- (id)fetchGlobalDynamicIconWithArgs:(id)arg1;
- (id)fetchDynamicIconWithArgs:(id)arg1;
- (id)pageDynamicPageItemWithKey:(id)arg1;
- (id)pagPathWithKey:(id)arg1;
- (id)richTextWithKey:(id)arg1;
- (id)textWithKey:(id)arg1;
- (id)richTextForId:(int)arg1 contentType:(int)arg2;
- (id)wordingValueForFeedContentType:(int)arg1 wordingIdentify:(SEL)arg2;
- (id)wordingForSelector:(SEL)arg1;
- (void)loadConfigFromStorage:(CDUnknownBlockType)arg1;
- (void)saveConfig:(id)arg1;
- (void)updateWithSyncPbExtInfo:(id)arg1 fromStorage:(_Bool)arg2;
- (void)updateWithSyncPbExtInfo:(id)arg1;
- (id)defaultWordingConfigForFeedContentType:(int)arg1;
- (id)wordingConfigForFeedContentType:(int)arg1;
- (void)prepareConfigs;
- (id)initWithEnableLocal:(_Bool)arg1 compressLimitSize:(unsigned long long)arg2;
- (id)init;

@end

