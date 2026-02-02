//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface WeAppSearchGuideReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *extReqParams; // @dynamic extReqParams;
@property(nonatomic) unsigned int h5Version; // @dynamic h5Version;
@property(nonatomic) double locationX; // @dynamic locationX;
@property(nonatomic) double locationY; // @dynamic locationY;
@property(retain, nonatomic) NSString *nettype; // @dynamic nettype;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

