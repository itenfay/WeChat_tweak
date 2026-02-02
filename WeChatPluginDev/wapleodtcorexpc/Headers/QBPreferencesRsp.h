//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface QBPreferencesRsp
{
    int jcev2_p_0_r_iRspTime;
    NSArray *jcev2_p_1_o_vPreferencesKeyValue__b0x9i_VOQBPreferencesKeyValue;
    NSString *jcev2_p_2_o_sContentMd5;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sContentMd5, setter=setSContentMd5:) NSString *jcev2_p_2_o_sContentMd5; // @synthesize jcev2_p_2_o_sContentMd5;
@property(retain, nonatomic, getter=vPreferencesKeyValue, setter=setVPreferencesKeyValue:) NSArray *jcev2_p_1_o_vPreferencesKeyValue__b0x9i_VOQBPreferencesKeyValue; // @synthesize jcev2_p_1_o_vPreferencesKeyValue__b0x9i_VOQBPreferencesKeyValue;
@property(nonatomic, getter=iRspTime, setter=setIRspTime:) int jcev2_p_0_r_iRspTime; // @synthesize jcev2_p_0_r_iRspTime;
- (void).cxx_destruct;
- (id)init;

@end

