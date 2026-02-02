//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLocation, FinderTopicBgmInfo, ForwardMessageLogicController, NSArray, NSData, NSString, WCFinderTopicInfo, WCFinderTopicRouteParams;
@protocol WCFinderTopicViewModelDelegate;

@interface WCFinderTopicViewModel : NSObject
{
    _Bool _queryContinueFlag;
    int _topicType;
    int _fromType;
    id <WCFinderTopicViewModelDelegate> _delegate;
    WCFinderTopicRouteParams *_params;
    NSString *_topicDetailLocation;
    WCFinderTopicInfo *_topicInfo;
    unsigned long long _refreshTime;
    FinderTopicBgmInfo *_bgmInfo;
    unsigned long long _eventTopicId;
    NSString *_encryptedTopicId;
    NSArray *_tabInfoArray;
    unsigned long long _defaultIndex;
    unsigned long long _state;
    double _menuExpTime;
    NSString *_latestQueryText;
    NSString *_latestRequestID;
    NSData *_lastBuffer;
    unsigned long long _topicTotalCount;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_refObjectid;
    ForwardMessageLogicController *_forwardLogic;
    FinderLocation *_location;
    unsigned long long _patMusicPermission;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long patMusicPermission; // @synthesize patMusicPermission=_patMusicPermission;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(copy, nonatomic) NSString *refObjectid; // @synthesize refObjectid=_refObjectid;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(nonatomic) unsigned long long topicTotalCount; // @synthesize topicTotalCount=_topicTotalCount;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool queryContinueFlag; // @synthesize queryContinueFlag=_queryContinueFlag;
@property(retain, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(nonatomic) double menuExpTime; // @synthesize menuExpTime=_menuExpTime;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(retain, nonatomic) NSArray *tabInfoArray; // @synthesize tabInfoArray=_tabInfoArray;
@property(copy, nonatomic) NSString *encryptedTopicId; // @synthesize encryptedTopicId=_encryptedTopicId;
@property(nonatomic) unsigned long long eventTopicId; // @synthesize eventTopicId=_eventTopicId;
@property(retain, nonatomic) FinderTopicBgmInfo *bgmInfo; // @synthesize bgmInfo=_bgmInfo;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) int topicType; // @synthesize topicType=_topicType;
@property(retain, nonatomic) WCFinderTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(copy, nonatomic) NSString *topicDetailLocation; // @synthesize topicDetailLocation=_topicDetailLocation;
@property(retain, nonatomic) WCFinderTopicRouteParams *params; // @synthesize params=_params;
@property(nonatomic) __weak id <WCFinderTopicViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getHeaderOptionParams;
- (int)feedViewControllerScene;
- (id)getTopicsArray;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (unsigned long long)getReportMusicType;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)shareToMoment:(id)arg1;
- (void)shareToFriend:(id)arg1;
- (id)getTopicWordsTopicExt;
- (id)getTopicLocation;
- (id)getTopicTitle;
- (unsigned long long)getTopicTotalWatchCount;
- (unsigned long long)getTopicTotalCount;
- (id)getHeaderImageUrl;
- (long long)indexOfTabType:(int)arg1;
- (id)topicTabInfoWithType:(int)arg1;
- (id)topicTabInfoAtIndex:(unsigned long long)arg1;
- (id)defaultTabInfoArray;
- (void)updateTabInfoArray;
- (void)requestTopicTabList;
- (void)resetSearchStatus;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

