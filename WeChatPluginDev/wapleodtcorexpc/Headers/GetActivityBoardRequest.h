//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BoardIndexInfo, FinderEventBaseRequest, NSData, NSString;

@interface GetActivityBoardRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *activityId; // @dynamic activityId;
@property(retain, nonatomic) FinderEventBaseRequest *baseReq; // @dynamic baseReq;
@property(retain, nonatomic) NSString *boardIndex; // @dynamic boardIndex;
@property(retain, nonatomic) BoardIndexInfo *boardIndexInfo; // @dynamic boardIndexInfo;
@property(retain, nonatomic) NSData *lastCtx; // @dynamic lastCtx;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *stageId; // @dynamic stageId;
@property(retain, nonatomic) NSString *wxUsername; // @dynamic wxUsername;

@end

