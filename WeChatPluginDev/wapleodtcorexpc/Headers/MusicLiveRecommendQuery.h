//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class MusicLiveBgmRecommendQuery, MusicLiveMvRecommendQuery, NSString;

@class WXPBGeneratedMessage;

@interface MusicLiveRecommendQuery : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MusicLiveBgmRecommendQuery *bgmquery; // @dynamic bgmquery;
@property(retain, nonatomic) MusicLiveMvRecommendQuery *mvquery; // @dynamic mvquery;
@property(retain, nonatomic) NSString *songinfobufferbase64; // @dynamic songinfobufferbase64;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

