//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderLiveLayerShowInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accumulatedSeconds; // @dynamic accumulatedSeconds;
@property(retain, nonatomic) NSString *pauseWording; // @dynamic pauseWording;
@property(retain, nonatomic) NSData *showBuffer; // @dynamic showBuffer;
@property(nonatomic) unsigned int showType; // @dynamic showType;

@end

