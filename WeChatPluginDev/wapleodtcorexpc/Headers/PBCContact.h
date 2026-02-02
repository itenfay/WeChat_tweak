//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, PBBaseContact;

@interface PBCContact : NSObject
{
    unsigned int _chatRoomStatus;
    unsigned int _certificationFlag;
    unsigned int _needUpdate;
    unsigned int _wcflag;
    unsigned int _brandSubscriptionSettings;
    unsigned int _isShowRedDot;
    unsigned int _chatRoomDetailStatus;
    unsigned int _m_uiDeleteFlag;
    PBBaseContact *_baseContact;
    NSString *_chatRoomMemList;
    NSString *_chatRoomData;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_signature;
    NSString *_certificationInfo;
    NSString *_owner;
    NSString *_fbnickName;
    NSString *_fbid;
    NSString *_wcbgimgObjectId;
    NSString *_wcbgimgId;
    NSString *_externalInfo;
    NSString *_brandSubscriptConfigUrl;
    NSString *_brandIconUrl;
    NSString *_openIMAppid;
    NSString *_openIMDescId;
    NSString *_m_textStatusID;
    NSString *_m_textStatusExtInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_uiDeleteFlag;
+ (void)PBArrayAdd_m_textStatusExtInfo;
+ (void)PBArrayAdd_m_textStatusID;
+ (void)PBArrayAdd_chatRoomDetailStatus;
+ (void)PBArrayAdd_openIMDescId;
+ (void)PBArrayAdd_openIMAppid;
+ (void)PBArrayAdd_isShowRedDot;
+ (void)PBArrayAdd_brandIconUrl;
+ (void)PBArrayAdd_brandSubscriptionSettings;
+ (void)PBArrayAdd_brandSubscriptConfigUrl;
+ (void)PBArrayAdd_externalInfo;
+ (void)PBArrayAdd_wcbgimgId;
+ (void)PBArrayAdd_wcflag;
+ (void)PBArrayAdd_wcbgimgObjectId;
+ (void)PBArrayAdd_needUpdate;
+ (void)PBArrayAdd_fbid;
+ (void)PBArrayAdd_fbnickName;
+ (void)PBArrayAdd_owner;
+ (void)PBArrayAdd_certificationInfo;
+ (void)PBArrayAdd_certificationFlag;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_chatRoomData;
+ (void)PBArrayAdd_chatRoomStatus;
+ (void)PBArrayAdd_chatRoomMemList;
+ (void)PBArrayAdd_baseContact;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiDeleteFlag; // @synthesize m_uiDeleteFlag=_m_uiDeleteFlag;
@property(retain, nonatomic) NSString *m_textStatusExtInfo; // @synthesize m_textStatusExtInfo=_m_textStatusExtInfo;
@property(retain, nonatomic) NSString *m_textStatusID; // @synthesize m_textStatusID=_m_textStatusID;
@property(nonatomic) unsigned int chatRoomDetailStatus; // @synthesize chatRoomDetailStatus=_chatRoomDetailStatus;
@property(retain, nonatomic) NSString *openIMDescId; // @synthesize openIMDescId=_openIMDescId;
@property(retain, nonatomic) NSString *openIMAppid; // @synthesize openIMAppid=_openIMAppid;
@property(nonatomic) unsigned int isShowRedDot; // @synthesize isShowRedDot=_isShowRedDot;
@property(retain, nonatomic) NSString *brandIconUrl; // @synthesize brandIconUrl=_brandIconUrl;
@property(nonatomic) unsigned int brandSubscriptionSettings; // @synthesize brandSubscriptionSettings=_brandSubscriptionSettings;
@property(retain, nonatomic) NSString *brandSubscriptConfigUrl; // @synthesize brandSubscriptConfigUrl=_brandSubscriptConfigUrl;
@property(retain, nonatomic) NSString *externalInfo; // @synthesize externalInfo=_externalInfo;
@property(retain, nonatomic) NSString *wcbgimgId; // @synthesize wcbgimgId=_wcbgimgId;
@property(nonatomic) unsigned int wcflag; // @synthesize wcflag=_wcflag;
@property(retain, nonatomic) NSString *wcbgimgObjectId; // @synthesize wcbgimgObjectId=_wcbgimgObjectId;
@property(nonatomic) unsigned int needUpdate; // @synthesize needUpdate=_needUpdate;
@property(retain, nonatomic) NSString *fbid; // @synthesize fbid=_fbid;
@property(retain, nonatomic) NSString *fbnickName; // @synthesize fbnickName=_fbnickName;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSString *certificationInfo; // @synthesize certificationInfo=_certificationInfo;
@property(nonatomic) unsigned int certificationFlag; // @synthesize certificationFlag=_certificationFlag;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *chatRoomData; // @synthesize chatRoomData=_chatRoomData;
@property(nonatomic) unsigned int chatRoomStatus; // @synthesize chatRoomStatus=_chatRoomStatus;
@property(retain, nonatomic) NSString *chatRoomMemList; // @synthesize chatRoomMemList=_chatRoomMemList;
@property(retain, nonatomic) PBBaseContact *baseContact; // @synthesize baseContact=_baseContact;
- (id)getPBPropertyTable;
- (void)setFromCContact:(id)arg1;
- (id)toCContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

