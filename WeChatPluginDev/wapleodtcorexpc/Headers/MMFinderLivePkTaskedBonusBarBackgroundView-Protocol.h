//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMFinderLivePkTaskedBonusBarViewComponent-Protocol.h"

@class UIView;
@protocol MMFinderLivePkTaskedBonusBarContentView;

@protocol MMFinderLivePkTaskedBonusBarBackgroundView <MMFinderLivePkTaskedBonusBarViewComponent>

@optional
- (void)updateLayoutToMatchContentView:(UIView<MMFinderLivePkTaskedBonusBarContentView> *)arg1;
@end

