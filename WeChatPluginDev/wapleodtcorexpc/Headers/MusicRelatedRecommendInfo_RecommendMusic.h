//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenSimplePlayableInfo, NSMutableArray, NSString;

@interface MusicRelatedRecommendInfo_RecommendMusic : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authIconUrl; // @dynamic authIconUrl;
@property(retain, nonatomic) NSString *coverImageUrl; // @dynamic coverImageUrl;
@property(nonatomic) unsigned long long listenSongId; // @dynamic listenSongId;
@property(retain, nonatomic) NSString *musicName; // @dynamic musicName;
@property(retain, nonatomic) MMListenSimplePlayableInfo *playableInfo; // @dynamic playableInfo;
@property(retain, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(retain, nonatomic) NSMutableArray *singers; // @dynamic singers;

@end

