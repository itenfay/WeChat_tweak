//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MttWkMachinceInfo;

@interface MttWkMachinceInfoRsp
{
    int jcev2_p_0_o_rspCode;
    MttWkMachinceInfo *jcev2_p_1_o_stWkMachinceInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=stWkMachinceInfo, setter=setStWkMachinceInfo:) MttWkMachinceInfo *jcev2_p_1_o_stWkMachinceInfo; // @synthesize jcev2_p_1_o_stWkMachinceInfo;
@property(nonatomic, getter=rspCode, setter=setRspCode:) int jcev2_p_0_o_rspCode; // @synthesize jcev2_p_0_o_rspCode;
- (void).cxx_destruct;
- (id)init;

@end

