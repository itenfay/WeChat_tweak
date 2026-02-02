//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicPKInfo, MMFinderLiveConnectMicUser, NSArray;

@interface MMFinderLiveConnectMicUsersInfo : NSObject
{
    _Bool _hasFocusedUser;
    _Bool _isGlobalSmallMode;
    _Bool _isFitRenderMode;
    unsigned long long _anchorZOrder;
    unsigned long long _anchorFocusState;
    unsigned long long _anchorUIType;
    unsigned long long _anchorHeatValue;
    double _aspectRatio;
    unsigned long long _micLayoutMode;
    unsigned long long _anchorMicIndex;
    unsigned long long _cloudMixBackgroundType;
    MMFinderLiveConnectMicPKInfo *_anchorPkInfo;
    MMFinderLiveConnectMicUser *_fakeAnchorMicUser;
    NSArray *_micAudienceUsersList;
    NSArray *_otherRoomMicAnchorUsersList;
    NSArray *_otherRoomMicAudienceUsersList;
    NSArray *_allMicUsersList;
    NSArray *_holeList;
    NSArray *_unoccupiedSeatList;
    struct CGRect _normalizedAnchorFrame;
}

+ (_Bool)emptyUserListAllowedForLayoutMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *unoccupiedSeatList; // @synthesize unoccupiedSeatList=_unoccupiedSeatList;
@property(retain, nonatomic) NSArray *holeList; // @synthesize holeList=_holeList;
@property(retain, nonatomic) NSArray *allMicUsersList; // @synthesize allMicUsersList=_allMicUsersList;
@property(retain, nonatomic) NSArray *otherRoomMicAudienceUsersList; // @synthesize otherRoomMicAudienceUsersList=_otherRoomMicAudienceUsersList;
@property(retain, nonatomic) NSArray *otherRoomMicAnchorUsersList; // @synthesize otherRoomMicAnchorUsersList=_otherRoomMicAnchorUsersList;
@property(retain, nonatomic) NSArray *micAudienceUsersList; // @synthesize micAudienceUsersList=_micAudienceUsersList;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *fakeAnchorMicUser; // @synthesize fakeAnchorMicUser=_fakeAnchorMicUser;
@property(retain, nonatomic) MMFinderLiveConnectMicPKInfo *anchorPkInfo; // @synthesize anchorPkInfo=_anchorPkInfo;
@property(nonatomic) unsigned long long cloudMixBackgroundType; // @synthesize cloudMixBackgroundType=_cloudMixBackgroundType;
@property(nonatomic) _Bool isFitRenderMode; // @synthesize isFitRenderMode=_isFitRenderMode;
@property(nonatomic) unsigned long long anchorMicIndex; // @synthesize anchorMicIndex=_anchorMicIndex;
@property(nonatomic) unsigned long long micLayoutMode; // @synthesize micLayoutMode=_micLayoutMode;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) _Bool isGlobalSmallMode; // @synthesize isGlobalSmallMode=_isGlobalSmallMode;
@property(nonatomic) unsigned long long anchorHeatValue; // @synthesize anchorHeatValue=_anchorHeatValue;
@property(nonatomic) unsigned long long anchorUIType; // @synthesize anchorUIType=_anchorUIType;
@property(nonatomic) _Bool hasFocusedUser; // @synthesize hasFocusedUser=_hasFocusedUser;
@property(nonatomic) unsigned long long anchorFocusState; // @synthesize anchorFocusState=_anchorFocusState;
@property(nonatomic) unsigned long long anchorZOrder; // @synthesize anchorZOrder=_anchorZOrder;
@property(nonatomic) struct CGRect normalizedAnchorFrame; // @synthesize normalizedAnchorFrame=_normalizedAnchorFrame;
@property(readonly, nonatomic) _Bool isAnchorPkChangeLayoutEnabled;
@property(readonly, nonatomic) _Bool isAnchorMicFullScreenDisplayMode;
@property(readonly, nonatomic) _Bool isAudienceMicFullScreenDisplayMode;
@property(readonly, nonatomic) _Bool isFullScreenDisplayMode;
@property(readonly, nonatomic) _Bool showSeatName;
@property(readonly, nonatomic) _Bool isSeiReadyForPk;
@property(readonly, nonatomic) _Bool inAudiencePkLayoutMode;
@property(readonly, nonatomic) _Bool inCrossRoomPkLayoutMode;
- (void)generateFakeAnchorMicUserWithSdkUserId:(id)arg1 andContact:(id)arg2;
@property(readonly, nonatomic) _Bool enableMasking;
@property(readonly, nonatomic) _Bool emptyUserListAllowed;
@property(readonly, nonatomic) _Bool useDesignatedAspectRatio;
@property(readonly, nonatomic) unsigned long long audioRoomConnectMicSeiMode;
@property(readonly, nonatomic) unsigned long long connectMicSeiMode;
@property(readonly, nonatomic) _Bool isInConnectedMicUI;

@end

