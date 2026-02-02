//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetUserVideoListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *checkHasNewTicket; // @dynamic checkHasNewTicket;
@property(nonatomic) unsigned int limit; // @dynamic limit;
@property(nonatomic) unsigned long long offset; // @dynamic offset;

@end

