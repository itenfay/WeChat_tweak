//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface FinderGetContactListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *contactList; // @dynamic contactList;
@property(retain, nonatomic) NSMutableArray *contactWxUsername; // @dynamic contactWxUsername;
@property(nonatomic) unsigned int nextRetryInterval; // @dynamic nextRetryInterval;

@end

