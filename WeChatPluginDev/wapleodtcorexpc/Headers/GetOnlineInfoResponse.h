//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface GetOnlineInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(nonatomic) unsigned int iconType; // @dynamic iconType;
@property(nonatomic) unsigned int onlineCount; // @dynamic onlineCount;
@property(retain, nonatomic) NSMutableArray *onlineList; // @dynamic onlineList;
@property(retain, nonatomic) NSString *summaryXml; // @dynamic summaryXml;

@end

