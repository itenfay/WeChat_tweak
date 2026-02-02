//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel;

@interface BTOftenReadHeaderView : UIView
{
    MMUILabel *_firstTitleLabel;
    MMUILabel *_secondTitleLabel;
    double _titleSpacing;
}

- (void).cxx_destruct;
@property(nonatomic) double titleSpacing; // @synthesize titleSpacing=_titleSpacing;
@property(retain, nonatomic) MMUILabel *secondTitleLabel; // @synthesize secondTitleLabel=_secondTitleLabel;
@property(retain, nonatomic) MMUILabel *firstTitleLabel; // @synthesize firstTitleLabel=_firstTitleLabel;
- (void)layoutSubviews;
- (void)updateWithFirstTitle:(id)arg1 secondTitle:(id)arg2;
- (void)initSubviews;
- (id)init;

@end

