//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameDetailInfo, WxaInfo;

@interface GameAppInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WxaInfo *base; // @dynamic base;
@property(retain, nonatomic) GameDetailInfo *detail; // @dynamic detail;

@end

