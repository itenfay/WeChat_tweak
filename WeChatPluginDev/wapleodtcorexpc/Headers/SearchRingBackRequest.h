//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface SearchRingBackRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) NSString *queryContent; // @dynamic queryContent;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSData *udfbuf; // @dynamic udfbuf;

@end

