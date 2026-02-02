//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderPoiBasicInfoResponse_RecommendDishesComponent, NSMutableArray, NSString;

@interface PBFinderPoiBasicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long cacheTime; // @dynamic cacheTime;
@property(nonatomic) long long fromScene; // @dynamic fromScene;
@property(retain, nonatomic) NSMutableArray *groupBuyArray; // @dynamic groupBuyArray;
@property(retain, nonatomic) NSString *groupBuyTitle; // @dynamic groupBuyTitle;
@property(retain, nonatomic) NSString *groupFooterTitle; // @dynamic groupFooterTitle;
@property(retain, nonatomic) NSMutableArray *lineComponentList; // @dynamic lineComponentList;
@property(retain, nonatomic) NSString *poiAddress; // @dynamic poiAddress;
@property(retain, nonatomic) NSString *poiId; // @dynamic poiId;
@property(retain, nonatomic) NSString *poiName; // @dynamic poiName;
@property(retain, nonatomic) FinderPoiBasicInfoResponse_RecommendDishesComponent *recommendDishesComponent; // @dynamic recommendDishesComponent;
@property(nonatomic) long long scene; // @dynamic scene;

@end

