//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class MMListenRecommendInfo, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface MMListenAudioDiscoverInsertion : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSMutableArray *listenItems; // @dynamic listenItems;
@property(retain, nonatomic) NSMutableArray *mixFeedItems; // @dynamic mixFeedItems;
@property(retain, nonatomic) MMListenRecommendInfo *recommendInfo; // @dynamic recommendInfo;

@end

