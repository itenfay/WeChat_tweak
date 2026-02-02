//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MegaVideoBaseRequest, NSString;

@interface MegaVideoModObjectRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int bulletCommentSwitch; // @dynamic bulletCommentSwitch;
@property(retain, nonatomic) MegaVideoBaseRequest *megaBasereq; // @dynamic megaBasereq;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(nonatomic) unsigned long long videoObjectId; // @dynamic videoObjectId;

@end

