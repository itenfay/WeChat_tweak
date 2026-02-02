//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenRedDotByPassInfo_JumpInfo, MMListenRedDotByPassInfo_MusicRedotScore, MMListenSlideOver, NSData, NSMutableArray;

@interface MMListenRedDotByPassInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
@property(retain, nonatomic) MMListenRedDotByPassInfo_JumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSData *musicGlobalContextBuffer; // @dynamic musicGlobalContextBuffer;
@property(retain, nonatomic) MMListenRedDotByPassInfo_MusicRedotScore *musicRedDotScore; // @dynamic musicRedDotScore;
@property(retain, nonatomic) MMListenSlideOver *slideOver; // @dynamic slideOver;
@property(retain, nonatomic) NSData *userFeature; // @dynamic userFeature;

@end

