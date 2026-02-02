//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface QBGuidRsp
{
    NSData *jcev2_p_0_o_vGuid;
    NSData *jcev2_p_1_o_vValidation;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=vValidation, setter=setVValidation:) NSData *jcev2_p_1_o_vValidation; // @synthesize jcev2_p_1_o_vValidation;
@property(retain, nonatomic, getter=vGuid, setter=setVGuid:) NSData *jcev2_p_0_o_vGuid; // @synthesize jcev2_p_0_o_vGuid;
- (void).cxx_destruct;
- (id)init;

@end

