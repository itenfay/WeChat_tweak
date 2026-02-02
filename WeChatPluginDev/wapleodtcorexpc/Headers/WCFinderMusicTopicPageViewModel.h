//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderEventInfo, FinderMusicTopicInfo, FinderTopicBgmInfo, NSData, NSMutableArray, NSMutableSet, NSString, WCFinderEventTabInfo, WCFinderMusicTopicDataProvider, WCFinderTopicInfo;
@protocol WCFinderMusicTopicPageViewModelDelegate;

@interface WCFinderMusicTopicPageViewModel : NSObject
{
    _Bool _shouldShowRingtoneEntry;
    _Bool _continueFlag;
    int _tabType;
    int _commentScene;
    int _topicType;
    int _fromType;
    int _getTopicInfoFlag;
    id <WCFinderMusicTopicPageViewModelDelegate> _delegate;
    NSMutableArray *_contentVMArray;
    NSString *_topicTitle;
    WCFinderEventTabInfo *_eventTabInfo;
    unsigned long long _state;
    WCFinderMusicTopicDataProvider *_dataProvider;
    FinderMusicTopicInfo *_musicInfo;
    unsigned long long _musicTopicId;
    NSString *_encryptedTopicId;
    NSString *_refObjectId;
    NSString *_latestRequestID;
    WCFinderTopicInfo *_topicInfo;
    FinderTopicBgmInfo *_bgmInfo;
    FinderEventInfo *_eventInfo;
    NSData *_lastBuffer;
    NSMutableSet *_feedIdSet;
    NSData *_byPassInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int getTopicInfoFlag; // @synthesize getTopicInfoFlag=_getTopicInfoFlag;
@property(retain, nonatomic) NSData *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(retain, nonatomic) NSMutableSet *feedIdSet; // @synthesize feedIdSet=_feedIdSet;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) FinderEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(retain, nonatomic) FinderTopicBgmInfo *bgmInfo; // @synthesize bgmInfo=_bgmInfo;
@property(retain, nonatomic) WCFinderTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(copy, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(copy, nonatomic) NSString *refObjectId; // @synthesize refObjectId=_refObjectId;
@property(copy, nonatomic) NSString *encryptedTopicId; // @synthesize encryptedTopicId=_encryptedTopicId;
@property(nonatomic) unsigned long long musicTopicId; // @synthesize musicTopicId=_musicTopicId;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(nonatomic) int topicType; // @synthesize topicType=_topicType;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) FinderMusicTopicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) WCFinderMusicTopicDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) _Bool shouldShowRingtoneEntry; // @synthesize shouldShowRingtoneEntry=_shouldShowRingtoneEntry;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) WCFinderEventTabInfo *eventTabInfo; // @synthesize eventTabInfo=_eventTabInfo;
@property(copy, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(retain, nonatomic) NSMutableArray *contentVMArray; // @synthesize contentVMArray=_contentVMArray;
@property(nonatomic) __weak id <WCFinderMusicTopicPageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItemDelete:(id)arg1;
- (long long)itemIndexForTid:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)fakeInsertPostEventDataItem:(id)arg1;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (void)removeFeedWithTid:(id)arg1;
- (void)updateState;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (unsigned long long)sortType;
- (id)eventIdStr;
- (id)generateTopicListDetailViewModel;
- (void)requestNextPageData;
- (void)requestFirstPageData;
- (id)initWithTopicParams:(id)arg1 eventTabInfo:(id)arg2 commentScene:(int)arg3 byPassInfo:(id)arg4 musicInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

