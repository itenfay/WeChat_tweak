//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class VideoCdnInfo_CdnInfo;

@interface VideoCdnInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int cdnScene; // @dynamic cdnScene;
@property(nonatomic) unsigned int cdnSourceType; // @dynamic cdnSourceType;
@property(retain, nonatomic) VideoCdnInfo_CdnInfo *ctnInfo; // @dynamic ctnInfo;
@property(retain, nonatomic) VideoCdnInfo_CdnInfo *mpInfo; // @dynamic mpInfo;

@end

