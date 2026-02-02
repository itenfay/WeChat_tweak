//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, TingPlayListInfo;

@interface TingRecentRecordGetPlayListInfoResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) TingPlayListInfo *info; // @dynamic info;
@property(retain, nonatomic) NSString *msg; // @dynamic msg;
@property(nonatomic) int ret; // @dynamic ret;

@end

