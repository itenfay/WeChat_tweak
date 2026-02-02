//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol MMMusicMVRecommendViewControllerDataSource <NSObject>
@property(readonly) unsigned long long songLikeCount;
@property(readonly) NSArray *mvModelsForMVRecommendedViewController;
@property(readonly) unsigned long long totalMVModelsCountForMVRecommendedViewController;
@property(readonly) _Bool isMVRecommendListLoading;
@end

