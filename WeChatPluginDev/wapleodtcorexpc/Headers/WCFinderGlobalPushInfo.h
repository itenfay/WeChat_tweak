//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderGlobalPushInfo
{
    _Bool _forceOpenFinderEntrance;
    _Bool _receivedInBackground;
    _Bool _hadPlaySoundAndAppVibration;
    _Bool _hasBeenShown;
    unsigned int _jumpTo;
    unsigned int _returnTo;
    unsigned int _actionType;
    unsigned int _authIconType;
    unsigned int _pushType;
    unsigned int _byPassType;
    int _failReturnTo;
    unsigned int _waitStreamTimeout;
    unsigned int _alertDisplayTime;
    unsigned int _lastDeliverTime;
    NSString *_objectID;
    NSString *_title;
    NSString *_body;
    NSString *_imageURL;
    NSData *_byPassInfo;
    NSString *_nonceID;
    NSString *_head;
    NSString *_taskID;
    unsigned long long _demotionFlag;
    unsigned long long _ctrlFlag;
    unsigned long long _pushLevel;
    unsigned long long _discardType;
    unsigned long long _triggerScene;
    NSString *_jumpInfo;
    NSString *_reportExtInfo;
    NSString *_pushJumpParams;
}

+ (void)initialize;
+ (void)PBArrayAdd_pushJumpParams;
+ (void)PBArrayAdd_lastDeliverTime;
+ (void)PBArrayAdd_reportExtInfo;
+ (void)PBArrayAdd_jumpInfo;
+ (void)PBArrayAdd_hasBeenShown;
+ (void)PBArrayAdd_triggerScene;
+ (void)PBArrayAdd_hadPlaySoundAndAppVibration;
+ (void)PBArrayAdd_receivedInBackground;
+ (void)PBArrayAdd_forceOpenFinderEntrance;
+ (void)PBArrayAdd_discardType;
+ (void)PBArrayAdd_alertDisplayTime;
+ (void)PBArrayAdd_pushLevel;
+ (void)PBArrayAdd_waitStreamTimeout;
+ (void)PBArrayAdd_failReturnTo;
+ (void)PBArrayAdd_byPassType;
+ (void)PBArrayAdd_pushType;
+ (void)PBArrayAdd_ctrlFlag;
+ (void)PBArrayAdd_demotionFlag;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_actionType;
+ (void)PBArrayAdd_taskID;
+ (void)PBArrayAdd_head;
+ (void)PBArrayAdd_nonceID;
+ (void)PBArrayAdd_byPassInfo;
+ (void)PBArrayAdd_returnTo;
+ (void)PBArrayAdd_jumpTo;
+ (void)PBArrayAdd_imageURL;
+ (void)PBArrayAdd_body;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_objectID;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *pushJumpParams; // @synthesize pushJumpParams=_pushJumpParams;
@property(nonatomic) unsigned int lastDeliverTime; // @synthesize lastDeliverTime=_lastDeliverTime;
@property(copy, nonatomic) NSString *reportExtInfo; // @synthesize reportExtInfo=_reportExtInfo;
@property(copy, nonatomic) NSString *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) _Bool hasBeenShown; // @synthesize hasBeenShown=_hasBeenShown;
@property(nonatomic) unsigned long long triggerScene; // @synthesize triggerScene=_triggerScene;
@property(nonatomic) _Bool hadPlaySoundAndAppVibration; // @synthesize hadPlaySoundAndAppVibration=_hadPlaySoundAndAppVibration;
@property(nonatomic) _Bool receivedInBackground; // @synthesize receivedInBackground=_receivedInBackground;
@property(nonatomic) _Bool forceOpenFinderEntrance; // @synthesize forceOpenFinderEntrance=_forceOpenFinderEntrance;
@property(nonatomic) unsigned long long discardType; // @synthesize discardType=_discardType;
@property(nonatomic) unsigned int alertDisplayTime; // @synthesize alertDisplayTime=_alertDisplayTime;
@property(nonatomic) unsigned long long pushLevel; // @synthesize pushLevel=_pushLevel;
@property(nonatomic) unsigned int waitStreamTimeout; // @synthesize waitStreamTimeout=_waitStreamTimeout;
@property(nonatomic) int failReturnTo; // @synthesize failReturnTo=_failReturnTo;
@property(nonatomic) unsigned int byPassType; // @synthesize byPassType=_byPassType;
@property(nonatomic) unsigned int pushType; // @synthesize pushType=_pushType;
@property(nonatomic) unsigned long long ctrlFlag; // @synthesize ctrlFlag=_ctrlFlag;
@property(nonatomic) unsigned long long demotionFlag; // @synthesize demotionFlag=_demotionFlag;
@property(nonatomic) unsigned int authIconType; // @synthesize authIconType=_authIconType;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
@property(copy, nonatomic) NSString *head; // @synthesize head=_head;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(retain, nonatomic) NSData *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(nonatomic) unsigned int returnTo; // @synthesize returnTo=_returnTo;
@property(nonatomic) unsigned int jumpTo; // @synthesize jumpTo=_jumpTo;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

