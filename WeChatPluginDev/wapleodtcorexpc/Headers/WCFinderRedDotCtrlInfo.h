//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ClearPrevReddotFeedStrategy, FinderRedDotExtInfo, NSArray, NSData, NSMutableDictionary, NSString;

@interface WCFinderRedDotCtrlInfo : NSObject
{
    _Bool _ignoreValid;
    _Bool _isByClientMock;
    int _subType;
    unsigned int _expireTime;
    unsigned int _ignoreDisplayTabType;
    int _saveStrategy;
    NSMutableDictionary *_dicShowInfo;
    NSMutableDictionary *_dicShowRelation;
    NSString *_selfFinderUsername;
    NSString *_tipsID;
    NSString *_tipsUuid;
    unsigned long long _priority;
    unsigned long long _type;
    unsigned long long _businessType;
    NSData *_extInfo;
    NSArray *_showInfos;
    long long _updateTimeSecond;
    unsigned long long _localReceiveMsTimeStamp;
    long long _beginShowTime;
    NSString *_internalFeedbackUrl;
    NSString *_groupId;
    NSData *_sessionBypassInfo;
    NSData *_reddotExposeBuff;
    FinderRedDotExtInfo *_mockRedDotExtInfo;
    NSString *_reportExtInfo;
    ClearPrevReddotFeedStrategy *_clearPrevReddotFeedStrategy;
}

+ (id)ctrlInfo:(id)arg1;
+ (id)_ctrlInfoByAff:(id)arg1;
+ (id)_ctrlInfoBaseParse:(id)arg1;
+ (id)ctrlInfoWithAffPB:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_reddotExposeBuff;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_clearPrevReddotFeedStrategy;
+ (void)PBArrayAdd_saveStrategy;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_subType;
+ (void)PBArrayAdd_sessionBypassInfo;
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_reportExtInfo;
+ (void)PBArrayAdd_selfFinderUsername;
+ (void)PBArrayAdd_internalFeedbackUrl;
+ (void)PBArrayAdd_ignoreValid;
+ (void)PBArrayAdd_ignoreDisplayTabType;
+ (void)PBArrayAdd_beginShowTime;
+ (void)PBArrayAdd_localReceiveMsTimeStamp;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_dicShowRelation;
+ (void)PBArrayAdd_dicShowInfo;
+ (void)PBArrayAdd_showInfos;
+ (void)PBArrayAdd_updateTimeSecond;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_priority;
+ (void)PBArrayAdd_tipsID;
- (void).cxx_destruct;
@property(retain, nonatomic) ClearPrevReddotFeedStrategy *clearPrevReddotFeedStrategy; // @synthesize clearPrevReddotFeedStrategy=_clearPrevReddotFeedStrategy;
@property(nonatomic) int saveStrategy; // @synthesize saveStrategy=_saveStrategy;
@property(copy, nonatomic) NSString *reportExtInfo; // @synthesize reportExtInfo=_reportExtInfo;
@property(retain, nonatomic) FinderRedDotExtInfo *mockRedDotExtInfo; // @synthesize mockRedDotExtInfo=_mockRedDotExtInfo;
@property(nonatomic) _Bool isByClientMock; // @synthesize isByClientMock=_isByClientMock;
@property(retain, nonatomic) NSData *reddotExposeBuff; // @synthesize reddotExposeBuff=_reddotExposeBuff;
@property(copy, nonatomic) NSData *sessionBypassInfo; // @synthesize sessionBypassInfo=_sessionBypassInfo;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *internalFeedbackUrl; // @synthesize internalFeedbackUrl=_internalFeedbackUrl;
@property(nonatomic) _Bool ignoreValid; // @synthesize ignoreValid=_ignoreValid;
@property(nonatomic) unsigned int ignoreDisplayTabType; // @synthesize ignoreDisplayTabType=_ignoreDisplayTabType;
@property(nonatomic) long long beginShowTime; // @synthesize beginShowTime=_beginShowTime;
@property(nonatomic) unsigned long long localReceiveMsTimeStamp; // @synthesize localReceiveMsTimeStamp=_localReceiveMsTimeStamp;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) long long updateTimeSecond; // @synthesize updateTimeSecond=_updateTimeSecond;
@property(retain, nonatomic) NSArray *showInfos; // @synthesize showInfos=_showInfos;
@property(retain, nonatomic) NSData *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) int subType; // @synthesize subType=_subType;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *tipsUuid; // @synthesize tipsUuid=_tipsUuid;
@property(retain, nonatomic) NSString *tipsID; // @synthesize tipsID=_tipsID;
@property(copy, nonatomic) NSString *selfFinderUsername; // @synthesize selfFinderUsername=_selfFinderUsername;
@property(retain, nonatomic) NSMutableDictionary *dicShowRelation; // @synthesize dicShowRelation=_dicShowRelation;
@property(retain, nonatomic) NSMutableDictionary *dicShowInfo; // @synthesize dicShowInfo=_dicShowInfo;
- (unsigned long long)bubbleTopFeedId;
- (id)pinToTopObjectInfo;
- (_Bool)isGeCommentDetailPrefetchDisable;
- (_Bool)isSafeContactBanRedDot;
- (_Bool)isUltraHighPriorityRedDot;
- (_Bool)hasRedDotPath:(id)arg1;
- (_Bool)openJumpInfoPage;
- (_Bool)isIgnoreFreqLimitRedDot;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (_Bool)isExpireCtrlInfo;
- (id)genPBRedDotCtrlInfo;
- (id)genAffRedDotCtrlInfo;
- (id)generateRedDotSyncInfo;
- (_Bool)isPriorityHigherThan:(id)arg1;
- (_Bool)isPriorityHigherOrSameThan:(id)arg1;
- (id)finderExtInfo;
- (void)removeDependentReleation:(id)arg1 childPath:(id)arg2;
- (long long)_discoveryTabRedDotBusinessType:(id)arg1;
- (long long)discoveryTabRedDotBusinessType;
- (void)_handleDisposeReportLogicWithParentPath:(id)arg1 childPath:(id)arg2;
- (id)removePathInfoWithKey:(id)arg1;
- (_Bool)isShowInfoEmpty;
- (id)showInfoAtPath:(id)arg1;
- (_Bool)updateRedDotShowInfoAtPath:(id)arg1 showInfo:(id)arg2;
- (_Bool)isVaildItem;
- (void)addIndependentShowInfo:(id)arg1 childPath:(id)arg2;
- (_Bool)isFinderOrLiveRedDot;
- (id)getPBPropertyTable;
- (id)toReddotInfo;
- (void)reportSDKReceiveIfNeed;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

