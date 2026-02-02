//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderPoiBasicInfoResponse_RecommendDishesComponent : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *dishesList; // @dynamic dishesList;
@property(retain, nonatomic) NSString *poiBasicinfoToRecommenddishesdetailByPass; // @dynamic poiBasicinfoToRecommenddishesdetailByPass;
@property(retain, nonatomic) NSString *poiId; // @dynamic poiId;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned long long topicId; // @dynamic topicId;

@end

