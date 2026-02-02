//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAddressBaseAddress : NSObject
{
    NSString *m_nsNationalCode;
    unsigned int m_uiAddressID;
    NSString *m_nsUserName;
    NSString *m_nsTelNumber;
    NSString *m_nsAddressStageID;
    NSString *m_nsAddressPostCode;
    NSString *m_nsAddressProviceFirstStageName;
    NSString *m_nsAddressCitySecondStageName;
    NSString *m_nsAddressCountiesThirdStageName;
    NSString *m_nsAddressStreetFourthStageName;
    NSString *m_nsAddressDetailInfo;
    NSString *m_nsEncryptData;
    NSString *m_nsEncryptType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsEncryptType; // @synthesize m_nsEncryptType;
@property(retain, nonatomic) NSString *m_nsEncryptData; // @synthesize m_nsEncryptData;
@property(readonly, nonatomic) unsigned int m_uiAddressID; // @synthesize m_uiAddressID;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
@property(retain, nonatomic) NSString *m_nsTelNumber; // @synthesize m_nsTelNumber;
@property(retain, nonatomic) NSString *m_nsAddressStageID; // @synthesize m_nsAddressStageID;
@property(retain, nonatomic) NSString *m_nsAddressProviceFirstStageName; // @synthesize m_nsAddressProviceFirstStageName;
@property(retain, nonatomic) NSString *m_nsAddressPostCode; // @synthesize m_nsAddressPostCode;
@property(retain, nonatomic) NSString *m_nsAddressDetailInfo; // @synthesize m_nsAddressDetailInfo;
@property(retain, nonatomic) NSString *m_nsAddressStreetFourthStageName; // @synthesize m_nsAddressStreetFourthStageName;
@property(retain, nonatomic) NSString *m_nsAddressCountiesThirdStageName; // @synthesize m_nsAddressCountiesThirdStageName;
@property(retain, nonatomic) NSString *m_nsAddressCitySecondStageName; // @synthesize m_nsAddressCitySecondStageName;
@property(retain, nonatomic) NSString *m_nsNationalCode; // @synthesize m_nsNationalCode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyAddress;
- (id)initWithID:(unsigned int)arg1;

@end

