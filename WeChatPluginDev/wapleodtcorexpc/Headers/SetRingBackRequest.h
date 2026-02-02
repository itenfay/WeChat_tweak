//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, RingBack;

@interface SetRingBackRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int extBusinessScene; // @dynamic extBusinessScene;
@property(retain, nonatomic) NSString *extraInfo; // @dynamic extraInfo;
@property(nonatomic) unsigned int newcomMsgDefaultVoiceNumber; // @dynamic newcomMsgDefaultVoiceNumber;
@property(nonatomic) unsigned int opType; // @dynamic opType;
@property(retain, nonatomic) RingBack *ringBack; // @dynamic ringBack;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

