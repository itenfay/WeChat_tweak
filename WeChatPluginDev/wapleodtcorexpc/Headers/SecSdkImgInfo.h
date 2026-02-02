//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface SecSdkImgInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *externalFilename; // @dynamic externalFilename;
@property(nonatomic) unsigned int height; // @dynamic height;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *ocrText; // @dynamic ocrText;
@property(retain, nonatomic) NSString *phash; // @dynamic phash;
@property(retain, nonatomic) NSMutableArray *qrcodeTextList; // @dynamic qrcodeTextList;
@property(nonatomic) unsigned int timestamp; // @dynamic timestamp;
@property(nonatomic) unsigned int watermarkFlag; // @dynamic watermarkFlag;
@property(nonatomic) unsigned int width; // @dynamic width;

@end

