//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface ScanQrcodeEventReportReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int cls; // @dynamic cls;
@property(retain, nonatomic) NSString *clsScore; // @dynamic clsScore;
@property(nonatomic) int color; // @dynamic color;
@property(retain, nonatomic) NSString *colorScore; // @dynamic colorScore;
@property(retain, nonatomic) NSString *msgId; // @dynamic msgId;
@property(retain, nonatomic) NSString *ocr; // @dynamic ocr;
@property(nonatomic) int qrcodeType; // @dynamic qrcodeType;
@property(nonatomic) unsigned int requestId; // @dynamic requestId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

