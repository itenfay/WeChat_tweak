//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface FinderProfilePreloadConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool isPrefetch; // @dynamic isPrefetch;
@property(retain, nonatomic) NSData *preloadBuffer; // @dynamic preloadBuffer;
@property(nonatomic) unsigned int profileWaitTime; // @dynamic profileWaitTime;

@end

