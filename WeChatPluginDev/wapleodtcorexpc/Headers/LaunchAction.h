//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WxaMigrateInfo;

@interface LaunchAction : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionCode; // @dynamic actionCode;
@property(retain, nonatomic) NSString *alertMsg; // @dynamic alertMsg;
@property(retain, nonatomic) NSString *alertTitle; // @dynamic alertTitle;
@property(retain, nonatomic) WxaMigrateInfo *migrateInfo; // @dynamic migrateInfo;
@property(nonatomic) _Bool needHistoryList; // @dynamic needHistoryList;
@property(retain, nonatomic) NSString *openUrl; // @dynamic openUrl;
@property(retain, nonatomic) NSString *retryPageShowMsg; // @dynamic retryPageShowMsg;

@end

