//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIView, WCFinderProfilePaidCollectionCellContentView;

@interface WCFinderProfilePaidCollectionTableCell : UITableViewCell
{
    _Bool _isLastCell;
    WCFinderProfilePaidCollectionCellContentView *_courseContentView;
    UIView *_bottomSeperator;
}

+ (double)cellHeightWithPaidCollection:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
@property(retain, nonatomic) UIView *bottomSeperator; // @synthesize bottomSeperator=_bottomSeperator;
@property(retain, nonatomic) WCFinderProfilePaidCollectionCellContentView *courseContentView; // @synthesize courseContentView=_courseContentView;
- (void)layoutSeperator;
- (void)updateWithPaidCollection:(id)arg1 isLastCell:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setupUI;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

