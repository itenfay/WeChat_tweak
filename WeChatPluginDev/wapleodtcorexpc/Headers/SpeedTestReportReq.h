//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString, SpeedTestAddr;

@interface SpeedTestReportReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SpeedTestAddr *clientAddr; // @dynamic clientAddr;
@property(nonatomic) unsigned int connRetcode; // @dynamic connRetcode;
@property(nonatomic) unsigned int connTime; // @dynamic connTime;
@property(retain, nonatomic) NSData *ctx; // @dynamic ctx;
@property(retain, nonatomic) NSString *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) NSString *networkInfo; // @dynamic networkInfo;
@property(retain, nonatomic) NSString *networkType; // @dynamic networkType;
@property(retain, nonatomic) SpeedTestAddr *serverAddr; // @dynamic serverAddr;
@property(nonatomic) int transRetcode; // @dynamic transRetcode;
@property(nonatomic) unsigned int transTime; // @dynamic transTime;

@end

