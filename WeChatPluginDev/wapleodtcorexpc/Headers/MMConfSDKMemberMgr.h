//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSArray, NSMutableArray, NSString;

@interface MMConfSDKMemberMgr : NSObject
{
    NSMutableArray *_currentInRoomMembers;
    NSMutableArray *_memberChangeListeners;
    NSMutableArray *_lastSpeakers;
    MMTimer *_timer;
    NSMutableArray *_allTalkedMembers;
    NSMutableArray *_cachedMembersInfo;
    int _mRoutId;
    long long _mMemberListSeq;
    long long _mroomid;
    long long _mImRoomId;
    NSString *_mMultiTalkGroupId;
    NSString *_mWxGroupId;
    NSString *_mMultiTalkClientGroupId;
    NSArray *_mMutilTalkGroupMemberList;
    NSString *_mCreatedUserName;
    NSString *_mCustomMutilTalkGrpName;
    NSString *_mSdkGroupId;
    NSString *_mSubcribeBigUsername;
    NSString *_mHiresScreenUsername;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *mHiresScreenUsername; // @synthesize mHiresScreenUsername=_mHiresScreenUsername;
@property(copy, nonatomic) NSString *mSubcribeBigUsername; // @synthesize mSubcribeBigUsername=_mSubcribeBigUsername;
@property(nonatomic) int mRoutId; // @synthesize mRoutId=_mRoutId;
@property(copy, nonatomic) NSString *mSdkGroupId; // @synthesize mSdkGroupId=_mSdkGroupId;
@property(copy, nonatomic) NSString *mCustomMutilTalkGrpName; // @synthesize mCustomMutilTalkGrpName=_mCustomMutilTalkGrpName;
@property(copy, nonatomic) NSString *mCreatedUserName; // @synthesize mCreatedUserName=_mCreatedUserName;
@property(retain, nonatomic) NSArray *mMutilTalkGroupMemberList; // @synthesize mMutilTalkGroupMemberList=_mMutilTalkGroupMemberList;
@property(copy, nonatomic) NSString *mMultiTalkClientGroupId; // @synthesize mMultiTalkClientGroupId=_mMultiTalkClientGroupId;
@property(copy, nonatomic) NSString *mWxGroupId; // @synthesize mWxGroupId=_mWxGroupId;
@property(copy, nonatomic) NSString *mMultiTalkGroupId; // @synthesize mMultiTalkGroupId=_mMultiTalkGroupId;
@property(nonatomic) long long mImRoomId; // @synthesize mImRoomId=_mImRoomId;
@property(nonatomic) long long mroomid; // @synthesize mroomid=_mroomid;
@property(nonatomic) long long mMemberListSeq; // @synthesize mMemberListSeq=_mMemberListSeq;
- (void)updateAllMemberScreenStatus:(id)arg1;
- (void)updateMemberScreenStatus:(int)arg1 ScreenStatus:(int)arg2;
- (id)getMemberCacheByOpenid:(id)arg1;
- (id)getMemberByMemberid:(int)arg1;
- (id)getMemberByUsername:(id)arg1;
- (id)getMemberByOpenid:(id)arg1;
- (_Bool)isSpeakersEqual:(id)arg1;
- (void)addSpeakerChangeCallback:(CDUnknownBlockType)arg1;
- (void)onTimerExpired;
- (void)stopListenToSpeakerChange;
- (void)startListenToSpeakerChange;
- (id)getOpenIdByMemberId:(unsigned int)arg1;
- (_Bool)getIfAlreadyInTalkedMembers:(id)arg1;
- (id)getAllTalkedMembers;
- (id)getCurrentRoomMembers;
- (void)updateMembersCache:(id)arg1 openid:(id)arg2 reliable:(int)arg3;
- (void)updateMembersCache:(id)arg1 reliable:(int)arg2;
- (void)updateMembers:(id)arg1 users:(id)arg2 selfname:(id)arg3 callee:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateMembers:(id)arg1 users:(id)arg2 selfname:(id)arg3 callee:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)resetMembers;
- (void)initData;
- (id)init;

@end

