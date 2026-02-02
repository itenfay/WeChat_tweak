//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface UnreadMsgReport : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *deviceUniqueId; // @dynamic deviceUniqueId;
@property(nonatomic) _Bool hasUnreadMsg; // @dynamic hasUnreadMsg;
@property(nonatomic) unsigned long long seq; // @dynamic seq;

@end

