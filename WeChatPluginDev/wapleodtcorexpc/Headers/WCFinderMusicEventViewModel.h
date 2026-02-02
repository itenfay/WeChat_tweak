//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderVideoTemplateInfo, ForwardMessageLogicController, MMListenLikeResponse, MusicRelatedRecommendInfo, NSArray, NSString, RecommendedMusicInfo, WCFinderTopicInfo, WCFinderTopicRouteParams;
@protocol WCFinderMusicEventViewModelDelegate;

@interface WCFinderMusicEventViewModel : NSObject
{
    _Bool _queryContinueFlag;
    int _topicType;
    int _tabType;
    int _getTopicInfoFlag;
    id <WCFinderMusicEventViewModelDelegate> _delegate;
    WCFinderTopicInfo *_topicInfo;
    unsigned long long _refreshTime;
    unsigned long long _musicTopicId;
    NSString *_patTopicStr;
    NSString *_encryptedTopicId;
    NSArray *_tabInfoArray;
    unsigned long long _state;
    double _menuExpTime;
    MMListenLikeResponse *_likeFeedResp;
    RecommendedMusicInfo *_patMusicInfo;
    FinderVideoTemplateInfo *_videoTemplateInfo;
    NSString *_latestQueryText;
    unsigned long long _topicTotalCount;
    ForwardMessageLogicController *_forwardLogic;
    WCFinderTopicRouteParams *_params;
    MusicRelatedRecommendInfo *_relatedMusicInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int getTopicInfoFlag; // @synthesize getTopicInfoFlag=_getTopicInfoFlag;
@property(retain, nonatomic) MusicRelatedRecommendInfo *relatedMusicInfo; // @synthesize relatedMusicInfo=_relatedMusicInfo;
@property(retain, nonatomic) WCFinderTopicRouteParams *params; // @synthesize params=_params;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(nonatomic) unsigned long long topicTotalCount; // @synthesize topicTotalCount=_topicTotalCount;
@property(nonatomic) _Bool queryContinueFlag; // @synthesize queryContinueFlag=_queryContinueFlag;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(retain, nonatomic) FinderVideoTemplateInfo *videoTemplateInfo; // @synthesize videoTemplateInfo=_videoTemplateInfo;
@property(retain, nonatomic) RecommendedMusicInfo *patMusicInfo; // @synthesize patMusicInfo=_patMusicInfo;
@property(retain, nonatomic) MMListenLikeResponse *likeFeedResp; // @synthesize likeFeedResp=_likeFeedResp;
@property(nonatomic) double menuExpTime; // @synthesize menuExpTime=_menuExpTime;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSArray *tabInfoArray; // @synthesize tabInfoArray=_tabInfoArray;
@property(copy, nonatomic) NSString *encryptedTopicId; // @synthesize encryptedTopicId=_encryptedTopicId;
@property(copy, nonatomic) NSString *patTopicStr; // @synthesize patTopicStr=_patTopicStr;
@property(nonatomic) unsigned long long musicTopicId; // @synthesize musicTopicId=_musicTopicId;
@property(readonly, nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) int topicType; // @synthesize topicType=_topicType;
@property(readonly, nonatomic) WCFinderTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(nonatomic) __weak id <WCFinderMusicEventViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)bgmInfo;
- (id)getMusicLyricsWording;
- (void)updateLikeState:(_Bool)arg1;
- (void)likeFeed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (int)feedViewControllerScene;
- (id)getTopicsArray;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (id)eventTabInfoWithType:(unsigned long long)arg1;
- (long long)indexOfTabType:(int)arg1;
- (id)eventTabInfoAtIndex:(unsigned long long)arg1;
- (id)defaultTabInfoArray;
- (void)updateTabInfoArray;
- (void)requestEventTabListAndRelatedMusics;
- (unsigned long long)genFinderShareItemType;
- (long long)genShareMomentType;
- (void)shareToMoment:(id)arg1;
- (void)shareToFriend:(id)arg1;
- (id)genReportDict;
- (unsigned long long)getTopicTotalCount;
- (id)getMusicLyricsWording:(id)arg1;
- (void)updatePatMusicInfoByInfo:(id)arg1;
- (id)getPatPostMusicInfo;
- (void)updateMusicTemplateInfo;
- (void)setTopicInfo:(id)arg1;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

