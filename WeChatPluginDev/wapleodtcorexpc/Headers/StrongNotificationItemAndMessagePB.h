//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMSessionInfo, NSString, StrongNotificationItemPB, WCFinderGlobalPushInfo;

@interface StrongNotificationItemAndMessagePB
{
    _Bool _hideStrongNotificationTop;
    _Bool _ignorePlaySoundAndAppVibration;
    _Bool _ignoreCache;
    _Bool _isCustomizationNotify;
    unsigned int _uiStatue;
    unsigned int _uiMesLocalID;
    NSString *_nsForcePushId;
    NSString *_nsUsrName;
    NSString *_nsDescription;
    NSString *_nsSubject;
    StrongNotificationItemPB *_nsStrongNotificationItem;
    NSString *_nsFeedID;
    double _nsCreateTime;
    WCFinderGlobalPushInfo *_nsFinderGlobalPushInfo;
    MMSessionInfo *_sessionInfo;
    NSString *_notifyWording;
}

+ (void)initialize;
+ (void)PBArrayAdd_isCustomizationNotify;
+ (void)PBArrayAdd_notifyWording;
+ (void)PBArrayAdd_ignoreCache;
+ (void)PBArrayAdd_ignorePlaySoundAndAppVibration;
+ (void)PBArrayAdd_hideStrongNotificationTop;
+ (void)PBArrayAdd_nsFinderGlobalPushInfo;
+ (void)PBArrayAdd_nsCreateTime;
+ (void)PBArrayAdd_nsSubject;
+ (void)PBArrayAdd_uiMesLocalID;
+ (void)PBArrayAdd_nsFeedID;
+ (void)PBArrayAdd_nsStrongNotificationItem;
+ (void)PBArrayAdd_uiStatue;
+ (void)PBArrayAdd_nsDescription;
+ (void)PBArrayAdd_nsUsrName;
+ (void)PBArrayAdd_nsForcePushId;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCustomizationNotify; // @synthesize isCustomizationNotify=_isCustomizationNotify;
@property(retain, nonatomic) NSString *notifyWording; // @synthesize notifyWording=_notifyWording;
@property(nonatomic) _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property(nonatomic) _Bool ignorePlaySoundAndAppVibration; // @synthesize ignorePlaySoundAndAppVibration=_ignorePlaySoundAndAppVibration;
@property(nonatomic) _Bool hideStrongNotificationTop; // @synthesize hideStrongNotificationTop=_hideStrongNotificationTop;
@property(retain, nonatomic) MMSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(retain, nonatomic) WCFinderGlobalPushInfo *nsFinderGlobalPushInfo; // @synthesize nsFinderGlobalPushInfo=_nsFinderGlobalPushInfo;
@property(nonatomic) double nsCreateTime; // @synthesize nsCreateTime=_nsCreateTime;
@property(nonatomic) unsigned int uiMesLocalID; // @synthesize uiMesLocalID=_uiMesLocalID;
@property(retain, nonatomic) NSString *nsFeedID; // @synthesize nsFeedID=_nsFeedID;
@property(retain, nonatomic) StrongNotificationItemPB *nsStrongNotificationItem; // @synthesize nsStrongNotificationItem=_nsStrongNotificationItem;
@property(nonatomic) unsigned int uiStatue; // @synthesize uiStatue=_uiStatue;
@property(retain, nonatomic) NSString *nsSubject; // @synthesize nsSubject=_nsSubject;
@property(retain, nonatomic) NSString *nsDescription; // @synthesize nsDescription=_nsDescription;
@property(retain, nonatomic) NSString *nsUsrName; // @synthesize nsUsrName=_nsUsrName;
@property(retain, nonatomic) NSString *nsForcePushId; // @synthesize nsForcePushId=_nsForcePushId;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

