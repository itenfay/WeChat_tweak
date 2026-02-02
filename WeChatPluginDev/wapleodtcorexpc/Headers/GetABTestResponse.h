//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface GetABTestResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *experimentList; // @dynamic experimentList;
@property(retain, nonatomic) NSMutableArray *expiredexpid; // @dynamic expiredexpid;
@property(nonatomic) unsigned int internalTime; // @dynamic internalTime;
@property(nonatomic) unsigned int timestamp; // @dynamic timestamp;

@end

