//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, WCFinderPersonalCenterSidesButton;

@interface WCFinderPersonalCenterActionCellView : UICollectionViewCell
{
    WCFinderPersonalCenterSidesButton *_button;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPersonalCenterSidesButton *button; // @synthesize button=_button;
- (void)setRedDotInfo:(id)arg1;
- (void)handleClick;
- (void)updateWithCellPosition:(_Bool)arg1 tail:(_Bool)arg2;
- (void)updateTitle:(id)arg1;
- (void)setupCorner:(unsigned long long)arg1 cornerRadii:(double)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

