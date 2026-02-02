//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenReportClientInfo, NSString;

@interface MMListenCreateAlbumRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) _Bool isAutoReplaceMv; // @dynamic isAutoReplaceMv;
@property(nonatomic) _Bool isPublic; // @dynamic isPublic;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned int playlistType; // @dynamic playlistType;
@property(retain, nonatomic) MMListenReportClientInfo *reportClientInfo; // @dynamic reportClientInfo;
@property(nonatomic) int sourceType; // @dynamic sourceType;
@property(nonatomic) int verifyStatus; // @dynamic verifyStatus;

@end

