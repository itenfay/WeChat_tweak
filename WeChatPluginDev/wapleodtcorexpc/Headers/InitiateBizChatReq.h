//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

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

