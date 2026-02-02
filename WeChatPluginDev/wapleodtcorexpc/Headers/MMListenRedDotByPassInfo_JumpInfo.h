//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenAudioDiscoverInsertion, MMListenCategoryItem, MMListenCircleXRedDotSession, MMListenMusicDiscoverInsertion, MMListenRecommendInfo, NSData;

@interface MMListenRedDotByPassInfo_JumpInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenAudioDiscoverInsertion *audioInsertion; // @dynamic audioInsertion;
@property(retain, nonatomic) NSData *audioSyncSessionBuffer; // @dynamic audioSyncSessionBuffer;
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @dynamic categoryItem;
@property(retain, nonatomic) MMListenCircleXRedDotSession *circlexRedDotSession; // @dynamic circlexRedDotSession;
@property(nonatomic) int intType; // @dynamic intType;
@property(retain, nonatomic) MMListenMusicDiscoverInsertion *musicInsertion; // @dynamic musicInsertion;
@property(retain, nonatomic) MMListenRecommendInfo *recommendInfo; // @dynamic recommendInfo;
@property(nonatomic) int type; // @dynamic type;

@end

