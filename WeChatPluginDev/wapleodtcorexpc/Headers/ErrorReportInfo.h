//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ErrorReportInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *abnormalFieldName; // @dynamic abnormalFieldName;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(nonatomic) unsigned int errorLevel; // @dynamic errorLevel;
@property(nonatomic) unsigned int errorType; // @dynamic errorType;
@property(retain, nonatomic) NSString *extraInfo; // @dynamic extraInfo;
@property(retain, nonatomic) NSString *methodName; // @dynamic methodName;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) unsigned long long role; // @dynamic role;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int stage; // @dynamic stage;
@property(nonatomic) unsigned int timestamp; // @dynamic timestamp;

@end

