//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface StrongNotificationItemPB
{
    _Bool _isCustomizationNotify;
    unsigned int _uiStatue;
    unsigned int _uiAction;
    NSString *_nsForcePushId;
    NSString *_nsUsrName;
    double _nsCreateTime;
    double _nsExpiredTime;
    NSString *_nsDesc;
    NSString *_nsUserIcon;
    NSString *_nsExtinfo;
    double _nsOperateTime;
    NSString *_nsApproveIcon;
    NSString *_nsNickName;
    double _nsDisplayTime;
    NSString *_nsSubject;
    NSString *_notifyWording;
    NSString *_noticeId;
    NSString *_topicTitle;
}

+ (void)initialize;
+ (void)PBArrayAdd_isCustomizationNotify;
+ (void)PBArrayAdd_topicTitle;
+ (void)PBArrayAdd_noticeId;
+ (void)PBArrayAdd_notifyWording;
+ (void)PBArrayAdd_nsSubject;
+ (void)PBArrayAdd_nsNickName;
+ (void)PBArrayAdd_nsApproveIcon;
+ (void)PBArrayAdd_nsOperateTime;
+ (void)PBArrayAdd_uiAction;
+ (void)PBArrayAdd_uiStatue;
+ (void)PBArrayAdd_nsExtinfo;
+ (void)PBArrayAdd_nsUserIcon;
+ (void)PBArrayAdd_nsDesc;
+ (void)PBArrayAdd_nsExpiredTime;
+ (void)PBArrayAdd_nsCreateTime;
+ (void)PBArrayAdd_nsUsrName;
+ (void)PBArrayAdd_nsForcePushId;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCustomizationNotify; // @synthesize isCustomizationNotify=_isCustomizationNotify;
@property(retain, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(retain, nonatomic) NSString *notifyWording; // @synthesize notifyWording=_notifyWording;
@property(retain, nonatomic) NSString *nsSubject; // @synthesize nsSubject=_nsSubject;
@property(nonatomic) double nsDisplayTime; // @synthesize nsDisplayTime=_nsDisplayTime;
@property(retain, nonatomic) NSString *nsNickName; // @synthesize nsNickName=_nsNickName;
@property(retain, nonatomic) NSString *nsApproveIcon; // @synthesize nsApproveIcon=_nsApproveIcon;
@property(nonatomic) double nsOperateTime; // @synthesize nsOperateTime=_nsOperateTime;
@property(nonatomic) unsigned int uiAction; // @synthesize uiAction=_uiAction;
@property(nonatomic) unsigned int uiStatue; // @synthesize uiStatue=_uiStatue;
@property(retain, nonatomic) NSString *nsExtinfo; // @synthesize nsExtinfo=_nsExtinfo;
@property(retain, nonatomic) NSString *nsUserIcon; // @synthesize nsUserIcon=_nsUserIcon;
@property(retain, nonatomic) NSString *nsDesc; // @synthesize nsDesc=_nsDesc;
@property(nonatomic) double nsExpiredTime; // @synthesize nsExpiredTime=_nsExpiredTime;
@property(nonatomic) double nsCreateTime; // @synthesize nsCreateTime=_nsCreateTime;
@property(retain, nonatomic) NSString *nsUsrName; // @synthesize nsUsrName=_nsUsrName;
@property(retain, nonatomic) NSString *nsForcePushId; // @synthesize nsForcePushId=_nsForcePushId;
@property(readonly, copy) NSString *description;
- (void)copyToOther:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

