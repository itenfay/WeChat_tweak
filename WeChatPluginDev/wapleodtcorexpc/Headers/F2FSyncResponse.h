//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface F2FSyncResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long key; // @dynamic key;
@property(nonatomic) unsigned long long sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSMutableArray *xchgList; // @dynamic xchgList;

@end

