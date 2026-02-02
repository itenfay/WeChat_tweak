//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MegaVideo, NSString;

@interface FinderVideoAttachment : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(retain, nonatomic) MegaVideo *video; // @dynamic video;
@property(retain, nonatomic) NSString *videoNonceId; // @dynamic videoNonceId;

@end

