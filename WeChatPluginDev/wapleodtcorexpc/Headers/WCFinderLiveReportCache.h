//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCFinderLiveReportCache : NSObject
{
    _Bool _sIsFloat;
    NSString *_sLastEnterRoomCommentScene;
    NSString *_sLastEnterRoomScenenote;
    long long _sLastClickEnterIconType;
    NSString *_sLastClickCommentScene;
    unsigned long long _sLastClickFeedIndex;
    NSString *_sLastClickFeedId;
    NSString *_sLastClickSessionBuffer;
    long long _sLastShareClickType;
    NSString *_sLastShareUserName;
    NSString *_sLastShareTimelineFeedId;
    unsigned long long _sLastEnterEntryScene;
    NSString *_sLastClickChannelExtra;
    NSString *_sLastRefPageId;
    NSString *_sLastEnterFromScene;
    NSString *_sOriginEnterFromScene;
    long long _sPageType;
    unsigned long long _sEnterSessionId;
    NSDictionary *_sReportParamsDic;
    unsigned long long _identityPrivacySettingFromSrc;
    unsigned long long _identityPrivacySettingEnterTS;
}

+ (id)sharedReportCache;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long identityPrivacySettingEnterTS; // @synthesize identityPrivacySettingEnterTS=_identityPrivacySettingEnterTS;
@property(nonatomic) unsigned long long identityPrivacySettingFromSrc; // @synthesize identityPrivacySettingFromSrc=_identityPrivacySettingFromSrc;
@property(copy, nonatomic) NSDictionary *sReportParamsDic; // @synthesize sReportParamsDic=_sReportParamsDic;
@property(nonatomic) unsigned long long sEnterSessionId; // @synthesize sEnterSessionId=_sEnterSessionId;
@property(nonatomic) long long sPageType; // @synthesize sPageType=_sPageType;
@property(nonatomic) _Bool sIsFloat; // @synthesize sIsFloat=_sIsFloat;
@property(copy, nonatomic) NSString *sOriginEnterFromScene; // @synthesize sOriginEnterFromScene=_sOriginEnterFromScene;
@property(copy, nonatomic) NSString *sLastEnterFromScene; // @synthesize sLastEnterFromScene=_sLastEnterFromScene;
@property(retain, nonatomic) NSString *sLastRefPageId; // @synthesize sLastRefPageId=_sLastRefPageId;
@property(retain, nonatomic) NSString *sLastClickChannelExtra; // @synthesize sLastClickChannelExtra=_sLastClickChannelExtra;
@property(nonatomic) unsigned long long sLastEnterEntryScene; // @synthesize sLastEnterEntryScene=_sLastEnterEntryScene;
@property(retain, nonatomic) NSString *sLastShareTimelineFeedId; // @synthesize sLastShareTimelineFeedId=_sLastShareTimelineFeedId;
@property(retain, nonatomic) NSString *sLastShareUserName; // @synthesize sLastShareUserName=_sLastShareUserName;
@property(nonatomic) long long sLastShareClickType; // @synthesize sLastShareClickType=_sLastShareClickType;
@property(retain, nonatomic) NSString *sLastClickSessionBuffer; // @synthesize sLastClickSessionBuffer=_sLastClickSessionBuffer;
@property(retain, nonatomic) NSString *sLastClickFeedId; // @synthesize sLastClickFeedId=_sLastClickFeedId;
@property(nonatomic) unsigned long long sLastClickFeedIndex; // @synthesize sLastClickFeedIndex=_sLastClickFeedIndex;
@property(retain, nonatomic) NSString *sLastClickCommentScene; // @synthesize sLastClickCommentScene=_sLastClickCommentScene;
@property(nonatomic) long long sLastClickEnterIconType; // @synthesize sLastClickEnterIconType=_sLastClickEnterIconType;
@property(retain, nonatomic) NSString *sLastEnterRoomScenenote; // @synthesize sLastEnterRoomScenenote=_sLastEnterRoomScenenote;
@property(retain, nonatomic) NSString *sLastEnterRoomCommentScene; // @synthesize sLastEnterRoomCommentScene=_sLastEnterRoomCommentScene;
- (void)setLastIdentityPrivacySettingTS:(unsigned long long)arg1;
- (unsigned long long)getLastIdentityPrivacySettingTS;
- (void)setLastIdentityPrivacySettingFromSrc:(unsigned long long)arg1;
- (unsigned long long)getLastIdentityPrivacySettingFromSrc;
- (_Bool)getIsLiveScroll;
- (id)getReportParamsDic:(_Bool)arg1;
- (void)setReportParamsDic:(id)arg1;
- (void)resetLastClickChannelExtra;
- (void)resetEnterFromScene;
- (void)cleanCacheExitLive;
- (unsigned long long)getEnterSessionId;
- (void)setEnterSessionId:(unsigned long long)arg1;
- (long long)getLivePageType;
- (void)setLivePageType:(long long)arg1;
- (_Bool)getIsFloat;
- (void)setIsFloat:(_Bool)arg1;
- (void)setLastRefPageId:(id)arg1;
- (id)getLastRefPageId;
- (void)setLastClickChannelExtra:(id)arg1;
- (id)getLastClickChannelExtra;
- (void)setLastEnterEntryScene:(unsigned long long)arg1;
- (unsigned long long)getLastEnterEntryScene;
- (void)setLastShareTimelineFeedId:(id)arg1;
- (id)getLastShareTimelineFeedId;
- (void)setLastShareUserName:(id)arg1;
- (id)getLastShareUserName;
- (void)setLastShareClickType:(long long)arg1;
- (long long)getLastShareClickType;
- (void)setLastClickSessionBuffer:(id)arg1;
- (id)getLastClickSessionBuffer;
- (void)setLastClickFeedId:(id)arg1;
- (id)getLastClickFeedId;
- (void)setLastClickFeedIndex:(unsigned long long)arg1;
- (unsigned long long)getLastClickFeedIndex;
- (id)getOriginEnterFromScene;
- (id)getLastEnterFromScene;
- (void)setLastClickCommentScene:(id)arg1;
- (id)getLastClickCommentScene;
- (void)setLastClickEnterIconType:(long long)arg1;
- (long long)getLastClickEnterIconType;
- (void)setLastEnterRoomCommentScene:(id)arg1;
- (id)getLastEnterRoomCommentScene;
- (void)setLastEnterRoomScenenote:(id)arg1;
- (id)getLastEnterRoomScenenote;

@end

