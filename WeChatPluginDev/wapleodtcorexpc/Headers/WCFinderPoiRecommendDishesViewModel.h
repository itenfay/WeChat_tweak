//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderPoiBasicInfoResponse_RecommendDishesComponent, WCFinderPoiRecommendDishesInfo;
@protocol WCFinderPoiRecommendDishesViewModelDelegte;

@interface WCFinderPoiRecommendDishesViewModel : NSObject
{
    id <WCFinderPoiRecommendDishesViewModelDelegte> _delegate;
    FinderPoiBasicInfoResponse_RecommendDishesComponent *_recommendDishesComponent;
    WCFinderPoiRecommendDishesInfo *_dishesInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPoiRecommendDishesInfo *dishesInfo; // @synthesize dishesInfo=_dishesInfo;
@property(retain, nonatomic) FinderPoiBasicInfoResponse_RecommendDishesComponent *recommendDishesComponent; // @synthesize recommendDishesComponent=_recommendDishesComponent;
@property(nonatomic) __weak id <WCFinderPoiRecommendDishesViewModelDelegte> delegate; // @synthesize delegate=_delegate;
- (id)dishDetailAtIndexPath:(id)arg1;
- (void)requestPoiRecommendDishesDetail;
- (id)initWithRecommendDishesComponent:(id)arg1;

@end

