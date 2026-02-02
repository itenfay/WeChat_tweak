//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderObject, FinderPreloadInfo, NSData, NSMutableArray, NSString;

@interface FinderGetCommentDetailResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *barrageCommentInfo; // @dynamic barrageCommentInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int commentCount; // @dynamic commentCount;
@property(retain, nonatomic) NSMutableArray *commentInfo; // @dynamic commentInfo;
@property(retain, nonatomic) NSMutableArray *descCommentInfo; // @dynamic descCommentInfo;
@property(nonatomic) unsigned int downContinueFlag; // @dynamic downContinueFlag;
@property(retain, nonatomic) NSString *jsonResp; // @dynamic jsonResp;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned int nextCheckObjectStatus; // @dynamic nextCheckObjectStatus;
@property(retain, nonatomic) FinderObject *object; // @dynamic object;
@property(retain, nonatomic) FinderPreloadInfo *preloadInfo; // @dynamic preloadInfo;
@property(retain, nonatomic) NSMutableArray *refObjectList; // @dynamic refObjectList;
@property(nonatomic) unsigned int secondaryShowFlag; // @dynamic secondaryShowFlag;
@property(nonatomic) unsigned int upContinueFlag; // @dynamic upContinueFlag;

@end

