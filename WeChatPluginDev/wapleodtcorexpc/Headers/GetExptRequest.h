//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray;

@interface GetExptRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int lastGetSvrSecond; // @dynamic lastGetSvrSecond;
@property(retain, nonatomic) NSMutableArray *localExptList; // @dynamic localExptList;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

