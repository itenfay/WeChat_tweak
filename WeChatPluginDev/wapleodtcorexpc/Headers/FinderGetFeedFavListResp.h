//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData, NSMutableArray;

@class WXPBGeneratedMessage;

@interface FinderGetFeedFavListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int anonymousFingerlikeCount; // @dynamic anonymousFingerlikeCount;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSMutableArray *favList; // @dynamic favList;
@property(nonatomic) unsigned int fromCommentFingerlikeCount; // @dynamic fromCommentFingerlikeCount;
@property(nonatomic) unsigned int fromSnsFingerlikeCount; // @dynamic fromSnsFingerlikeCount;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned int totalCount; // @dynamic totalCount;

@end

