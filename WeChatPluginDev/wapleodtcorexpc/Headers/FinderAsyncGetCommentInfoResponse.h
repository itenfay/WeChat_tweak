//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderCommentTitleBarInfo, ProductCommentInfo;

@interface FinderAsyncGetCommentInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ProductCommentInfo *productInfo; // @dynamic productInfo;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;
@property(retain, nonatomic) FinderCommentTitleBarInfo *titleBarInfo; // @dynamic titleBarInfo;

@end

