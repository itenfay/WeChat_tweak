//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface ReportServerDataRequest_GameServerData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(nonatomic) unsigned int appState; // @dynamic appState;
@property(nonatomic) unsigned int appVersion; // @dynamic appVersion;
@property(retain, nonatomic) NSString *compiledMd5; // @dynamic compiledMd5;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSString *eventInfo; // @dynamic eventInfo;

@end

