//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AtInfo, BaseResponse, NSMutableArray, NSString;

@interface ReceiveChatroomMsgResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AtInfo *atInfo; // @dynamic atInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *invisibleSeqList; // @dynamic invisibleSeqList;
@property(nonatomic) unsigned long long lastReceivedSeq; // @dynamic lastReceivedSeq;
@property(retain, nonatomic) NSMutableArray *msgPackList; // @dynamic msgPackList;
@property(nonatomic) unsigned long long nextSeq; // @dynamic nextSeq;
@property(retain, nonatomic) NSString *nextVersion; // @dynamic nextVersion;
@property(retain, nonatomic) NSMutableArray *noticeMsgList; // @dynamic noticeMsgList;
@property(retain, nonatomic) NSMutableArray *refreshMsgPackList; // @dynamic refreshMsgPackList;

@end

