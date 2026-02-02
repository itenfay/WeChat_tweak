//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSArray, NSMutableArray, NSString;

@interface KidsWatchInfoCardView : UIView
{
    double _cornerRadius;
    NSString *_title;
    NSArray *_items;
    MMUILabel *_titleLabel;
    NSMutableArray *_cellViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cellViews; // @synthesize cellViews=_cellViews;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

