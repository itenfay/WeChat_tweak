//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, OpenIMContactCustomInfo, OpenIMKefuPersonalSetting;

@interface OpenIMKefuContact : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSString *bigHeadimg; // @dynamic bigHeadimg;
@property(retain, nonatomic) OpenIMContactCustomInfo *customInfo; // @dynamic customInfo;
@property(retain, nonatomic) NSString *descWordingId; // @dynamic descWordingId;
@property(retain, nonatomic) NSString *exposedId; // @dynamic exposedId;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSString *kefuToolsInfo; // @dynamic kefuToolsInfo;
@property(nonatomic) unsigned int kefuType; // @dynamic kefuType;
@property(retain, nonatomic) NSString *kfUsername; // @dynamic kfUsername;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) NSString *nicknamePyinit; // @dynamic nicknamePyinit;
@property(retain, nonatomic) NSString *nicknameQuanpin; // @dynamic nicknameQuanpin;
@property(retain, nonatomic) OpenIMKefuPersonalSetting *setting; // @dynamic setting;
@property(retain, nonatomic) NSString *smallHeadimg; // @dynamic smallHeadimg;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;

@end

