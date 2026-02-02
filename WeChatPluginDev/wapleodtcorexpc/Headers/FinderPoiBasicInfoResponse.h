//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderPoiBasicInfoResponse_RecommendDishesComponent, NSMutableArray, NSString;

@interface FinderPoiBasicInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *lineComponentList; // @dynamic lineComponentList;
@property(retain, nonatomic) NSString *poiAddress; // @dynamic poiAddress;
@property(retain, nonatomic) NSString *poiName; // @dynamic poiName;
@property(retain, nonatomic) FinderPoiBasicInfoResponse_RecommendDishesComponent *recommendDishesComponent; // @dynamic recommendDishesComponent;

@end

