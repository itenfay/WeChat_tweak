//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface PushNewTipsReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) unsigned int tipsId; // @dynamic tipsId;
@property(nonatomic) unsigned int tipsVersion; // @dynamic tipsVersion;
@property(retain, nonatomic) NSString *uniqueId; // @dynamic uniqueId;

@end

