//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface FinderUniGetCommentResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *commentInfo; // @dynamic commentInfo;
@property(nonatomic) unsigned int commentTotalcount; // @dynamic commentTotalcount;
@property(nonatomic) unsigned int downContinueFlag; // @dynamic downContinueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned int upContinueFlag; // @dynamic upContinueFlag;

@end

