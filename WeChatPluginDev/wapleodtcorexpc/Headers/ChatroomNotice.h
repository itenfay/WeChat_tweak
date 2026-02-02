//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ChatroomNotice : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *noticeText; // @dynamic noticeText;
@property(nonatomic) unsigned long long updateTime; // @dynamic updateTime;
@property(nonatomic) unsigned int updaterUin; // @dynamic updaterUin;

@end

