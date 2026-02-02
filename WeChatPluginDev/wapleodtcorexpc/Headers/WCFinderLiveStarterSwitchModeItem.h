//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, WCFinderLiveStarterLiveModeCacheItem, WCFinderLiveStarterLiveModeSubItem;

@interface WCFinderLiveStarterSwitchModeItem : NSObject
{
    _Bool _needHideAudioLiveMode;
    _Bool _needHideKTVLiveMode;
    unsigned long long _liveMode;
    NSMutableDictionary *_liveModeDic;
    WCFinderLiveStarterLiveModeSubItem *_selectSubItem;
    WCFinderLiveStarterLiveModeSubItem *_lastSubItem;
    NSLock *_liveModeLock;
    WCFinderLiveStarterLiveModeCacheItem *_cacheItem;
}

+ (id)getLiveStarterCacheItem;
+ (id)cleanLiveStarterGameCacheItem;
- (void).cxx_destruct;
@property(nonatomic) _Bool needHideKTVLiveMode; // @synthesize needHideKTVLiveMode=_needHideKTVLiveMode;
@property(nonatomic) _Bool needHideAudioLiveMode; // @synthesize needHideAudioLiveMode=_needHideAudioLiveMode;
@property(retain, nonatomic) WCFinderLiveStarterLiveModeCacheItem *cacheItem; // @synthesize cacheItem=_cacheItem;
@property(retain, nonatomic) NSLock *liveModeLock; // @synthesize liveModeLock=_liveModeLock;
@property(retain, nonatomic) WCFinderLiveStarterLiveModeSubItem *lastSubItem; // @synthesize lastSubItem=_lastSubItem;
@property(retain, nonatomic) WCFinderLiveStarterLiveModeSubItem *selectSubItem; // @synthesize selectSubItem=_selectSubItem;
@property(retain, nonatomic) NSMutableDictionary *liveModeDic; // @synthesize liveModeDic=_liveModeDic;
@property(nonatomic) unsigned long long liveMode; // @synthesize liveMode=_liveMode;
- (id)changeLanguageWithItem:(id)arg1 liveMode:(unsigned long long)arg2 videoSubType:(unsigned long long)arg3 audioSubType:(unsigned long long)arg4;
- (id)updateLiveModeDicWithDic:(id)arg1 needHideAudioLiveMode:(_Bool)arg2 needHideKTVLiveMode:(_Bool)arg3;
- (id)getLiveModeDicWithCacheItem:(id)arg1;
- (void)cleanCurrentLiveStarterGameCacheItem;
- (void)cacheLiveStarterLiveModeSubItem;
- (id)getDirectSwitchSubItem:(id)arg1;
- (_Bool)changeVideoLandscapModeToPortraitMode;
- (_Bool)deleteModeWithLiveMode:(unsigned long long)arg1;
- (_Bool)selectModeWithLiveModeSubItem:(id)arg1;
- (_Bool)isRecordSelectedGameMode:(id)arg1;
- (_Bool)isRecordSelectedAudioMode:(id)arg1;
- (_Bool)isRecordSelectedVideoMode:(id)arg1;
- (id)getSelectSubItemWithLiveMode:(unsigned long long)arg1;
- (_Bool)isRecordSelectedLiveMode:(unsigned long long)arg1;
- (void)setUpLiveModeDicWithLiveModeCacheItem:(id)arg1 needHideAudioLiveMode:(_Bool)arg2 needHideKTVLiveMode:(_Bool)arg3;

@end

