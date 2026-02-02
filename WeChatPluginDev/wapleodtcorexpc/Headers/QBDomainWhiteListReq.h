//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QBDomainWhiteListReq
{
    int jcev2_p_0_r_iDomainTime;
    NSString *jcev2_p_1_r_sQUA;
    NSString *jcev2_p_2_r_sGUID;
    NSString *jcev2_p_3_o_sQua2ExInfo;
    NSString *jcev2_p_4_o_sContentMd5;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sContentMd5, setter=setSContentMd5:) NSString *jcev2_p_4_o_sContentMd5; // @synthesize jcev2_p_4_o_sContentMd5;
@property(retain, nonatomic, getter=sQua2ExInfo, setter=setSQua2ExInfo:) NSString *jcev2_p_3_o_sQua2ExInfo; // @synthesize jcev2_p_3_o_sQua2ExInfo;
@property(retain, nonatomic, getter=sGUID, setter=setSGUID:) NSString *jcev2_p_2_r_sGUID; // @synthesize jcev2_p_2_r_sGUID;
@property(retain, nonatomic, getter=sQUA, setter=setSQUA:) NSString *jcev2_p_1_r_sQUA; // @synthesize jcev2_p_1_r_sQUA;
@property(nonatomic, getter=iDomainTime, setter=setIDomainTime:) int jcev2_p_0_r_iDomainTime; // @synthesize jcev2_p_0_r_iDomainTime;
- (void).cxx_destruct;
- (id)init;

@end

