//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ShakePeopleItem : NSObject
{
    unsigned int _m_uiSex;
    unsigned int _m_uiScene;
    unsigned int _m_uiVerifyFlag;
    int _m_iAlbumFlag;
    unsigned int _m_uiBrandSubscriptionSettings;
    unsigned int _m_createTime;
    NSString *_m_nsUserName;
    NSString *_m_nsNickName;
    NSString *_m_nsCountry;
    NSString *_m_nsProvince;
    NSString *_m_nsCity;
    NSString *_m_nsDistance;
    NSString *_m_nsSignature;
    NSString *_m_nsVerifyInfo;
    NSString *_m_nsVerifyContent;
    NSString *_m_nsWCBGImgObjectID;
    NSString *_m_pcAlbumBGImgID;
    NSString *_m_nsExternalInfo;
    NSString *_m_nsBrandSubscriptConfigUrl;
    NSString *_m_nsBrandIconUrl;
    NSString *_m_headImgUrl;
    NSString *_m_nsHeadHDImgUrl;
    NSString *_m_nsAntispamTicket;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_nsAntispamTicket;
+ (void)PBArrayAdd_m_nsHeadHDImgUrl;
+ (void)PBArrayAdd_m_headImgUrl;
+ (void)PBArrayAdd_m_createTime;
+ (void)PBArrayAdd_m_nsBrandIconUrl;
+ (void)PBArrayAdd_m_uiBrandSubscriptionSettings;
+ (void)PBArrayAdd_m_nsBrandSubscriptConfigUrl;
+ (void)PBArrayAdd_m_nsExternalInfo;
+ (void)PBArrayAdd_m_pcAlbumBGImgID;
+ (void)PBArrayAdd_m_iAlbumFlag;
+ (void)PBArrayAdd_m_nsWCBGImgObjectID;
+ (void)PBArrayAdd_m_nsVerifyContent;
+ (void)PBArrayAdd_m_nsVerifyInfo;
+ (void)PBArrayAdd_m_uiVerifyFlag;
+ (void)PBArrayAdd_m_uiScene;
+ (void)PBArrayAdd_m_nsSignature;
+ (void)PBArrayAdd_m_nsDistance;
+ (void)PBArrayAdd_m_uiSex;
+ (void)PBArrayAdd_m_nsCity;
+ (void)PBArrayAdd_m_nsProvince;
+ (void)PBArrayAdd_m_nsCountry;
+ (void)PBArrayAdd_m_nsNickName;
+ (void)PBArrayAdd_m_nsUserName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsAntispamTicket; // @synthesize m_nsAntispamTicket=_m_nsAntispamTicket;
@property(retain, nonatomic) NSString *m_nsHeadHDImgUrl; // @synthesize m_nsHeadHDImgUrl=_m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString *m_headImgUrl; // @synthesize m_headImgUrl=_m_headImgUrl;
@property(nonatomic) unsigned int m_createTime; // @synthesize m_createTime=_m_createTime;
@property(retain, nonatomic) NSString *m_nsBrandIconUrl; // @synthesize m_nsBrandIconUrl=_m_nsBrandIconUrl;
@property(nonatomic) unsigned int m_uiBrandSubscriptionSettings; // @synthesize m_uiBrandSubscriptionSettings=_m_uiBrandSubscriptionSettings;
@property(retain, nonatomic) NSString *m_nsBrandSubscriptConfigUrl; // @synthesize m_nsBrandSubscriptConfigUrl=_m_nsBrandSubscriptConfigUrl;
@property(retain, nonatomic) NSString *m_nsExternalInfo; // @synthesize m_nsExternalInfo=_m_nsExternalInfo;
@property(retain, nonatomic) NSString *m_pcAlbumBGImgID; // @synthesize m_pcAlbumBGImgID=_m_pcAlbumBGImgID;
@property(nonatomic) int m_iAlbumFlag; // @synthesize m_iAlbumFlag=_m_iAlbumFlag;
@property(retain, nonatomic) NSString *m_nsWCBGImgObjectID; // @synthesize m_nsWCBGImgObjectID=_m_nsWCBGImgObjectID;
@property(retain, nonatomic) NSString *m_nsVerifyContent; // @synthesize m_nsVerifyContent=_m_nsVerifyContent;
@property(retain, nonatomic) NSString *m_nsVerifyInfo; // @synthesize m_nsVerifyInfo=_m_nsVerifyInfo;
@property(nonatomic) unsigned int m_uiVerifyFlag; // @synthesize m_uiVerifyFlag=_m_uiVerifyFlag;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene=_m_uiScene;
@property(retain, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature=_m_nsSignature;
@property(retain, nonatomic) NSString *m_nsDistance; // @synthesize m_nsDistance=_m_nsDistance;
@property(nonatomic) unsigned int m_uiSex; // @synthesize m_uiSex=_m_uiSex;
@property(retain, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity=_m_nsCity;
@property(retain, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince=_m_nsProvince;
@property(retain, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry=_m_nsCountry;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName=_m_nsNickName;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName=_m_nsUserName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (void)preInit;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

