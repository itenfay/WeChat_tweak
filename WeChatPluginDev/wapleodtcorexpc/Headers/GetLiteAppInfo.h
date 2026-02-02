//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface GetLiteAppInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(nonatomic) _Bool checkSwitch; // @dynamic checkSwitch;
@property(nonatomic) _Bool checkUpdate; // @dynamic checkUpdate;
@property(nonatomic) unsigned int enableDragToCloseInHalfScreen; // @dynamic enableDragToCloseInHalfScreen;
@property(retain, nonatomic) NSString *enterType; // @dynamic enterType;
@property(nonatomic) double heightPercent; // @dynamic heightPercent;
@property(nonatomic) _Bool isHalfScreen; // @dynamic isHalfScreen;
@property(nonatomic) _Bool isRedirect; // @dynamic isRedirect;
@property(nonatomic) _Bool isTransparent; // @dynamic isTransparent;
@property(retain, nonatomic) NSString *minVersion; // @dynamic minVersion;
@property(retain, nonatomic) NSString *page; // @dynamic page;
@property(retain, nonatomic) NSString *query; // @dynamic query;
@property(nonatomic) _Bool syncCheckUpdate; // @dynamic syncCheckUpdate;

@end

