//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenItem, MMListenRecommendInfo, MMListenRelatedItem, MMListenSimplePlayableInfo, NSString;

@interface MMListenIdListResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *baseListenId; // @dynamic baseListenId;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(retain, nonatomic) MMListenItem *listenItem; // @dynamic listenItem;
@property(retain, nonatomic) MMListenRecommendInfo *recommendInfo; // @dynamic recommendInfo;
@property(retain, nonatomic) MMListenRelatedItem *relatedItem; // @dynamic relatedItem;
@property(retain, nonatomic) MMListenItem *relatedListenItem; // @dynamic relatedListenItem;
@property(retain, nonatomic) MMListenSimplePlayableInfo *simplePlayableInfo; // @dynamic simplePlayableInfo;

@end

