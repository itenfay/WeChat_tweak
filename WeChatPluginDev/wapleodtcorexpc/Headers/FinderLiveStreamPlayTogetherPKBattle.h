//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveBattleInfo, FinderLiveMicPkInfo, NSData, NSMutableArray;

@interface FinderLiveStreamPlayTogetherPKBattle : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveMicPkInfo *anchorMicPkInfo; // @dynamic anchorMicPkInfo;
@property(retain, nonatomic) FinderLiveBattleInfo *battleInfo; // @dynamic battleInfo;
@property(retain, nonatomic) NSMutableArray *otherPkMicInfos; // @dynamic otherPkMicInfos;
@property(retain, nonatomic) NSData *seiMicBuffer; // @dynamic seiMicBuffer;

@end

