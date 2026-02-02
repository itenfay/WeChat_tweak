//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderPreloadGlobalInfo, NSMutableArray;

@interface FinderPreloadInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderPreloadGlobalInfo *globalInfo; // @dynamic globalInfo;
@property(retain, nonatomic) NSMutableArray *megavideoInfo; // @dynamic megavideoInfo;
@property(retain, nonatomic) NSMutableArray *objectInfo; // @dynamic objectInfo;
@property(nonatomic) unsigned long long preloadStrategyId; // @dynamic preloadStrategyId;

@end

