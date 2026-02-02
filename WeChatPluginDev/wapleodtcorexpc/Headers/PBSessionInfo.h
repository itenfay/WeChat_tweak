//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, PBCContact, PBCMessageWrap;

@interface PBSessionInfo : NSObject
{
    _Bool _showUnreadCountAsRedDot;
    _Bool _newInvApprove;
    _Bool _bNeedContactVerify;
    _Bool _bBrandNotifyNoPrefixName;
    _Bool _bSpecialAttention;
    _Bool _bGroupUndoneFlag;
    unsigned int _atMeCount;
    unsigned int _greenLabelType;
    unsigned int _newInvCount;
    unsigned int _transferCount;
    unsigned int _aaCount;
    unsigned int _exclusiveHbCount;
    unsigned int _newNotifyMsgCount;
    unsigned int _brandNotifyType;
    PBCContact *_contact;
    PBCMessageWrap *_message;
    NSString *_updatableMsgDigest;
    NSString *_brandNotifyPrefixName;
    unsigned long long _brandAffMsgId;
}

+ (void)initialize;
+ (void)PBArrayAdd_brandAffMsgId;
+ (void)PBArrayAdd_updatableMsgDigest;
+ (void)PBArrayAdd_bSpecialAttention;
+ (void)PBArrayAdd_exclusiveHbCount;
+ (void)PBArrayAdd_bGroupUndoneFlag;
+ (void)PBArrayAdd_bBrandNotifyNoPrefixName;
+ (void)PBArrayAdd_brandNotifyPrefixName;
+ (void)PBArrayAdd_brandNotifyType;
+ (void)PBArrayAdd_newNotifyMsgCount;
+ (void)PBArrayAdd_aaCount;
+ (void)PBArrayAdd_transferCount;
+ (void)PBArrayAdd_bNeedContactVerify;
+ (void)PBArrayAdd_newInvApprove;
+ (void)PBArrayAdd_newInvCount;
+ (void)PBArrayAdd_greenLabelType;
+ (void)PBArrayAdd_showUnreadCountAsRedDot;
+ (void)PBArrayAdd_atMeCount;
+ (void)PBArrayAdd_message;
+ (void)PBArrayAdd_contact;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long brandAffMsgId; // @synthesize brandAffMsgId=_brandAffMsgId;
@property(nonatomic) _Bool bGroupUndoneFlag; // @synthesize bGroupUndoneFlag=_bGroupUndoneFlag;
@property(nonatomic) _Bool bSpecialAttention; // @synthesize bSpecialAttention=_bSpecialAttention;
@property(nonatomic) _Bool bBrandNotifyNoPrefixName; // @synthesize bBrandNotifyNoPrefixName=_bBrandNotifyNoPrefixName;
@property(copy, nonatomic) NSString *brandNotifyPrefixName; // @synthesize brandNotifyPrefixName=_brandNotifyPrefixName;
@property(nonatomic) unsigned int brandNotifyType; // @synthesize brandNotifyType=_brandNotifyType;
@property(nonatomic) unsigned int newNotifyMsgCount; // @synthesize newNotifyMsgCount=_newNotifyMsgCount;
@property(retain, nonatomic) NSString *updatableMsgDigest; // @synthesize updatableMsgDigest=_updatableMsgDigest;
@property(nonatomic) unsigned int exclusiveHbCount; // @synthesize exclusiveHbCount=_exclusiveHbCount;
@property(nonatomic) unsigned int aaCount; // @synthesize aaCount=_aaCount;
@property(nonatomic) unsigned int transferCount; // @synthesize transferCount=_transferCount;
@property(nonatomic) _Bool bNeedContactVerify; // @synthesize bNeedContactVerify=_bNeedContactVerify;
@property(nonatomic) _Bool newInvApprove; // @synthesize newInvApprove=_newInvApprove;
@property(nonatomic) unsigned int newInvCount; // @synthesize newInvCount=_newInvCount;
@property(nonatomic) unsigned int greenLabelType; // @synthesize greenLabelType=_greenLabelType;
@property(nonatomic) _Bool showUnreadCountAsRedDot; // @synthesize showUnreadCountAsRedDot=_showUnreadCountAsRedDot;
@property(nonatomic) unsigned int atMeCount; // @synthesize atMeCount=_atMeCount;
@property(retain, nonatomic) PBCMessageWrap *message; // @synthesize message=_message;
@property(retain, nonatomic) PBCContact *contact; // @synthesize contact=_contact;
- (id)getPBPropertyTable;
- (void)setFromSessionInfo:(id)arg1;
- (id)toSessionInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

