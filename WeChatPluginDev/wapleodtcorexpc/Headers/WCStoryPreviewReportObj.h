//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSIndexPath, NSMutableArray, NSMutableSet, NSNumber, NSString, WCStoryDataItem;

@interface WCStoryPreviewReportObj : NSObject
{
    int _netType;
    unsigned long long _previewEnterScene;
    NSNumber *_profileSource;
    NSString *_contactUserName;
    NSNumber *_hasUnreadStoryTips;
    NSNumber *_waitPlayFriendCount;
    WCStoryDataItem *_enterDataItem;
    long long _unreadMessageCount;
    long long _interactiveUserCount;
    unsigned long long _enterTime;
    NSString *_exposeViewId;
    NSMutableSet *_allUserNameSet;
    NSMutableSet *_mmContactUserNameSet;
    NSMutableSet *_allTidSet;
    NSMutableSet *_mmContactTidSet;
    unsigned long long _totalBrowserCount;
    unsigned long long _mmContactBrowserCount;
    NSString *_lastBrowserTid;
    NSMutableArray *_actionTraceArray;
    NSIndexPath *_currentIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) NSMutableArray *actionTraceArray; // @synthesize actionTraceArray=_actionTraceArray;
@property(retain, nonatomic) NSString *lastBrowserTid; // @synthesize lastBrowserTid=_lastBrowserTid;
@property(nonatomic) unsigned long long mmContactBrowserCount; // @synthesize mmContactBrowserCount=_mmContactBrowserCount;
@property(nonatomic) unsigned long long totalBrowserCount; // @synthesize totalBrowserCount=_totalBrowserCount;
@property(retain, nonatomic) NSMutableSet *mmContactTidSet; // @synthesize mmContactTidSet=_mmContactTidSet;
@property(retain, nonatomic) NSMutableSet *allTidSet; // @synthesize allTidSet=_allTidSet;
@property(retain, nonatomic) NSMutableSet *mmContactUserNameSet; // @synthesize mmContactUserNameSet=_mmContactUserNameSet;
@property(retain, nonatomic) NSMutableSet *allUserNameSet; // @synthesize allUserNameSet=_allUserNameSet;
@property(copy, nonatomic) NSString *exposeViewId; // @synthesize exposeViewId=_exposeViewId;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) int netType; // @synthesize netType=_netType;
@property(nonatomic) long long interactiveUserCount; // @synthesize interactiveUserCount=_interactiveUserCount;
@property(nonatomic) long long unreadMessageCount; // @synthesize unreadMessageCount=_unreadMessageCount;
@property(retain, nonatomic) WCStoryDataItem *enterDataItem; // @synthesize enterDataItem=_enterDataItem;
@property(retain, nonatomic) NSNumber *waitPlayFriendCount; // @synthesize waitPlayFriendCount=_waitPlayFriendCount;
@property(retain, nonatomic) NSNumber *hasUnreadStoryTips; // @synthesize hasUnreadStoryTips=_hasUnreadStoryTips;
@property(retain, nonatomic) NSString *contactUserName; // @synthesize contactUserName=_contactUserName;
@property(retain, nonatomic) NSNumber *profileSource; // @synthesize profileSource=_profileSource;
@property(nonatomic) unsigned long long previewEnterScene; // @synthesize previewEnterScene=_previewEnterScene;
- (id)arrayToJSON:(id)arg1;
- (void)doActionTraceWithType:(unsigned long long)arg1;
- (void)reportDoubleTapHeadViewWithHasEnterPreview:(_Bool)arg1;
- (void)reportExitPreview;
- (void)reportSingleBrowserAction:(id)arg1 userName:(id)arg2 isMMContact:(_Bool)arg3;
- (void)browserStoryWithTid:(id)arg1 userName:(id)arg2 isMMContact:(_Bool)arg3 lastIndexPath:(id)arg4;
- (void)enterPreview;
- (int)contactType;
- (_Bool)isDoubleTapScene;
- (id)init;
- (id)previewReportObjForReEnter;

@end

