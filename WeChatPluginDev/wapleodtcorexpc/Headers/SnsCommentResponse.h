//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, SnsObject, SnsTips;

@interface SnsCommentResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int commentId; // @dynamic commentId;
@property(retain, nonatomic) SnsObject *snsObject; // @dynamic snsObject;
@property(retain, nonatomic) SnsTips *snsTips; // @dynamic snsTips;

@end

