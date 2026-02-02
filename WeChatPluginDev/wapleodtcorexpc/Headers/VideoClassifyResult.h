//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface VideoClassifyResult : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)videoClassifyResultFromOMJResult:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *audioTaskOutLabels; // @dynamic audioTaskOutLabels;
@property(retain, nonatomic) NSMutableArray *audioTaskOutScores; // @dynamic audioTaskOutScores;
@property(retain, nonatomic) NSMutableArray *embClusters; // @dynamic embClusters;
@property(retain, nonatomic) NSMutableArray *embFeature; // @dynamic embFeature;
@property(retain, nonatomic) NSMutableArray *lastVersionOutScores; // @dynamic lastVersionOutScores;
@property(retain, nonatomic) NSString *multimodualModelId; // @dynamic multimodualModelId;
@property(retain, nonatomic) NSMutableArray *visionTaskExceedsThreshold; // @dynamic visionTaskExceedsThreshold;
@property(retain, nonatomic) NSMutableArray *visionTaskOutLabels; // @dynamic visionTaskOutLabels;
@property(retain, nonatomic) NSMutableArray *visionTaskOutScores; // @dynamic visionTaskOutScores;

@end

