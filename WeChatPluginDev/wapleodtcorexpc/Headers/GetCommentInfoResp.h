//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, GetCommentInfoResp_CommentInvite, GetCommentInfoResp_CommentModule;

@interface GetCommentInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) GetCommentInfoResp_CommentInvite *commentInvite; // @dynamic commentInvite;
@property(retain, nonatomic) GetCommentInfoResp_CommentModule *commentModule; // @dynamic commentModule;

@end

