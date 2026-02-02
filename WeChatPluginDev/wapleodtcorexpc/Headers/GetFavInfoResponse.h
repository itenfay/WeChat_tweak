//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FavConfig;

@interface GetFavInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long buyDate; // @dynamic buyDate;
@property(retain, nonatomic) FavConfig *config; // @dynamic config;
@property(nonatomic) unsigned long long duration; // @dynamic duration;
@property(nonatomic) unsigned int mxAutoDownloadSize; // @dynamic mxAutoDownloadSize;
@property(nonatomic) unsigned int mxAutoUploadSize; // @dynamic mxAutoUploadSize;
@property(nonatomic) unsigned int mxFavFileSize; // @dynamic mxFavFileSize;
@property(nonatomic) unsigned int payChannel; // @dynamic payChannel;
@property(nonatomic) unsigned long long totalSize; // @dynamic totalSize;
@property(nonatomic) unsigned long long usedSize; // @dynamic usedSize;

@end

