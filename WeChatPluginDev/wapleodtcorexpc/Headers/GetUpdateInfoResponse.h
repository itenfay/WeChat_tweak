//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface GetUpdateInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *downLoadUrl; // @dynamic downLoadUrl;
@property(retain, nonatomic) NSString *packDescription; // @dynamic packDescription;
@property(retain, nonatomic) NSString *packMd5; // @dynamic packMd5;
@property(nonatomic) unsigned int packSize; // @dynamic packSize;
@property(nonatomic) unsigned int packVersion; // @dynamic packVersion;
@property(retain, nonatomic) NSString *patchInfo; // @dynamic patchInfo;
@property(nonatomic) unsigned int urlCount; // @dynamic urlCount;

@end

