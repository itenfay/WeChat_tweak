//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@interface FinderMediaCodecInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(nonatomic) _Bool hasStickers; // @dynamic hasStickers;
@property(nonatomic) float hdimgScore; // @dynamic hdimgScore;
@property(nonatomic) float shareCoverScore; // @dynamic shareCoverScore;
@property(nonatomic) float thumbScore; // @dynamic thumbScore;
@property(nonatomic) _Bool useAlgorithmCover; // @dynamic useAlgorithmCover;
@property(nonatomic) float videoAudioScore; // @dynamic videoAudioScore;
@property(nonatomic) float videoCoverScore; // @dynamic videoCoverScore;
@property(nonatomic) float videoScore; // @dynamic videoScore;

@end

