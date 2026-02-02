//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderPreloadObjectReportSwitch, NSMutableArray, NSString;

@interface FinderPreloadObjectInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enableFeedPreloadStrategy; // @dynamic enableFeedPreloadStrategy;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(readonly) unsigned long long hash;
@property(nonatomic) float interestFactor; // @dynamic interestFactor;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(retain, nonatomic) NSMutableArray *loadWithPlaying; // @dynamic loadWithPlaying;
@property(nonatomic) unsigned int maxBufferLength; // @dynamic maxBufferLength;
@property(nonatomic) unsigned int minBufferLength; // @dynamic minBufferLength;
@property(nonatomic) unsigned int minCurrentFeedBufferLength; // @dynamic minCurrentFeedBufferLength;
@property(nonatomic) int preloadFileTimeMs; // @dynamic preloadFileTimeMs;
@property(retain, nonatomic) FinderPreloadObjectReportSwitch *reportSwitch; // @dynamic reportSwitch;
@property(readonly) Class superclass;

@end

