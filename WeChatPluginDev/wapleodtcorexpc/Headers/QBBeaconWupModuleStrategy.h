//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSString;

@interface QBBeaconWupModuleStrategy
{
    BOOL _jcev2_p_0_r_mId;
    BOOL _jcev2_p_1_r_onOff;
    NSString *_jcev2_p_2_o_url;
    NSDictionary *_jcev2_p_3_o_detail__b0x9i_M09ONSStringONSString;
    NSArray *_jcev2_p_4_o_preventEventCode__b0x9i_VONSString;
    NSArray *_jcev2_p_6_o_sampleEvent__b0x9i_VONSString;
}

+ (id)jceType;
@property(retain, nonatomic, getter=sampleEvent, setter=setSampleEvent:) NSArray *jcev2_p_6_o_sampleEvent__b0x9i_VONSString; // @synthesize jcev2_p_6_o_sampleEvent__b0x9i_VONSString=_jcev2_p_6_o_sampleEvent__b0x9i_VONSString;
@property(retain, nonatomic, getter=preventEventCode, setter=setPreventEventCode:) NSArray *jcev2_p_4_o_preventEventCode__b0x9i_VONSString; // @synthesize jcev2_p_4_o_preventEventCode__b0x9i_VONSString=_jcev2_p_4_o_preventEventCode__b0x9i_VONSString;
@property(retain, nonatomic, getter=detail, setter=setDetail:) NSDictionary *jcev2_p_3_o_detail__b0x9i_M09ONSStringONSString; // @synthesize jcev2_p_3_o_detail__b0x9i_M09ONSStringONSString=_jcev2_p_3_o_detail__b0x9i_M09ONSStringONSString;
@property(retain, nonatomic, getter=url, setter=setUrl:) NSString *jcev2_p_2_o_url; // @synthesize jcev2_p_2_o_url=_jcev2_p_2_o_url;
@property(nonatomic, getter=onOff, setter=setOnOff:) BOOL jcev2_p_1_r_onOff; // @synthesize jcev2_p_1_r_onOff=_jcev2_p_1_r_onOff;
@property(nonatomic, getter=mId, setter=setMId:) BOOL jcev2_p_0_r_mId; // @synthesize jcev2_p_0_r_mId=_jcev2_p_0_r_mId;
- (void).cxx_destruct;
- (id)init;

@end

