//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderLiveAggregationCardReportRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long actionTimeMs; // @dynamic actionTimeMs;
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) NSData *cardBuffer; // @dynamic cardBuffer;
@property(retain, nonatomic) NSString *cardId; // @dynamic cardId;
@property(nonatomic) unsigned int effectiveExposeTimeMs; // @dynamic effectiveExposeTimeMs;
@property(nonatomic) unsigned int exposeTimeMs; // @dynamic exposeTimeMs;
@property(nonatomic) unsigned long long startEffectiveExposeTimeMs; // @dynamic startEffectiveExposeTimeMs;

@end

