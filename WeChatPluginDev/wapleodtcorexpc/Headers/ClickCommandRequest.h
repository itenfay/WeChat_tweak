//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSMutableArray, NSString, SessionStat, SettingPageInfo;

@interface ClickCommandRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bizUserName; // @dynamic bizUserName;
@property(retain, nonatomic) NSString *clickInfo; // @dynamic clickInfo;
@property(nonatomic) unsigned int clickType; // @dynamic clickType;
@property(retain, nonatomic) NSData *cookie; // @dynamic cookie;
@property(retain, nonatomic) NSMutableArray *msgReport; // @dynamic msgReport;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *searchClickId; // @dynamic searchClickId;
@property(retain, nonatomic) SessionStat *sessionStat; // @dynamic sessionStat;
@property(nonatomic) unsigned int sessionid; // @dynamic sessionid;
@property(retain, nonatomic) SettingPageInfo *settingPageInfo; // @dynamic settingPageInfo;

@end

