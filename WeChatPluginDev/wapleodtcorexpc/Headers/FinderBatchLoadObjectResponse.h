//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderPreloadInfo, NSMutableArray;

@interface FinderBatchLoadObjectResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool canPreDownload; // @dynamic canPreDownload;
@property(retain, nonatomic) NSMutableArray *objectResponses; // @dynamic objectResponses;
@property(retain, nonatomic) NSMutableArray *objects; // @dynamic objects;
@property(retain, nonatomic) FinderPreloadInfo *preloadInfo; // @dynamic preloadInfo;
@property(nonatomic) unsigned int refreshInterval; // @dynamic refreshInterval;

@end

