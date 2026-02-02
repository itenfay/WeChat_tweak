//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MemoryMappedKV, NewLifePrefetchConf;

@interface NewLifeMMKVKeyModel : NSObject
{
    MemoryMappedKV *_internalKV;
    NewLifePrefetchConf *_prefetchConf;
    unsigned long long _userAttrFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long userAttrFlag; // @synthesize userAttrFlag=_userAttrFlag;
@property(retain, nonatomic) NewLifePrefetchConf *prefetchConf; // @synthesize prefetchConf=_prefetchConf;
@property(retain, nonatomic) MemoryMappedKV *internalKV; // @synthesize internalKV=_internalKV;
- (_Bool)enableOperateDiscoverSearch;
- (_Bool)resetJumpTopStoryTime;
- (void)setHasMigratedPictureLocation;
- (_Bool)hasMigratedPictureLocationOnce;
- (void)setShownPostAssistPermissionRequest;
- (_Bool)hasShownPostAssistPermissionRequest;
- (_Bool)hasShowedPictureLocationPermissionReq;
- (_Bool)setLastPrefetchTime:(double)arg1 type:(unsigned long long)arg2;
- (unsigned int)lastPrefetchTime:(unsigned long long)arg1;
- (_Bool)setPrefetchConfigArray:(id)arg1;
- (id)prefetchConfigArray;
- (long long)predownloadFirstImageFeedCount;
- (void)setLastBufferForNewLifeSync:(id)arg1;
- (id)lastBufferForNewLifeSync;
- (void)setSyncBufferForNewLifeSync:(id)arg1;
- (id)syncBufferForNewLifeSync;
- (_Bool)setUserProfilePageCache:(id)arg1 username:(id)arg2;
- (id)userProfilePageCacheForUsername:(id)arg1;
- (_Bool)isNewLifePostGuideByTimelineActionSheetExptOpened;
- (_Bool)isNewLifePostGuideByTimelineDetailExptOpened;
- (_Bool)isNewLifePostGuideByTimelineStreamExptOpened;
- (_Bool)setIsHobbySelected:(_Bool)arg1;
- (_Bool)isHobbySelected;
- (_Bool)setEnableUseFinderContact:(_Bool)arg1;
- (_Bool)enableUseFinderContact;
- (id)getNewLifeUserEntryRule;
- (_Bool)updateNewLifeUserPrepare:(unsigned long long)arg1 entryRule:(id)arg2;
- (_Bool)updateNewLifePrefetchConfig:(id)arg1;
- (id)init;

@end

