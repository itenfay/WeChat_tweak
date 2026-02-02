//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface EmotionStoreRecList : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int bannerCount; // @dynamic bannerCount;
@property(retain, nonatomic) NSMutableArray *bannerList; // @dynamic bannerList;
@property(nonatomic) unsigned int emojiRecommendCount; // @dynamic emojiRecommendCount;
@property(retain, nonatomic) NSMutableArray *emojiRecommendList; // @dynamic emojiRecommendList;
@property(nonatomic) unsigned int emotionCount; // @dynamic emotionCount;
@property(retain, nonatomic) NSMutableArray *emotionList; // @dynamic emotionList;
@property(nonatomic) unsigned int id; // @dynamic id;
@property(retain, nonatomic) SKBuiltinBuffer_t *listBuf; // @dynamic listBuf;
@property(retain, nonatomic) NSString *listName; // @dynamic listName;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

