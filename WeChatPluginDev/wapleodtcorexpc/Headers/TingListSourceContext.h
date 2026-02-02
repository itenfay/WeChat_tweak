//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenRecommendInfo, NSData, NSMutableArray, NSString, TingListFliterCondiction;

@interface TingListSourceContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool deletePlayingItemAfterListen; // @dynamic deletePlayingItemAfterListen;
@property(nonatomic) _Bool disableKeepPresetItems; // @dynamic disableKeepPresetItems;
@property(retain, nonatomic) NSMutableArray *filterListenCtx; // @dynamic filterListenCtx;
@property(retain, nonatomic) TingListFliterCondiction *fliterCondiction; // @dynamic fliterCondiction;
@property(nonatomic) int itemCountPerPage; // @dynamic itemCountPerPage;
@property(retain, nonatomic) NSMutableArray *itemList; // @dynamic itemList;
@property(nonatomic) int listOrderType; // @dynamic listOrderType;
@property(nonatomic) unsigned int loadListScene; // @dynamic loadListScene;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) _Bool mergeWithBaseListenId; // @dynamic mergeWithBaseListenId;
@property(retain, nonatomic) NSData *musicGlobalContextBuffer; // @dynamic musicGlobalContextBuffer;
@property(retain, nonatomic) NSString *positionListenId; // @dynamic positionListenId;
@property(retain, nonatomic) NSMutableArray *presetItemList; // @dynamic presetItemList;
@property(retain, nonatomic) MMListenRecommendInfo *recommendInfo; // @dynamic recommendInfo;
@property(nonatomic) _Bool refreshOnSameMd5; // @dynamic refreshOnSameMd5;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSMutableArray *topListenIdList; // @dynamic topListenIdList;

@end

