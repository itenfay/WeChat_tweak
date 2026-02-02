//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface SnsTagMemberOptionRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) NSMutableArray *list; // @dynamic list;
@property(nonatomic) unsigned int opCode; // @dynamic opCode;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned long long tagId; // @dynamic tagId;
@property(retain, nonatomic) NSString *tagName; // @dynamic tagName;

@end

