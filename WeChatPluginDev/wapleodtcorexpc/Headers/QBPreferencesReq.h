//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QBPreferencesReq
{
    int jcev2_p_0_r_iReqTime;
    NSString *jcev2_p_1_o_sQUA;
    NSString *jcev2_p_2_o_sGUID;
    NSString *jcev2_p_3_o_sQua2ExInfo;
    NSString *jcev2_p_4_o_sContentMd5;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sContentMd5, setter=setSContentMd5:) NSString *jcev2_p_4_o_sContentMd5; // @synthesize jcev2_p_4_o_sContentMd5;
@property(retain, nonatomic, getter=sQua2ExInfo, setter=setSQua2ExInfo:) NSString *jcev2_p_3_o_sQua2ExInfo; // @synthesize jcev2_p_3_o_sQua2ExInfo;
@property(retain, nonatomic, getter=sGUID, setter=setSGUID:) NSString *jcev2_p_2_o_sGUID; // @synthesize jcev2_p_2_o_sGUID;
@property(retain, nonatomic, getter=sQUA, setter=setSQUA:) NSString *jcev2_p_1_o_sQUA; // @synthesize jcev2_p_1_o_sQUA;
@property(nonatomic, getter=iReqTime, setter=setIReqTime:) int jcev2_p_0_r_iReqTime; // @synthesize jcev2_p_0_r_iReqTime;
- (void).cxx_destruct;
- (id)init;

@end

