//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCategoryItem, MMListenRecommendInfo, NSMutableArray, NSString, TingListSourceContext;

@interface TingListRepoSource : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @dynamic categoryItem;
@property(retain, nonatomic) TingListSourceContext *context; // @dynamic context;
@property(nonatomic) _Bool coordinateByBaseListenId; // @dynamic coordinateByBaseListenId;
@property(retain, nonatomic) NSMutableArray *listenIdList; // @dynamic listenIdList;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *mpAlbumId; // @dynamic mpAlbumId;
@property(retain, nonatomic) NSString *positionListenId; // @dynamic positionListenId;
@property(retain, nonatomic) MMListenRecommendInfo *recommendInfo; // @dynamic recommendInfo;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSMutableArray *topListenIdList; // @dynamic topListenIdList;
@property(nonatomic) int type; // @dynamic type;

@end

