//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, SdkUIContext;

@interface ActiveSessionContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *baseId; // @dynamic baseId;
@property(nonatomic) unsigned int baseIdisSharedFrom3Rd; // @dynamic baseIdisSharedFrom3Rd;
@property(retain, nonatomic) NSString *bizUsername; // @dynamic bizUsername;
@property(retain, nonatomic) NSString *chat; // @dynamic chat;
@property(retain, nonatomic) NSString *controllerSessionBuffer; // @dynamic controllerSessionBuffer;
@property(retain, nonatomic) NSMutableArray *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSMutableArray *extinfo2; // @dynamic extinfo2;
@property(retain, nonatomic) NSString *favId; // @dynamic favId;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(nonatomic) unsigned int listenIdType; // @dynamic listenIdType;
@property(retain, nonatomic) NSString *localAudioFileMd5; // @dynamic localAudioFileMd5;
@property(retain, nonatomic) NSString *miniAppId; // @dynamic miniAppId;
@property(retain, nonatomic) NSString *msgId; // @dynamic msgId;
@property(nonatomic) unsigned long long scene; // @dynamic scene;
@property(retain, nonatomic) SdkUIContext *sdkId; // @dynamic sdkId;
@property(retain, nonatomic) NSString *shareFromAppId; // @dynamic shareFromAppId;
@property(retain, nonatomic) NSString *sns; // @dynamic sns;
@property(retain, nonatomic) NSString *sourceUser; // @dynamic sourceUser;
@property(retain, nonatomic) NSString *textStatus; // @dynamic textStatus;
@property(nonatomic) unsigned long long time; // @dynamic time;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

