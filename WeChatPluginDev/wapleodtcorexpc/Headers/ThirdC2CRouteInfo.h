//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LiteAppOpenInfo, NSString, TinyAppUri;

@interface ThirdC2CRouteInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) LiteAppOpenInfo *liteAppOpenInfo; // @dynamic liteAppOpenInfo;
@property(retain, nonatomic) TinyAppUri *tinyAppUri; // @dynamic tinyAppUri;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

