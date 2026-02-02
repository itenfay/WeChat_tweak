//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicPKInfo, MMFinderLiveConnectMicUser, NSArray, NSDictionary;

@interface MMFinderLiveConnectMicPkPanelModel : NSObject
{
    _Bool _isAnchorPkChangeLayoutEnabled;
    MMFinderLiveConnectMicPKInfo *_pkInfo;
    NSArray *_connectAnchorUserList;
    NSArray *_connectAudienceUserList;
    NSArray *_applyAudienceUserList;
    NSArray *_waitConnectAudienceList;
    MMFinderLiveConnectMicUser *_selfMicUser;
    NSDictionary *_invitedMicAudienceDict;
    NSArray *_otherRoomConnectAudienceUserList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAnchorPkChangeLayoutEnabled; // @synthesize isAnchorPkChangeLayoutEnabled=_isAnchorPkChangeLayoutEnabled;
@property(retain, nonatomic) NSArray *otherRoomConnectAudienceUserList; // @synthesize otherRoomConnectAudienceUserList=_otherRoomConnectAudienceUserList;
@property(retain, nonatomic) NSDictionary *invitedMicAudienceDict; // @synthesize invitedMicAudienceDict=_invitedMicAudienceDict;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *selfMicUser; // @synthesize selfMicUser=_selfMicUser;
@property(retain, nonatomic) NSArray *waitConnectAudienceList; // @synthesize waitConnectAudienceList=_waitConnectAudienceList;
@property(retain, nonatomic) NSArray *applyAudienceUserList; // @synthesize applyAudienceUserList=_applyAudienceUserList;
@property(retain, nonatomic) NSArray *connectAudienceUserList; // @synthesize connectAudienceUserList=_connectAudienceUserList;
@property(retain, nonatomic) NSArray *connectAnchorUserList; // @synthesize connectAnchorUserList=_connectAnchorUserList;
@property(retain, nonatomic) MMFinderLiveConnectMicPKInfo *pkInfo; // @synthesize pkInfo=_pkInfo;

@end

