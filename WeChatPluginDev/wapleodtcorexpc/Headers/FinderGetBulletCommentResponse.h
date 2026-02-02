//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface FinderGetBulletCommentResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *commentList; // @dynamic commentList;
@property(nonatomic) unsigned long long endTimestamp; // @dynamic endTimestamp;
@property(retain, nonatomic) NSString *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned long long startTimestamp; // @dynamic startTimestamp;

@end

