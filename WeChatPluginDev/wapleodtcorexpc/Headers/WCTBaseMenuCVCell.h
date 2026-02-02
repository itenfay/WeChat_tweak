//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, WCTBaseMenuView;

@interface WCTBaseMenuCVCell : UICollectionViewCell
{
    WCTBaseMenuView *_view;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) WCTBaseMenuView *view; // @synthesize view=_view;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setViewDelegate:(id)arg1;
- (void)setViewEventAction:(CDUnknownBlockType)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (void)setViewDataModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

