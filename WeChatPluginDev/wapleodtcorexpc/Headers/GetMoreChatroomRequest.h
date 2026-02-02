//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, Lbs, NSString;

@interface GetMoreChatroomRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *chatroomFilter; // @dynamic chatroomFilter;
@property(retain, nonatomic) Lbs *lbsInfo; // @dynamic lbsInfo;
@property(nonatomic) unsigned int limit; // @dynamic limit;

@end

