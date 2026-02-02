//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenRecommendInfo, NSData, NSString;

@interface MMListenCategoriesRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int categoryCount; // @dynamic categoryCount;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(nonatomic) int categoryOffset; // @dynamic categoryOffset;
@property(retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo; // @dynamic ctxRecommendInfo;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) int sortType; // @dynamic sortType;

@end

