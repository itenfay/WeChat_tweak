//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface VideoPlayerConfig_iOSConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *arrBufferTime; // @dynamic arrBufferTime;
@property(nonatomic) float downloadGrading; // @dynamic downloadGrading;
@property(nonatomic) float maxBufferLength; // @dynamic maxBufferLength;
@property(nonatomic) float minBufferLength; // @dynamic minBufferLength;
@property(nonatomic) float preloadSec; // @dynamic preloadSec;
@property(nonatomic) _Bool throttled; // @dynamic throttled;

@end

