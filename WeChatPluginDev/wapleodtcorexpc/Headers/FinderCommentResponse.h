//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, FinderCommentRelatedFeedInfo, FinderObject, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface FinderCommentResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *clientid; // @dynamic clientid;
@property(nonatomic) unsigned long long commentId; // @dynamic commentId;
@property(retain, nonatomic) NSMutableArray *exposedComment; // @dynamic exposedComment;
@property(retain, nonatomic) FinderObject *object; // @dynamic object;
@property(retain, nonatomic) FinderCommentRelatedFeedInfo *relatedFeedInfo; // @dynamic relatedFeedInfo;

@end

