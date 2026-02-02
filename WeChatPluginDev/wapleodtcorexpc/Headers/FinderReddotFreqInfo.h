//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderReddotFreqConfig, NSMutableArray;

@interface FinderReddotFreqInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int discoveryReddotType; // @dynamic discoveryReddotType;
@property(retain, nonatomic) NSMutableArray *exposeInfos; // @dynamic exposeInfos;
@property(nonatomic) unsigned int finderPageBusinessCount; // @dynamic finderPageBusinessCount;
@property(nonatomic) unsigned int finderPageHasReddotBusinessCount; // @dynamic finderPageHasReddotBusinessCount;
@property(retain, nonatomic) NSMutableArray *finderPageHasReddotBusinessNDetails; // @dynamic finderPageHasReddotBusinessNDetails;
@property(nonatomic) unsigned int finderPageInPenaltyBusinessCount; // @dynamic finderPageInPenaltyBusinessCount;
@property(retain, nonatomic) NSMutableArray *finderPageInPenaltyDetails; // @dynamic finderPageInPenaltyDetails;
@property(retain, nonatomic) FinderReddotFreqConfig *finderReddotFreqConfig; // @dynamic finderReddotFreqConfig;

@end

