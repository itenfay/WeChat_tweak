//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderObjectUidUnit, NSMutableArray, NSString;

@interface FinderLiveStreamGetAsyncLoadInfoResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *liveAggregationCardId; // @dynamic liveAggregationCardId;
@property(retain, nonatomic) FinderObjectUidUnit *objectUid; // @dynamic objectUid;
@property(retain, nonatomic) NSMutableArray *sceneResult; // @dynamic sceneResult;

@end

