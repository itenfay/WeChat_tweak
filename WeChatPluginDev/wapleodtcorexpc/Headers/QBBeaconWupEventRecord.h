//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QBBeaconWupEventRecord
{
    _Bool _jcev2_p_3_r_eventResult;
    int _jcev2_p_8_r_eventType;
    NSString *_jcev2_p_0_o_apn;
    NSString *_jcev2_p_1_o_srcIp;
    NSString *_jcev2_p_2_o_eventName;
    long long _jcev2_p_4_r_packageSize;
    long long _jcev2_p_5_r_cosumeTime;
    NSString *_jcev2_p_6_o_eventValue;
    long long _jcev2_p_7_r_eventTime;
}

+ (id)jceType;
@property(nonatomic, getter=eventType, setter=setEventType:) int jcev2_p_8_r_eventType; // @synthesize jcev2_p_8_r_eventType=_jcev2_p_8_r_eventType;
@property(nonatomic, getter=eventTime, setter=setEventTime:) long long jcev2_p_7_r_eventTime; // @synthesize jcev2_p_7_r_eventTime=_jcev2_p_7_r_eventTime;
@property(retain, nonatomic, getter=eventValue, setter=setEventValue:) NSString *jcev2_p_6_o_eventValue; // @synthesize jcev2_p_6_o_eventValue=_jcev2_p_6_o_eventValue;
@property(nonatomic, getter=cosumeTime, setter=setCosumeTime:) long long jcev2_p_5_r_cosumeTime; // @synthesize jcev2_p_5_r_cosumeTime=_jcev2_p_5_r_cosumeTime;
@property(nonatomic, getter=packageSize, setter=setPackageSize:) long long jcev2_p_4_r_packageSize; // @synthesize jcev2_p_4_r_packageSize=_jcev2_p_4_r_packageSize;
@property(nonatomic, getter=eventResult, setter=setEventResult:) _Bool jcev2_p_3_r_eventResult; // @synthesize jcev2_p_3_r_eventResult=_jcev2_p_3_r_eventResult;
@property(retain, nonatomic, getter=eventName, setter=setEventName:) NSString *jcev2_p_2_o_eventName; // @synthesize jcev2_p_2_o_eventName=_jcev2_p_2_o_eventName;
@property(retain, nonatomic, getter=srcIp, setter=setSrcIp:) NSString *jcev2_p_1_o_srcIp; // @synthesize jcev2_p_1_o_srcIp=_jcev2_p_1_o_srcIp;
@property(retain, nonatomic, getter=apn, setter=setApn:) NSString *jcev2_p_0_o_apn; // @synthesize jcev2_p_0_o_apn=_jcev2_p_0_o_apn;
- (void).cxx_destruct;
- (id)init;

@end

