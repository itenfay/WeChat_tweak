//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderReddotFreqInfo_ExposeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accumExposeCount; // @dynamic accumExposeCount;
@property(nonatomic) unsigned int accumPenaltyCount; // @dynamic accumPenaltyCount;
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(nonatomic) _Bool isNextPenalized; // @dynamic isNextPenalized;
@property(nonatomic) _Bool isPenalized; // @dynamic isPenalized;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(nonatomic) unsigned int willFreeGapCount; // @dynamic willFreeGapCount;
@property(nonatomic) unsigned int willPenaltyGapCount; // @dynamic willPenaltyGapCount;

@end

