//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface NotifyMeetingSubtitle : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool isFinal; // @dynamic isFinal;
@property(retain, nonatomic) NSString *openid; // @dynamic openid;
@property(nonatomic) unsigned long long roomId; // @dynamic roomId;
@property(retain, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(nonatomic) unsigned long long uin; // @dynamic uin;

@end

