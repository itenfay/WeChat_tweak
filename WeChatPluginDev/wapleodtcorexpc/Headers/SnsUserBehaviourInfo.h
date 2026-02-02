//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface SnsUserBehaviourInfo : NSObject
{
    struct unordered_map<SnsUserBehaviourInfoPageType, unsigned int, std::hash<SnsUserBehaviourInfoPageType>, std::equal_to<SnsUserBehaviourInfoPageType>, std::allocator<std::pair<const SnsUserBehaviourInfoPageType, unsigned int>>> _pageEnterTimeRecoredMap;
    struct unordered_map<SnsUserBehaviourInfoPageType, unsigned int, std::hash<SnsUserBehaviourInfoPageType>, std::equal_to<SnsUserBehaviourInfoPageType>, std::allocator<std::pair<const SnsUserBehaviourInfoPageType, unsigned int>>> _pageStayTimeRecoredMap;
    _Bool _starCollectExposeFlag;
    unsigned int _source;
    unsigned int _isFriend;
    unsigned int _ownerSetting;
    unsigned int _ownerPrivacySetting;
    int _sessionid;
    unsigned int _albumEntrancePicCount;
    unsigned int _albumExplodeFeedCount;
    unsigned int _albumClickFeedCount;
    unsigned int _albumClickFeedList;
    unsigned int _albumTimelineStayTime;
    unsigned int _albumTimeDragCount;
    unsigned int _likeBanner;
    unsigned int _galleryBrowseFeedCount;
    unsigned int _galleryBrowsePictureCount;
    unsigned int _galleryStayTime;
    unsigned int _feedDetailPageBrowseFeedCount;
    unsigned int _feedDetailPageBrowsePictureCount;
    unsigned int _feedDetailPageStayTime;
    unsigned int _totalStayTime;
    unsigned int _albumBannerFlag;
    unsigned int _signatureFlag;
    unsigned int _togetherBrowseFeedCount;
    unsigned int _togetherBrowseTime;
    NSString *_ownerUsername;
    NSString *_albumClickFeedListStr;
    long long _togetherEntranceState;
    long long _browseSceneType;
    NSString *_albumSessionID;
    NSMutableSet *_explodeFeedCountSet;
    NSMutableSet *_clickFeedSet;
    NSMutableSet *_galleryBrowseFeedSet;
    NSMutableSet *_galleryBrowseMediaSet;
    NSMutableSet *_detailPageBrowsePicSet;
    NSMutableSet *_togetherBrowseFeedIDSet;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *togetherBrowseFeedIDSet; // @synthesize togetherBrowseFeedIDSet=_togetherBrowseFeedIDSet;
@property(retain, nonatomic) NSMutableSet *detailPageBrowsePicSet; // @synthesize detailPageBrowsePicSet=_detailPageBrowsePicSet;
@property(retain, nonatomic) NSMutableSet *galleryBrowseMediaSet; // @synthesize galleryBrowseMediaSet=_galleryBrowseMediaSet;
@property(retain, nonatomic) NSMutableSet *galleryBrowseFeedSet; // @synthesize galleryBrowseFeedSet=_galleryBrowseFeedSet;
@property(retain, nonatomic) NSMutableSet *clickFeedSet; // @synthesize clickFeedSet=_clickFeedSet;
@property(retain, nonatomic) NSMutableSet *explodeFeedCountSet; // @synthesize explodeFeedCountSet=_explodeFeedCountSet;
@property(nonatomic) _Bool starCollectExposeFlag; // @synthesize starCollectExposeFlag=_starCollectExposeFlag;
@property(retain, nonatomic) NSString *albumSessionID; // @synthesize albumSessionID=_albumSessionID;
@property(nonatomic) long long browseSceneType; // @synthesize browseSceneType=_browseSceneType;
@property(nonatomic) long long togetherEntranceState; // @synthesize togetherEntranceState=_togetherEntranceState;
@property(nonatomic) unsigned int togetherBrowseTime; // @synthesize togetherBrowseTime=_togetherBrowseTime;
@property(nonatomic) unsigned int togetherBrowseFeedCount; // @synthesize togetherBrowseFeedCount=_togetherBrowseFeedCount;
@property(nonatomic) unsigned int signatureFlag; // @synthesize signatureFlag=_signatureFlag;
@property(nonatomic) unsigned int albumBannerFlag; // @synthesize albumBannerFlag=_albumBannerFlag;
@property(retain, nonatomic) NSString *albumClickFeedListStr; // @synthesize albumClickFeedListStr=_albumClickFeedListStr;
@property(nonatomic) unsigned int totalStayTime; // @synthesize totalStayTime=_totalStayTime;
@property(nonatomic) unsigned int feedDetailPageStayTime; // @synthesize feedDetailPageStayTime=_feedDetailPageStayTime;
@property(nonatomic) unsigned int feedDetailPageBrowsePictureCount; // @synthesize feedDetailPageBrowsePictureCount=_feedDetailPageBrowsePictureCount;
@property(nonatomic) unsigned int feedDetailPageBrowseFeedCount; // @synthesize feedDetailPageBrowseFeedCount=_feedDetailPageBrowseFeedCount;
@property(nonatomic) unsigned int galleryStayTime; // @synthesize galleryStayTime=_galleryStayTime;
@property(nonatomic) unsigned int galleryBrowsePictureCount; // @synthesize galleryBrowsePictureCount=_galleryBrowsePictureCount;
@property(nonatomic) unsigned int galleryBrowseFeedCount; // @synthesize galleryBrowseFeedCount=_galleryBrowseFeedCount;
@property(nonatomic) unsigned int likeBanner; // @synthesize likeBanner=_likeBanner;
@property(nonatomic) unsigned int albumTimeDragCount; // @synthesize albumTimeDragCount=_albumTimeDragCount;
@property(nonatomic) unsigned int albumTimelineStayTime; // @synthesize albumTimelineStayTime=_albumTimelineStayTime;
@property(nonatomic) unsigned int albumClickFeedList; // @synthesize albumClickFeedList=_albumClickFeedList;
@property(nonatomic) unsigned int albumClickFeedCount; // @synthesize albumClickFeedCount=_albumClickFeedCount;
@property(nonatomic) unsigned int albumExplodeFeedCount; // @synthesize albumExplodeFeedCount=_albumExplodeFeedCount;
@property(nonatomic) unsigned int albumEntrancePicCount; // @synthesize albumEntrancePicCount=_albumEntrancePicCount;
@property(nonatomic) int sessionid; // @synthesize sessionid=_sessionid;
@property(nonatomic) unsigned int ownerPrivacySetting; // @synthesize ownerPrivacySetting=_ownerPrivacySetting;
@property(nonatomic) unsigned int ownerSetting; // @synthesize ownerSetting=_ownerSetting;
@property(nonatomic) unsigned int isFriend; // @synthesize isFriend=_isFriend;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *ownerUsername; // @synthesize ownerUsername=_ownerUsername;
- (id)logStr;
- (void)doReport;
- (unsigned int)protocolID;
- (id)subSession;
- (unsigned int)safeGetStayTimeOfPage:(int)arg1;
- (void)addTogetherBrowseTime:(double)arg1;
- (void)recordTogetherBrowseFeedIDs:(id)arg1;
- (void)onSnsUserBehaviourPageDisappear:(int)arg1;
- (void)onSnsUserBehaviourPageAppear:(int)arg1;
- (void)incDetailPageBrowseFeedCount;
- (void)recordDetailPageBrowseMedia:(id)arg1;
- (void)recordGallery:(id)arg1 mediaId:(id)arg2;
- (void)recordClickFeed:(id)arg1;
- (void)incAlbumExplodeFeed:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

