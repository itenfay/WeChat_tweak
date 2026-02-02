//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MultiTalkGroupMemberItem
{
    int _status;
    int _reason;
    int _holdStatus;
    NSString *_userName;
    NSString *_inviteUserName;
    long long _inviteTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_holdStatus;
+ (void)PBArrayAdd_inviteTime;
+ (void)PBArrayAdd_reason;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_inviteUserName;
+ (void)PBArrayAdd_userName;
- (void).cxx_destruct;
@property(nonatomic) int holdStatus; // @synthesize holdStatus=_holdStatus;
@property(nonatomic) long long inviteTime; // @synthesize inviteTime=_inviteTime;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *inviteUserName; // @synthesize inviteUserName=_inviteUserName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

