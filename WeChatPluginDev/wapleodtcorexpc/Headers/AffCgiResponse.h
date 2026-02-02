//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface AffCgiResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(nonatomic) int errorType; // @dynamic errorType;
@property(nonatomic) unsigned long long taskId; // @dynamic taskId;

@end

