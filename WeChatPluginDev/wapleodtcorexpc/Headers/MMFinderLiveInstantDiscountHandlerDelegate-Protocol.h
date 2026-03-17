//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveInstantDiscountHandler, MMFinderLiveWidgetContainerView, NSMutableSet;

@protocol MMFinderLiveInstantDiscountHandlerDelegate <NSObject>
- (NSMutableSet *)autoOpenHistory;
- (MMFinderLiveWidgetContainerView *)widgetContainerView;
- (void)onShouldFinishInstantDiscountHandler:(MMFinderLiveInstantDiscountHandler *)arg1;
@end

