//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, QBWupUserBase;

@interface QBRouteIpListReq
{
    int jcev2_p_3_o_iSubType;
    QBWupUserBase *jcev2_p_0_r_stUB;
    NSArray *jcev2_p_1_r_vIPType__b0x9i_VONSNumber;
    NSString *jcev2_p_2_o_sTypeName;
    NSString *jcev2_p_4_o_sExtraInfo;
    NSString *jcev2_p_5_o_sMCCMNC;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sMCCMNC, setter=setSMCCMNC:) NSString *jcev2_p_5_o_sMCCMNC; // @synthesize jcev2_p_5_o_sMCCMNC;
@property(retain, nonatomic, getter=sExtraInfo, setter=setSExtraInfo:) NSString *jcev2_p_4_o_sExtraInfo; // @synthesize jcev2_p_4_o_sExtraInfo;
@property(nonatomic, getter=iSubType, setter=setISubType:) int jcev2_p_3_o_iSubType; // @synthesize jcev2_p_3_o_iSubType;
@property(retain, nonatomic, getter=sTypeName, setter=setSTypeName:) NSString *jcev2_p_2_o_sTypeName; // @synthesize jcev2_p_2_o_sTypeName;
@property(retain, nonatomic, getter=vIPType, setter=setVIPType:) NSArray *jcev2_p_1_r_vIPType__b0x9i_VONSNumber; // @synthesize jcev2_p_1_r_vIPType__b0x9i_VONSNumber;
@property(retain, nonatomic, getter=stUB, setter=setStUB:) QBWupUserBase *jcev2_p_0_r_stUB; // @synthesize jcev2_p_0_r_stUB;
- (void).cxx_destruct;
- (id)init;

@end

