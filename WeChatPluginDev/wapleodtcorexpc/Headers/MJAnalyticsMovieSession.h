//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MJAnalyticsTemplateRecommendation, NSMutableArray, NSString;

@interface MJAnalyticsMovieSession : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *assets; // @dynamic assets;
@property(nonatomic) unsigned long long exportDurationMs; // @dynamic exportDurationMs;
@property(retain, nonatomic) NSString *exportMusicId; // @dynamic exportMusicId;
@property(retain, nonatomic) NSString *exportMusicSongName; // @dynamic exportMusicSongName;
@property(nonatomic) int exportMusicSourceType; // @dynamic exportMusicSourceType;
@property(retain, nonatomic) NSString *exportTemplateId; // @dynamic exportTemplateId;
@property(nonatomic) int exportTemplateSourceType; // @dynamic exportTemplateSourceType;
@property(retain, nonatomic) NSMutableArray *fixedTemplateIds; // @dynamic fixedTemplateIds;
@property(retain, nonatomic) NSMutableArray *templateActions; // @dynamic templateActions;
@property(retain, nonatomic) MJAnalyticsTemplateRecommendation *templateRecommendation; // @dynamic templateRecommendation;
@property(nonatomic) unsigned long long totalPreviewDurationMs; // @dynamic totalPreviewDurationMs;

@end

