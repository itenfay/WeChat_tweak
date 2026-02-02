//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSString;

@interface QBBeaconWupCommonStrategy
{
    int _jcev2_p_1_r_queryInterval;
    NSArray *_jcev2_p_0_o_moduleList__b0x9i_VOQBBeaconWupModuleStrategy;
    NSString *_jcev2_p_2_o_url;
    NSDictionary *_jcev2_p_3_o_cloudParas__b0x9i_M09ONSStringONSString;
}

+ (id)jceType;
@property(retain, nonatomic, getter=cloudParas, setter=setCloudParas:) NSDictionary *jcev2_p_3_o_cloudParas__b0x9i_M09ONSStringONSString; // @synthesize jcev2_p_3_o_cloudParas__b0x9i_M09ONSStringONSString=_jcev2_p_3_o_cloudParas__b0x9i_M09ONSStringONSString;
@property(retain, nonatomic, getter=url, setter=setUrl:) NSString *jcev2_p_2_o_url; // @synthesize jcev2_p_2_o_url=_jcev2_p_2_o_url;
@property(nonatomic, getter=queryInterval, setter=setQueryInterval:) int jcev2_p_1_r_queryInterval; // @synthesize jcev2_p_1_r_queryInterval=_jcev2_p_1_r_queryInterval;
@property(retain, nonatomic, getter=moduleList, setter=setModuleList:) NSArray *jcev2_p_0_o_moduleList__b0x9i_VOQBBeaconWupModuleStrategy; // @synthesize jcev2_p_0_o_moduleList__b0x9i_VOQBBeaconWupModuleStrategy=_jcev2_p_0_o_moduleList__b0x9i_VOQBBeaconWupModuleStrategy;
- (void).cxx_destruct;
- (id)init;

@end

