//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface QBRouteIpListRsp
{
    BOOL jcev2_p_2_o_bProxy;
    int jcev2_p_4_o_iSubType;
    NSArray *jcev2_p_0_r_vIPInfos__b0x9i_VOQBRouteJoinIPInfo;
    NSString *jcev2_p_1_o_sApn;
    NSString *jcev2_p_3_o_sTypeName;
    NSString *jcev2_p_5_o_sExtraInfo;
    NSString *jcev2_p_6_o_sMCCMNC;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sMCCMNC, setter=setSMCCMNC:) NSString *jcev2_p_6_o_sMCCMNC; // @synthesize jcev2_p_6_o_sMCCMNC;
@property(retain, nonatomic, getter=sExtraInfo, setter=setSExtraInfo:) NSString *jcev2_p_5_o_sExtraInfo; // @synthesize jcev2_p_5_o_sExtraInfo;
@property(nonatomic, getter=iSubType, setter=setISubType:) int jcev2_p_4_o_iSubType; // @synthesize jcev2_p_4_o_iSubType;
@property(retain, nonatomic, getter=sTypeName, setter=setSTypeName:) NSString *jcev2_p_3_o_sTypeName; // @synthesize jcev2_p_3_o_sTypeName;
@property(nonatomic, getter=bProxy, setter=setBProxy:) BOOL jcev2_p_2_o_bProxy; // @synthesize jcev2_p_2_o_bProxy;
@property(retain, nonatomic, getter=sApn, setter=setSApn:) NSString *jcev2_p_1_o_sApn; // @synthesize jcev2_p_1_o_sApn;
@property(retain, nonatomic, getter=vIPInfos, setter=setVIPInfos:) NSArray *jcev2_p_0_r_vIPInfos__b0x9i_VOQBRouteJoinIPInfo; // @synthesize jcev2_p_0_r_vIPInfos__b0x9i_VOQBRouteJoinIPInfo;
- (void).cxx_destruct;
- (id)init;

@end

