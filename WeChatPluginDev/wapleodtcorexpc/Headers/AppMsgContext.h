//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface AppMsgContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int bizUin; // @dynamic bizUin;
@property(nonatomic) unsigned int clientCacheTime; // @dynamic clientCacheTime;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSString *forceUrl; // @dynamic forceUrl;
@property(nonatomic) unsigned int itemIdx; // @dynamic itemIdx;
@property(retain, nonatomic) NSMutableArray *itemPictureUrls; // @dynamic itemPictureUrls;
@property(nonatomic) int itemShowType; // @dynamic itemShowType;
@property(nonatomic) unsigned int lastModifyTime; // @dynamic lastModifyTime;
@property(nonatomic) unsigned int msgId; // @dynamic msgId;
@property(nonatomic) _Bool nativePageNeedFullScreenForceUrl; // @dynamic nativePageNeedFullScreenForceUrl;
@property(nonatomic) _Bool noNeedUpdate; // @dynamic noNeedUpdate;
@property(nonatomic) unsigned int tmplVersion; // @dynamic tmplVersion;
@property(retain, nonatomic) NSMutableArray *tmplVersions; // @dynamic tmplVersions;
@property(nonatomic) unsigned int traceFlag; // @dynamic traceFlag;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

