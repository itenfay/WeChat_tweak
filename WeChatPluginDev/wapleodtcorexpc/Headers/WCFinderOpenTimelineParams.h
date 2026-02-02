//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderCommByPass, NSArray, NSData, NSMutableArray, NSString, UIViewController, WCFinderAppendTabDatasModel, WCFinderPostSessionModel, WCFinderRedDotCtrlInfo;

@interface WCFinderOpenTimelineParams : NSObject
{
    _Bool _isTriggerByUser;
    _Bool _shouldReloadTableView;
    _Bool _byPush;
    _Bool _fromWxSns;
    _Bool _showMainView;
    _Bool _fromShareType;
    _Bool _redDotShowOnFinderMentionEntry;
    _Bool _notUpdateContextId;
    int _failReturnTo;
    unsigned long long _entryScene;
    unsigned long long _entryCardType;
    UIViewController *_fromVC;
    WCFinderPostSessionModel *_postSession;
    long long _openFinderTLAppendAction;
    unsigned long long _forceJumpTabType;
    unsigned long long _guideBarObjectId;
    WCFinderRedDotCtrlInfo *_finderEntryRedDotCtrlInfo;
    WCFinderRedDotCtrlInfo *_finderEntryJumpRedDotCtrlInfo;
    NSString *_h5ByPass;
    NSString *_reportInfo;
    NSMutableArray *_topObjects;
    FinderCommByPass *_commByPass;
    unsigned long long _demotionFlag;
    CDUnknownBlockType _complete;
    NSArray *_appendContentVMArray;
    NSString *_scrollToFeedId;
    NSData *_appendCardLastBuffer;
    NSString *_taskID;
    long long _clearRedDotActionType;
    NSString *_jumpInfo;
    NSString *_tid;
    NSString *_nonceID;
    double _playPosition;
    unsigned long long _requestScene;
    unsigned long long _filterRedDotFlag;
    unsigned long long _pushLevel;
    WCFinderAppendTabDatasModel *_appendTabDatasModel;
    NSString *_redDotTipsUuid;
    WCFinderRedDotCtrlInfo *_guideRedDotCtrlInfo;
    WCFinderRedDotCtrlInfo *_finderEntranceRedDotCtrlInfo;
    unsigned long long _appendDatasScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long appendDatasScene; // @synthesize appendDatasScene=_appendDatasScene;
@property(nonatomic) _Bool notUpdateContextId; // @synthesize notUpdateContextId=_notUpdateContextId;
@property(nonatomic) _Bool redDotShowOnFinderMentionEntry; // @synthesize redDotShowOnFinderMentionEntry=_redDotShowOnFinderMentionEntry;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *finderEntranceRedDotCtrlInfo; // @synthesize finderEntranceRedDotCtrlInfo=_finderEntranceRedDotCtrlInfo;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *guideRedDotCtrlInfo; // @synthesize guideRedDotCtrlInfo=_guideRedDotCtrlInfo;
@property(copy, nonatomic) NSString *redDotTipsUuid; // @synthesize redDotTipsUuid=_redDotTipsUuid;
@property(retain, nonatomic) WCFinderAppendTabDatasModel *appendTabDatasModel; // @synthesize appendTabDatasModel=_appendTabDatasModel;
@property(nonatomic) unsigned long long pushLevel; // @synthesize pushLevel=_pushLevel;
@property(nonatomic) unsigned long long filterRedDotFlag; // @synthesize filterRedDotFlag=_filterRedDotFlag;
@property(nonatomic) unsigned long long requestScene; // @synthesize requestScene=_requestScene;
@property(nonatomic) _Bool fromShareType; // @synthesize fromShareType=_fromShareType;
@property(nonatomic) double playPosition; // @synthesize playPosition=_playPosition;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) long long clearRedDotActionType; // @synthesize clearRedDotActionType=_clearRedDotActionType;
@property(copy, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
@property(nonatomic) _Bool showMainView; // @synthesize showMainView=_showMainView;
@property(nonatomic) _Bool fromWxSns; // @synthesize fromWxSns=_fromWxSns;
@property(retain, nonatomic) NSData *appendCardLastBuffer; // @synthesize appendCardLastBuffer=_appendCardLastBuffer;
@property(copy, nonatomic) NSString *scrollToFeedId; // @synthesize scrollToFeedId=_scrollToFeedId;
@property(retain, nonatomic) NSArray *appendContentVMArray; // @synthesize appendContentVMArray=_appendContentVMArray;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(nonatomic) int failReturnTo; // @synthesize failReturnTo=_failReturnTo;
@property(nonatomic) _Bool byPush; // @synthesize byPush=_byPush;
@property(nonatomic) unsigned long long demotionFlag; // @synthesize demotionFlag=_demotionFlag;
@property(retain, nonatomic) FinderCommByPass *commByPass; // @synthesize commByPass=_commByPass;
@property(retain, nonatomic) NSMutableArray *topObjects; // @synthesize topObjects=_topObjects;
@property(copy, nonatomic) NSString *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(copy, nonatomic) NSString *h5ByPass; // @synthesize h5ByPass=_h5ByPass;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *finderEntryJumpRedDotCtrlInfo; // @synthesize finderEntryJumpRedDotCtrlInfo=_finderEntryJumpRedDotCtrlInfo;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *finderEntryRedDotCtrlInfo; // @synthesize finderEntryRedDotCtrlInfo=_finderEntryRedDotCtrlInfo;
@property(nonatomic) _Bool shouldReloadTableView; // @synthesize shouldReloadTableView=_shouldReloadTableView;
@property(nonatomic) unsigned long long guideBarObjectId; // @synthesize guideBarObjectId=_guideBarObjectId;
@property(nonatomic) _Bool isTriggerByUser; // @synthesize isTriggerByUser=_isTriggerByUser;
@property(nonatomic) unsigned long long forceJumpTabType; // @synthesize forceJumpTabType=_forceJumpTabType;
@property(nonatomic) long long openFinderTLAppendAction; // @synthesize openFinderTLAppendAction=_openFinderTLAppendAction;
@property(retain, nonatomic) WCFinderPostSessionModel *postSession; // @synthesize postSession=_postSession;
@property(nonatomic) __weak UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(nonatomic) unsigned long long entryCardType; // @synthesize entryCardType=_entryCardType;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
- (id)initByEntryScene:(unsigned long long)arg1 entryCardType:(unsigned long long)arg2 appendTabDatasModel:(id)arg3;
- (_Bool)forceInitFinderTimelineVC;
- (long long)getOpenFinderAppendAction;
- (id)initFromOpenFinderTLJSApiWithFromVC:(id)arg1 forceJumpTabType:(unsigned long long)arg2 entryScene:(unsigned long long)arg3 entryCardType:(unsigned long long)arg4 h5ByPass:(id)arg5 reportInfo:(id)arg6 complete:(CDUnknownBlockType)arg7;
- (id)initFromShareTypeWithTid:(id)arg1 nonceID:(id)arg2 playPosition:(double)arg3 entryScene:(unsigned long long)arg4 requestScene:(unsigned long long)arg5;
- (id)initFromSnsTimelineJumpToFinderPersonalCenter;
- (id)initFromIntroductionMessage;
- (id)initFromFindPageClick;
- (id)initFromPushWithFromVC:(id)arg1 shouldReloadTableView:(_Bool)arg2 forceJumpTabType:(unsigned long long)arg3 topObjects:(id)arg4 commByPass:(id)arg5 demotionFlag:(unsigned long long)arg6 failReturnTo:(int)arg7 taskID:(id)arg8 pushLevel:(unsigned long long)arg9 jumpInfo:(id)arg10;
- (id)initFromShareListFromVC:(id)arg1 shouldReloadTableView:(_Bool)arg2 forceJumpTabType:(unsigned long long)arg3 entryScene:(unsigned long long)arg4 entryCardType:(unsigned long long)arg5 appendContentVMArray:(id)arg6 scrollToFeedId:(id)arg7 appendCardLastBuffer:(id)arg8 appendDatasScene:(unsigned long long)arg9;
- (id)initFromShareListFromVC:(id)arg1 shouldReloadTableView:(_Bool)arg2 forceJumpTabType:(unsigned long long)arg3 entryScene:(unsigned long long)arg4 entryCardType:(unsigned long long)arg5 guideBarObjectId:(unsigned long long)arg6;
- (id)initFromShareListFromVC:(id)arg1 shouldReloadTableView:(_Bool)arg2 forceJumpTabType:(unsigned long long)arg3 entryScene:(unsigned long long)arg4 entryCardType:(unsigned long long)arg5;
- (id)initFromWXSearchShouldReloadTableView:(_Bool)arg1;
- (id)initFromShareListWithDatasModel:(id)arg1 entryScene:(unsigned long long)arg2 entryCardType:(unsigned long long)arg3;
- (id)initFromOpenBusinessSceneWithPostSession:(id)arg1;
- (id)_initWithEntryScene:(unsigned long long)arg1 entryCardType:(unsigned long long)arg2;

@end

