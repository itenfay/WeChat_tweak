//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest;

@interface GetMktInvalidTicketHomePageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int reqNum; // @dynamic reqNum;

@end

