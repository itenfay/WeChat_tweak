//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface AppMsgCommentListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *comment; // @dynamic comment;
@property(nonatomic) unsigned int enabled; // @dynamic enabled;
@property(nonatomic) unsigned int isFans; // @dynamic isFans;
@property(nonatomic) int nextOffset; // @dynamic nextOffset;
@property(nonatomic) _Bool onlyFansCanComment; // @dynamic onlyFansCanComment;

@end

