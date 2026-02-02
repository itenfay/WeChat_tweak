//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QBBeaconResponsePackage : NSObject
{
    BOOL result;
    BOOL encryType;
    BOOL zipType;
    int cmd;
    long long serverTime;
    NSObject *sBuffer;
    NSString *gateWayIp;
    NSString *encKey;
    NSString *encPubKey;
}

+ (id)modelObjectWithCmd:(unsigned long long)arg1 data:(id)arg2;
+ (id)initWithWUPModel:(id)arg1;
@property(retain, nonatomic) NSString *encPubKey; // @synthesize encPubKey;
@property(retain, nonatomic) NSString *encKey; // @synthesize encKey;
@property(nonatomic) BOOL zipType; // @synthesize zipType;
@property(nonatomic) BOOL encryType; // @synthesize encryType;
@property(retain, nonatomic) NSString *gateWayIp; // @synthesize gateWayIp;
@property(retain, nonatomic) NSObject *sBuffer; // @synthesize sBuffer;
@property(nonatomic) long long serverTime; // @synthesize serverTime;
@property(nonatomic) int cmd; // @synthesize cmd;
@property(nonatomic) BOOL result; // @synthesize result;
- (void).cxx_destruct;
- (void)dealloc;

@end

