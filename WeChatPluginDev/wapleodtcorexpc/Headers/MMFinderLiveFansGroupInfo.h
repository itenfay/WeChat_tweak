//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveFanClubContacts, MMFinderLiveTask, NSString, WCFinderContact;

@interface MMFinderLiveFansGroupInfo : NSObject
{
    _Bool _fansGroupCreated;
    _Bool _enableFansGroup;
    _Bool _selfFansGroupSuperfanEnabled;
    _Bool _isSuperfanEnabled;
    _Bool _selfFansGroupAnchorCardShown;
    _Bool _selfJoinedSuperfan;
    _Bool _enableFansGroupNotice;
    _Bool _isSelfAnchor;
    _Bool _localJoined;
    _Bool _isSelfJoined;
    _Bool _hasRegisterExtension;
    unsigned int _memberCount;
    unsigned int _selfFansGroupAnchorCardVisibility;
    unsigned int _superfanCount;
    unsigned int _defaultIntimacy;
    unsigned int _fansGroupNoticeMinLevel;
    unsigned int _fansGroupNoticeVibility;
    unsigned long long _currentState;
    NSString *_superfanUpgradePageUrl;
    NSString *_fansGroupName;
    NSString *_fansGroupDetailUrl;
    unsigned long long _currentFollowState;
    NSString *_fansGroupNotice;
    NSString *_fansGroupNoticeImageUrl;
    FinderLiveFanClubContacts *_anchorCard;
    NSString *_anchorUsrName;
    WCFinderContact *_anchorContact;
}

+ (id)createFansGroupInfoByAnchorWithName:(id)arg1 anchorUsrName:(id)arg2;
+ (id)createFansGroupInfoFromFansClubInfo:(id)arg1 isAnchor:(_Bool)arg2 anchorUsrName:(id)arg3 selfJoined:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasRegisterExtension; // @synthesize hasRegisterExtension=_hasRegisterExtension;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
@property(nonatomic) _Bool isSelfJoined; // @synthesize isSelfJoined=_isSelfJoined;
@property(nonatomic) _Bool localJoined; // @synthesize localJoined=_localJoined;
@property(nonatomic) _Bool isSelfAnchor; // @synthesize isSelfAnchor=_isSelfAnchor;
@property(retain, nonatomic) NSString *anchorUsrName; // @synthesize anchorUsrName=_anchorUsrName;
@property(retain, nonatomic) FinderLiveFanClubContacts *anchorCard; // @synthesize anchorCard=_anchorCard;
@property(nonatomic) unsigned int fansGroupNoticeVibility; // @synthesize fansGroupNoticeVibility=_fansGroupNoticeVibility;
@property(nonatomic) _Bool enableFansGroupNotice; // @synthesize enableFansGroupNotice=_enableFansGroupNotice;
@property(nonatomic) unsigned int fansGroupNoticeMinLevel; // @synthesize fansGroupNoticeMinLevel=_fansGroupNoticeMinLevel;
@property(retain, nonatomic) NSString *fansGroupNoticeImageUrl; // @synthesize fansGroupNoticeImageUrl=_fansGroupNoticeImageUrl;
@property(retain, nonatomic) NSString *fansGroupNotice; // @synthesize fansGroupNotice=_fansGroupNotice;
@property(nonatomic) unsigned long long currentFollowState; // @synthesize currentFollowState=_currentFollowState;
@property(nonatomic) unsigned int defaultIntimacy; // @synthesize defaultIntimacy=_defaultIntimacy;
@property(retain, nonatomic) NSString *fansGroupDetailUrl; // @synthesize fansGroupDetailUrl=_fansGroupDetailUrl;
@property(retain, nonatomic) NSString *fansGroupName; // @synthesize fansGroupName=_fansGroupName;
@property(nonatomic) _Bool selfJoinedSuperfan; // @synthesize selfJoinedSuperfan=_selfJoinedSuperfan;
@property(retain, nonatomic) NSString *superfanUpgradePageUrl; // @synthesize superfanUpgradePageUrl=_superfanUpgradePageUrl;
@property(nonatomic) unsigned int superfanCount; // @synthesize superfanCount=_superfanCount;
@property(nonatomic) unsigned int selfFansGroupAnchorCardVisibility; // @synthesize selfFansGroupAnchorCardVisibility=_selfFansGroupAnchorCardVisibility;
@property(nonatomic) _Bool selfFansGroupAnchorCardShown; // @synthesize selfFansGroupAnchorCardShown=_selfFansGroupAnchorCardShown;
@property(nonatomic) _Bool isSuperfanEnabled; // @synthesize isSuperfanEnabled=_isSuperfanEnabled;
@property(nonatomic) _Bool selfFansGroupSuperfanEnabled; // @synthesize selfFansGroupSuperfanEnabled=_selfFansGroupSuperfanEnabled;
@property(nonatomic) _Bool enableFansGroup; // @synthesize enableFansGroup=_enableFansGroup;
@property(nonatomic) _Bool fansGroupCreated; // @synthesize fansGroupCreated=_fansGroupCreated;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) unsigned int memberCount; // @synthesize memberCount=_memberCount;
- (void)onModifyContact:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)updateForFinderDataItemChanged;
- (void)updateFromFansClubInfo:(id)arg1;
- (void)updateCurrentFansGroupState;
- (void)updateCurrentFansGroupStateForFollowStateChanged;
- (void)updateCurrentFansGroupStateForJoinGroup;
- (void)updateSelfJoined:(_Bool)arg1;
- (_Bool)isBizFollowed;
- (_Bool)checkNewSelfJoinedValid:(_Bool)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)localEnableSelfCreatedSuperfan;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (id)init;
- (void)createFansGroupWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

