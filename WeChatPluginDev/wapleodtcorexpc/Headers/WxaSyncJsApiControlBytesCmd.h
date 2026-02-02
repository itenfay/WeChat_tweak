//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, WxaSyncBaseCmd;

@interface WxaSyncJsApiControlBytesCmd : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appidList; // @dynamic appidList;
@property(retain, nonatomic) WxaSyncBaseCmd *base; // @dynamic base;
@property(nonatomic) _Bool forceUpdate; // @dynamic forceUpdate;

@end

