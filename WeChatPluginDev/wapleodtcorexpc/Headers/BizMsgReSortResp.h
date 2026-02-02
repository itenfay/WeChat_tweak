//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface BizMsgReSortResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *buffer; // @dynamic buffer;
@property(nonatomic) unsigned int contextMsgLimit; // @dynamic contextMsgLimit;
@property(nonatomic) unsigned int extraRecMsgCount; // @dynamic extraRecMsgCount;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(nonatomic) unsigned long long limitTime; // @dynamic limitTime;
@property(nonatomic) unsigned int maxMsgCount; // @dynamic maxMsgCount;
@property(nonatomic) unsigned long long nextReqTime; // @dynamic nextReqTime;
@property(retain, nonatomic) NSString *rankSessionid; // @dynamic rankSessionid;
@property(retain, nonatomic) NSString *recBuffer; // @dynamic recBuffer;
@property(retain, nonatomic) NSMutableArray *recommendArticleInfo; // @dynamic recommendArticleInfo;
@property(nonatomic) unsigned int subscribeMsgLimit; // @dynamic subscribeMsgLimit;
@property(nonatomic) unsigned int threshold; // @dynamic threshold;
@property(nonatomic) unsigned int unreadThreshold; // @dynamic unreadThreshold;
@property(retain, nonatomic) NSMutableArray *updateMsg; // @dynamic updateMsg;

@end

