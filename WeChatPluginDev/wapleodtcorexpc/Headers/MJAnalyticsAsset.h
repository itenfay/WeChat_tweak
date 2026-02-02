//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface MJAnalyticsAsset : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aiTags; // @dynamic aiTags;
@property(retain, nonatomic) NSString *aspectRatio; // @dynamic aspectRatio;
@property(retain, nonatomic) NSString *assetFilePath; // @dynamic assetFilePath;
@property(retain, nonatomic) NSString *assetIdentifier; // @dynamic assetIdentifier;
@property(nonatomic) unsigned long long durationMs; // @dynamic durationMs;
@property(retain, nonatomic) NSMutableArray *imageClassExceeds; // @dynamic imageClassExceeds;
@property(retain, nonatomic) NSMutableArray *imageClassLabels; // @dynamic imageClassLabels;
@property(nonatomic) _Bool isOverThreshold; // @dynamic isOverThreshold;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSString *originId; // @dynamic originId;
@property(retain, nonatomic) NSMutableArray *videoClassAudioLabels; // @dynamic videoClassAudioLabels;
@property(retain, nonatomic) NSMutableArray *videoClassVisualExceeds; // @dynamic videoClassVisualExceeds;
@property(retain, nonatomic) NSMutableArray *videoClassVisualLabels; // @dynamic videoClassVisualLabels;

@end

