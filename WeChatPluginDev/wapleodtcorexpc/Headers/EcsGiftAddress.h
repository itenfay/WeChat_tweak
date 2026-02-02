//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EcsGiftAddress
{
    NSString *_userName;
    NSString *_postalCode;
    NSString *_provinceName;
    NSString *_cityName;
    NSString *_countyName;
    NSString *_detailInfo;
    NSString *_nationalCode;
    NSString *_telNumber;
    NSString *_houseNumber;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *houseNumber; // @synthesize houseNumber=_houseNumber;
@property(retain, nonatomic) NSString *telNumber; // @synthesize telNumber=_telNumber;
@property(retain, nonatomic) NSString *nationalCode; // @synthesize nationalCode=_nationalCode;
@property(retain, nonatomic) NSString *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) NSString *countyName; // @synthesize countyName=_countyName;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *provinceName; // @synthesize provinceName=_provinceName;
@property(retain, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

