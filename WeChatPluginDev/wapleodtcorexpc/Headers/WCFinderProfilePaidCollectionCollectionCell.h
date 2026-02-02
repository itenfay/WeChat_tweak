//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class WCFinderProfilePaidCollectionCellContentView;

@interface WCFinderProfilePaidCollectionCollectionCell : UICollectionViewCell
{
    WCFinderProfilePaidCollectionCellContentView *_courseContentView;
}

+ (double)inlineSeperatorLeftInset;
+ (double)cellHeightWithPaidCollection:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProfilePaidCollectionCellContentView *courseContentView; // @synthesize courseContentView=_courseContentView;
- (void)updateWithPaidCollectin:(id)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

