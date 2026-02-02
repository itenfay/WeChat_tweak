//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QBTBSLogRequest
{
    NSString *jcev2_p_0_r_sGUID;
    NSString *jcev2_p_1_r_sStr;
    NSString *jcev2_p_2_o_sRandomKey;
    NSString *jcev2_p_3_o_sBusinessID;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sBusinessID, setter=setSBusinessID:) NSString *jcev2_p_3_o_sBusinessID; // @synthesize jcev2_p_3_o_sBusinessID;
@property(retain, nonatomic, getter=sRandomKey, setter=setSRandomKey:) NSString *jcev2_p_2_o_sRandomKey; // @synthesize jcev2_p_2_o_sRandomKey;
@property(retain, nonatomic, getter=sStr, setter=setSStr:) NSString *jcev2_p_1_r_sStr; // @synthesize jcev2_p_1_r_sStr;
@property(retain, nonatomic, getter=sGUID, setter=setSGUID:) NSString *jcev2_p_0_r_sGUID; // @synthesize jcev2_p_0_r_sGUID;
- (void).cxx_destruct;
- (id)init;

@end

