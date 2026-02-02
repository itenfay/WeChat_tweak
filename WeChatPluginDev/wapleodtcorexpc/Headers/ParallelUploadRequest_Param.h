//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ParallelUploadRequest_Param : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bigFileAesKey; // @dynamic bigFileAesKey;
@property(retain, nonatomic) NSString *customRequestHeader; // @dynamic customRequestHeader;
@property(retain, nonatomic) NSString *fileMd5; // @dynamic fileMd5;
@property(nonatomic) unsigned int fileSize; // @dynamic fileSize;
@property(nonatomic) unsigned int fileType; // @dynamic fileType;
@property(retain, nonatomic) NSString *lastUploadId; // @dynamic lastUploadId;
@property(retain, nonatomic) NSString *midAesKey; // @dynamic midAesKey;
@property(retain, nonatomic) NSString *midFileId; // @dynamic midFileId;
@property(nonatomic) unsigned int midImgType; // @dynamic midImgType;
@property(nonatomic) unsigned int needThumbGeneratedBySvr; // @dynamic needThumbGeneratedBySvr;
@property(nonatomic) unsigned int partSize; // @dynamic partSize;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(retain, nonatomic) NSString *thumbAesKey; // @dynamic thumbAesKey;
@property(retain, nonatomic) NSString *thumbFileId; // @dynamic thumbFileId;

@end

