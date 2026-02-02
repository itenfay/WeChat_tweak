//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface QBDomainWhiteListRsp
{
    int jcev2_p_0_r_iDomainTime;
    NSDictionary *jcev2_p_1_o_mTypeDomain__b0x9i_M09ONSNumberVONSString;
    NSString *jcev2_p_2_o_sContentMd5;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sContentMd5, setter=setSContentMd5:) NSString *jcev2_p_2_o_sContentMd5; // @synthesize jcev2_p_2_o_sContentMd5;
@property(retain, nonatomic, getter=mTypeDomain, setter=setMTypeDomain:) NSDictionary *jcev2_p_1_o_mTypeDomain__b0x9i_M09ONSNumberVONSString; // @synthesize jcev2_p_1_o_mTypeDomain__b0x9i_M09ONSNumberVONSString;
@property(nonatomic, getter=iDomainTime, setter=setIDomainTime:) int jcev2_p_0_r_iDomainTime; // @synthesize jcev2_p_0_r_iDomainTime;
- (void).cxx_destruct;
- (id)init;

@end

