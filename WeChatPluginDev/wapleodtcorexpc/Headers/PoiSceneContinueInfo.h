//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, PoiInfo;

@interface PoiSceneContinueInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bannerWords; // @dynamic bannerWords;
@property(retain, nonatomic) NSMutableArray *ids; // @dynamic ids;
@property(retain, nonatomic) PoiInfo *poiInfo; // @dynamic poiInfo;
@property(nonatomic) unsigned long long time; // @dynamic time;

@end

