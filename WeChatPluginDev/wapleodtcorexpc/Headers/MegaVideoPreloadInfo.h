//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MegaVideoPreloadGlobalInfo, NSMutableArray;

@interface MegaVideoPreloadInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MegaVideoPreloadGlobalInfo *globalInfo; // @dynamic globalInfo;
@property(retain, nonatomic) NSMutableArray *objectInfo; // @dynamic objectInfo;
@property(nonatomic) unsigned long long preloadStrategyId; // @dynamic preloadStrategyId;

@end

