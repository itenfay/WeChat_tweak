//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface UIView (FinderLandScape)
+ (id)finderViewPortialStateKey;
+ (id)finderViewLandScapeStateKey;
+ (id)finderviewTableStateKey;
- (void)restoreToPortraitState;
- (void)setToLandScape;
- (void)updateConfigViewHiddenState:(_Bool)arg1;
- (void)configView:(id)arg1 landScapeStateIsHidden:(_Bool)arg2;
- (void)setIsHiddenInPortrait:(_Bool)arg1;
- (_Bool)isHiddenInPortrait;
- (void)setIsHiddenInLandScape:(_Bool)arg1;
- (_Bool)isHiddenInLandScape;
- (id)viewTable;
@end

