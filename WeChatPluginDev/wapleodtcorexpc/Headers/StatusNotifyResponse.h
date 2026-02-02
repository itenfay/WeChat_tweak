//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface StatusNotifyResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int chatContactCount; // @dynamic chatContactCount;
@property(retain, nonatomic) NSMutableArray *chatContactList; // @dynamic chatContactList;
@property(nonatomic) unsigned int msgId; // @dynamic msgId;
@property(nonatomic) unsigned long long newMsgId; // @dynamic newMsgId;

@end

