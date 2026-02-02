//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface TextStatusGetSelfLikedsResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *context; // @dynamic context;
@property(nonatomic) _Bool continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSMutableArray *likeds; // @dynamic likeds;
@property(retain, nonatomic) NSMutableArray *referenceds; // @dynamic referenceds;

@end

