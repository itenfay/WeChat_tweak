//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMConfSDKMember : NSObject
{
    int _memberId;
    int _mStatus;
    int _mReason;
    int _mHoldStatus;
    int _mScreenStatus;
    NSString *_openId;
    NSString *_mUserName;
    NSString *_mInviteUserName;
    long long _mInviteTime;
    NSString *_callerName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
@property(nonatomic) int mScreenStatus; // @synthesize mScreenStatus=_mScreenStatus;
@property(nonatomic) int mHoldStatus; // @synthesize mHoldStatus=_mHoldStatus;
@property(nonatomic) long long mInviteTime; // @synthesize mInviteTime=_mInviteTime;
@property(nonatomic) int mReason; // @synthesize mReason=_mReason;
@property(nonatomic) int mStatus; // @synthesize mStatus=_mStatus;
@property(copy, nonatomic) NSString *mInviteUserName; // @synthesize mInviteUserName=_mInviteUserName;
@property(copy, nonatomic) NSString *mUserName; // @synthesize mUserName=_mUserName;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(nonatomic) int memberId; // @synthesize memberId=_memberId;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long screenSharingPresetationStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

