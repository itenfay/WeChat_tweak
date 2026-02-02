//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface NewOCRTranslationRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *ctx; // @dynamic ctx;
@property(retain, nonatomic) NSString *imageAeskey; // @dynamic imageAeskey;
@property(nonatomic) unsigned int imageColor; // @dynamic imageColor;
@property(retain, nonatomic) NSData *imageData; // @dynamic imageData;
@property(nonatomic) unsigned int imageDataOffset; // @dynamic imageDataOffset;
@property(retain, nonatomic) NSString *imageFileId; // @dynamic imageFileId;
@property(nonatomic) unsigned int imageSize; // @dynamic imageSize;
@property(nonatomic) unsigned int imageSource; // @dynamic imageSource;
@property(retain, nonatomic) NSString *imageUrl; // @dynamic imageUrl;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int sessionId; // @dynamic sessionId;

@end

