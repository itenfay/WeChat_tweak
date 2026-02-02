//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderPreloadInfo, NSData, NSMutableArray;

@interface FinderGetFavListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned int finderTotalCount; // @dynamic finderTotalCount;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned int megavideoTotalCount; // @dynamic megavideoTotalCount;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(retain, nonatomic) FinderPreloadInfo *preloadInfo; // @dynamic preloadInfo;
@property(nonatomic) unsigned int totalCount; // @dynamic totalCount;
@property(retain, nonatomic) NSMutableArray *usualTopics; // @dynamic usualTopics;

@end

