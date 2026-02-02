//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLocation, FinderTopicBgmInfo, ForwardMessageLogicController, NSArray, NSString, WCFinderTopicInfo;
@protocol WCFinderEventViewModelDelegate;

@interface WCFinderEventViewModel : NSObject
{
    int _topicType;
    int _fromType;
    id <WCFinderEventViewModelDelegate> _delegate;
    NSString *_topicDetailLocation;
    WCFinderTopicInfo *_topicInfo;
    unsigned long long _refreshTime;
    FinderTopicBgmInfo *_bgmInfo;
    unsigned long long _eventTopicId;
    NSString *_encryptedTopicId;
    NSArray *_tabInfoArray;
    unsigned long long _state;
    double _menuExpTime;
    NSString *_refObjectid;
    NSString *_latestQueryText;
    unsigned long long _topicTotalCount;
    ForwardMessageLogicController *_forwardLogic;
    FinderLocation *_location;
    unsigned long long _patMusicPermission;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long patMusicPermission; // @synthesize patMusicPermission=_patMusicPermission;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(nonatomic) unsigned long long topicTotalCount; // @synthesize topicTotalCount=_topicTotalCount;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(copy, nonatomic) NSString *refObjectid; // @synthesize refObjectid=_refObjectid;
@property(nonatomic) double menuExpTime; // @synthesize menuExpTime=_menuExpTime;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSArray *tabInfoArray; // @synthesize tabInfoArray=_tabInfoArray;
@property(copy, nonatomic) NSString *encryptedTopicId; // @synthesize encryptedTopicId=_encryptedTopicId;
@property(nonatomic) unsigned long long eventTopicId; // @synthesize eventTopicId=_eventTopicId;
@property(retain, nonatomic) FinderTopicBgmInfo *bgmInfo; // @synthesize bgmInfo=_bgmInfo;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) int topicType; // @synthesize topicType=_topicType;
@property(readonly, nonatomic) WCFinderTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(copy, nonatomic) NSString *topicDetailLocation; // @synthesize topicDetailLocation=_topicDetailLocation;
@property(nonatomic) __weak id <WCFinderEventViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (int)feedViewControllerScene;
- (id)getTopicsArray;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (unsigned long long)getReportMusicType;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (id)templateID;
- (unsigned long long)templateType;
- (unsigned int)videoTemplatePermittedPublishMethodType;
- (_Bool)hasVideoTemplateEntrance;
- (id)eventTabInfoWithType:(unsigned long long)arg1;
- (long long)indexOfTabType:(int)arg1;
- (id)eventTabInfoAtIndex:(unsigned long long)arg1;
- (void)closeEvent;
- (id)defaultTabInfoArray;
- (void)updateTabInfoArray;
- (void)requestEventTabList;
- (id)getMusicLyricsWording;
- (void)shareToMoment:(id)arg1;
- (void)shareToFriend:(id)arg1;
- (unsigned long long)getTopicTotalCount;
- (void)resetSearchStatus;
- (id)genTopicPageTagTitle;
- (id)streamReportPageTag;
- (void)setTopicInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

