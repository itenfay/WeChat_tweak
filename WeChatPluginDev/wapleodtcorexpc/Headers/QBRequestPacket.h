//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSDictionary, NSNumber, NSString;

@interface QBRequestPacket
{
    NSNumber *_iVersion;
    NSNumber *_cPacketType;
    NSNumber *_iMessageType;
    NSNumber *_iRequestId;
    NSString *_sServantName;
    NSString *_sFuncName;
    NSData *_sBuffer;
    NSNumber *_iTimeout;
    NSDictionary *_context;
    NSDictionary *_status;
}

+ (id)generateRequestID;
@property(retain, nonatomic) NSDictionary *status; // @synthesize status=_status;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) NSNumber *iTimeout; // @synthesize iTimeout=_iTimeout;
@property(retain, nonatomic) NSData *sBuffer; // @synthesize sBuffer=_sBuffer;
@property(retain, nonatomic) NSString *sFuncName; // @synthesize sFuncName=_sFuncName;
@property(retain, nonatomic) NSString *sServantName; // @synthesize sServantName=_sServantName;
@property(retain, nonatomic) NSNumber *iRequestId; // @synthesize iRequestId=_iRequestId;
@property(retain, nonatomic) NSNumber *iMessageType; // @synthesize iMessageType=_iMessageType;
@property(retain, nonatomic) NSNumber *cPacketType; // @synthesize cPacketType=_cPacketType;
@property(retain, nonatomic) NSNumber *iVersion; // @synthesize iVersion=_iVersion;
- (void).cxx_destruct;
- (void)__unpack:(id)arg1;
- (void)__pack:(id)arg1;
- (id)init;

@end

