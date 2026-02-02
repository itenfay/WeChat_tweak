//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface ModUserImg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bigHeadImgUrl; // @dynamic bigHeadImgUrl;
@property(retain, nonatomic) NSData *imgBuf; // @dynamic imgBuf;
@property(nonatomic) unsigned int imgLen; // @dynamic imgLen;
@property(retain, nonatomic) NSString *imgMd5; // @dynamic imgMd5;
@property(nonatomic) unsigned int imgType; // @dynamic imgType;
@property(retain, nonatomic) NSString *smallHeadImgUrl; // @dynamic smallHeadImgUrl;

@end

