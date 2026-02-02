//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FavCDNItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aeskey; // @dynamic aeskey;
@property(retain, nonatomic) NSString *cdnurl; // @dynamic cdnurl;
@property(retain, nonatomic) NSString *dataId; // @dynamic dataId;
@property(nonatomic) int dataStatus; // @dynamic dataStatus;
@property(nonatomic) int encryVer; // @dynamic encryVer;
@property(retain, nonatomic) NSString *fullMd5; // @dynamic fullMd5;
@property(nonatomic) unsigned int fullSize; // @dynamic fullSize;
@property(retain, nonatomic) NSString *head256Md5; // @dynamic head256Md5;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) NSString *videoId; // @dynamic videoId;

@end

