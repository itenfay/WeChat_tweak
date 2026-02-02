//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSMutableArray, NSString, PopupUIData;

@interface SubscribeMsgReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bizUserName; // @dynamic bizUserName;
@property(retain, nonatomic) NSData *buffer; // @dynamic buffer;
@property(retain, nonatomic) NSString *extData; // @dynamic extData;
@property(nonatomic) unsigned int funcFlag; // @dynamic funcFlag;
@property(nonatomic) unsigned int isOpen; // @dynamic isOpen;
@property(retain, nonatomic) NSMutableArray *itemList; // @dynamic itemList;
@property(nonatomic) unsigned int popupScene; // @dynamic popupScene;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *subscribeUrl; // @dynamic subscribeUrl;
@property(retain, nonatomic) PopupUIData *uidata; // @dynamic uidata;

@end

