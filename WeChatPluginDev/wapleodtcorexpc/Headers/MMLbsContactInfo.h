//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLbsContactInfo : NSObject
{
    NSString *UserName;
    NSString *NickName;
    NSString *Country;
    NSString *Province;
    NSString *City;
    NSString *Signature;
    NSString *Distance;
    int Sex;
    unsigned int ImgStatus;
    unsigned int CertificationFlag;
    NSString *CertificationInfo;
    NSString *m_nsAlias;
    NSString *m_nsWCBGImgObjectID;
    long long m_iAlbumFlag;
    NSString *m_pcAlbumBGImgID;
    NSString *m_nsExternalInfo;
    NSString *m_nsBrandSubscriptConfigUrl;
    unsigned int m_uiBrandSubscriptionSettings;
    NSString *m_nsBrandIconUrl;
    NSString *m_nsHeadImgUrl;
    NSString *m_nsHeadHDImgUrl;
    _Bool m_isFriend;
    NSString *m_displayName;
    NSString *m_nsAntispamTicket;
    unsigned int _finderFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int finderFlag; // @synthesize finderFlag=_finderFlag;
@property(retain, nonatomic) NSString *m_nsAntispamTicket; // @synthesize m_nsAntispamTicket;
@property(copy, nonatomic) NSString *m_displayName; // @synthesize m_displayName;
@property(nonatomic) _Bool m_isFriend; // @synthesize m_isFriend;
@property(retain, nonatomic) NSString *m_nsBrandIconUrl; // @synthesize m_nsBrandIconUrl;
@property(nonatomic) unsigned int m_uiBrandSubscriptionSettings; // @synthesize m_uiBrandSubscriptionSettings;
@property(retain, nonatomic) NSString *m_nsBrandSubscriptConfigUrl; // @synthesize m_nsBrandSubscriptConfigUrl;
@property(retain, nonatomic) NSString *m_nsExternalInfo; // @synthesize m_nsExternalInfo;
@property(retain, nonatomic) NSString *m_nsHeadHDImgUrl; // @synthesize m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property(retain, nonatomic) NSString *m_pcAlbumBGImgID; // @synthesize m_pcAlbumBGImgID;
@property(nonatomic) long long m_iAlbumFlag; // @synthesize m_iAlbumFlag;
@property(retain, nonatomic) NSString *m_nsWCBGImgObjectID; // @synthesize m_nsWCBGImgObjectID;
@property(retain, nonatomic) NSString *m_nsAlias; // @synthesize m_nsAlias;
@property(retain, nonatomic) NSString *CertificationInfo; // @synthesize CertificationInfo;
@property(nonatomic) unsigned int CertificationFlag; // @synthesize CertificationFlag;
@property(nonatomic) unsigned int imgStatus; // @synthesize imgStatus=ImgStatus;
@property(nonatomic) int sex; // @synthesize sex=Sex;
@property(retain, nonatomic) NSString *distance; // @synthesize distance=Distance;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=Signature;
@property(retain, nonatomic) NSString *city; // @synthesize city=City;
@property(retain, nonatomic) NSString *province; // @synthesize province=Province;
@property(retain, nonatomic) NSString *country; // @synthesize country=Country;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=NickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=UserName;
- (_Bool)isInMyContactList;
- (id)description;
- (id)keyPaths;
- (id)initWithPBLbsContactInfo:(id)arg1;
- (id)init;

@end

