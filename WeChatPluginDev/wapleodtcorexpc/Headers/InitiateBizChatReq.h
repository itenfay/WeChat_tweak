//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface InitiateBizChatReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bizchatName; // @dynamic bizchatName;
@property(retain, nonatomic) NSString *corpId; // @dynamic corpId;
@property(retain, nonatomic) NSMutableArray *userIdItem; // @dynamic userIdItem;

@end

