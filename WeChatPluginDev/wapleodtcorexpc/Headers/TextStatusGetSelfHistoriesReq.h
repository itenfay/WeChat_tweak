//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSMutableArray;

@interface TextStatusGetSelfHistoriesReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *context; // @dynamic context;
@property(nonatomic) unsigned long long limit; // @dynamic limit;
@property(nonatomic) unsigned long long op; // @dynamic op;
@property(nonatomic) unsigned long long startKey; // @dynamic startKey;
@property(retain, nonatomic) NSMutableArray *statusIds; // @dynamic statusIds;

@end

