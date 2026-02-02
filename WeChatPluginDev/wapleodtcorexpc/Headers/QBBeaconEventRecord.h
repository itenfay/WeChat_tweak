//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface QBBeaconEventRecord
{
    _Bool isSuccess;
    _Bool isRealEvent;
    int eventType;
    NSString *apn;
    NSString *srcIp;
    NSString *eventName;
    NSString *eventValue;
    long long eventTime;
    long long elapse;
    long long packageSize;
    NSMutableDictionary *params;
}

@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params;
@property(nonatomic) _Bool isRealEvent; // @synthesize isRealEvent;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess;
@property(nonatomic) long long packageSize; // @synthesize packageSize;
@property(nonatomic) long long elapse; // @synthesize elapse;
@property(nonatomic) int eventType; // @synthesize eventType;
@property(nonatomic) long long eventTime; // @synthesize eventTime;
@property(retain, nonatomic) NSString *eventValue; // @synthesize eventValue;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName;
@property(retain, nonatomic) NSString *srcIp; // @synthesize srcIp;
@property(retain, nonatomic) NSString *apn; // @synthesize apn;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createWUPModel;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

