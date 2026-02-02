//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QBTBSLogResponse
{
    long long jcev2_p_0_r_eRet;
    NSString *jcev2_p_1_o_sMsg;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sMsg, setter=setSMsg:) NSString *jcev2_p_1_o_sMsg; // @synthesize jcev2_p_1_o_sMsg;
@property(nonatomic, getter=eRet, setter=setERet:) long long jcev2_p_0_r_eRet; // @synthesize jcev2_p_0_r_eRet;
- (void).cxx_destruct;
- (id)init;

@end

