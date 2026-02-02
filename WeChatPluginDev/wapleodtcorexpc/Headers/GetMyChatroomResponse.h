//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MyChatroomNotice, NSMutableArray, NSString;

@interface GetMyChatroomResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *myChatroomInfoList; // @dynamic myChatroomInfoList;
@property(retain, nonatomic) MyChatroomNotice *myChatroomNotice; // @dynamic myChatroomNotice;
@property(retain, nonatomic) NSString *nextVersion; // @dynamic nextVersion;

@end

