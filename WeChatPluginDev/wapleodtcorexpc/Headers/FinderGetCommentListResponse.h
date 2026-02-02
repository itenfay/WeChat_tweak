//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CommentNewLifeInfo, FinderCommentInfo, FinderCommentSectionPromptInfo, FinderObjectCountInfo, FinderObjectMonotonicData, NSData, NSMutableArray, ProductCommentInfo;

@interface FinderGetCommentListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *commentInfo; // @dynamic commentInfo;
@property(retain, nonatomic) FinderObjectCountInfo *countInfo; // @dynamic countInfo;
@property(retain, nonatomic) FinderCommentInfo *descComment; // @dynamic descComment;
@property(nonatomic) unsigned int downContinueFlag; // @dynamic downContinueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderObjectMonotonicData *monotonicData; // @dynamic monotonicData;
@property(retain, nonatomic) CommentNewLifeInfo *newlifeInfo; // @dynamic newlifeInfo;
@property(retain, nonatomic) ProductCommentInfo *productCommentinfo; // @dynamic productCommentinfo;
@property(retain, nonatomic) FinderCommentSectionPromptInfo *promptInfo; // @dynamic promptInfo;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;
@property(nonatomic) unsigned int upContinueFlag; // @dynamic upContinueFlag;

@end

