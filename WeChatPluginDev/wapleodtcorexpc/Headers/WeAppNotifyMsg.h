//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WeAppNotifyMsg_ShowInfo;

@interface WeAppNotifyMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) WeAppNotifyMsg_ShowInfo *showInfo; // @dynamic showInfo;
@property(nonatomic) unsigned int tipsId; // @dynamic tipsId;
@property(retain, nonatomic) NSString *uniqueId; // @dynamic uniqueId;

@end

