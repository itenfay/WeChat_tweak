//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface QBRouteJoinIPInfo
{
    int jcev2_p_2_o_iTotalPollNum;
    int jcev2_p_3_o_iLifePeriod;
    long long jcev2_p_0_o_eIPType;
    NSArray *jcev2_p_1_o_vIPList__b0x9i_VONSString;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=iLifePeriod, setter=setILifePeriod:) int jcev2_p_3_o_iLifePeriod; // @synthesize jcev2_p_3_o_iLifePeriod;
@property(nonatomic, getter=iTotalPollNum, setter=setITotalPollNum:) int jcev2_p_2_o_iTotalPollNum; // @synthesize jcev2_p_2_o_iTotalPollNum;
@property(retain, nonatomic, getter=vIPList, setter=setVIPList:) NSArray *jcev2_p_1_o_vIPList__b0x9i_VONSString; // @synthesize jcev2_p_1_o_vIPList__b0x9i_VONSString;
@property(nonatomic, getter=eIPType, setter=setEIPType:) long long jcev2_p_0_o_eIPType; // @synthesize jcev2_p_0_o_eIPType;
- (void).cxx_destruct;
- (id)init;

@end

