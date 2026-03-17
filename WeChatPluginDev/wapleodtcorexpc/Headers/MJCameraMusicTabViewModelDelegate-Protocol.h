//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJCameraMusicTabViewModel;

@protocol MJCameraMusicTabViewModelDelegate <NSObject>

@optional
- (void)cameraMusicTabViewModelDidFetchRecommendedMusic:(MJCameraMusicTabViewModel *)arg1;
@end

