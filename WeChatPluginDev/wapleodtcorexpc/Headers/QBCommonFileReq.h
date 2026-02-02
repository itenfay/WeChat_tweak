//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QBCommonFileReq
{
    NSString *jcev2_p_0_r_sGUID;
    NSString *jcev2_p_1_r_sQUA2;
    NSString *jcev2_p_2_o_sModuleName;
    NSString *jcev2_p_3_o_sContentMd5;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sContentMd5, setter=setSContentMd5:) NSString *jcev2_p_3_o_sContentMd5; // @synthesize jcev2_p_3_o_sContentMd5;
@property(retain, nonatomic, getter=sModuleName, setter=setSModuleName:) NSString *jcev2_p_2_o_sModuleName; // @synthesize jcev2_p_2_o_sModuleName;
@property(retain, nonatomic, getter=sQUA2, setter=setSQUA2:) NSString *jcev2_p_1_r_sQUA2; // @synthesize jcev2_p_1_r_sQUA2;
@property(retain, nonatomic, getter=sGUID, setter=setSGUID:) NSString *jcev2_p_0_r_sGUID; // @synthesize jcev2_p_0_r_sGUID;
- (void).cxx_destruct;
- (id)init;

@end

