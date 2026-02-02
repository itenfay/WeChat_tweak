//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface MassSendResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int dataStartPos; // @dynamic dataStartPos;
@property(nonatomic) unsigned int maxSupport; // @dynamic maxSupport;
@property(nonatomic) unsigned long long newMsgId; // @dynamic newMsgId;
@property(nonatomic) unsigned int newMsgIdForNewXmlCount; // @dynamic newMsgIdForNewXmlCount;
@property(retain, nonatomic) NSMutableArray *newMsgIdForNewXmlList; // @dynamic newMsgIdForNewXmlList;
@property(nonatomic) unsigned int thumbStartPos; // @dynamic thumbStartPos;

@end

