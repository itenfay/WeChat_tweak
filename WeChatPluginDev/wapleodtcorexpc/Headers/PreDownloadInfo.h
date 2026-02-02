//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface PreDownloadInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *noPreDownloadRange; // @dynamic noPreDownloadRange;
@property(nonatomic) unsigned int preDownloadNetType; // @dynamic preDownloadNetType;
@property(nonatomic) unsigned int preDownloadPercent; // @dynamic preDownloadPercent;

@end

