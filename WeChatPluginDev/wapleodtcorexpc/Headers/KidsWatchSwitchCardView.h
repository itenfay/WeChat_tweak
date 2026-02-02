//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMHeadImageView, MMUILabel, NSArray, NSMutableArray, NSString;

@interface KidsWatchSwitchCardView : UIView
{
    double _cornerRadius;
    NSString *_title;
    NSString *_userName;
    NSArray *_items;
    unsigned long long _selectedIndex;
    CDUnknownBlockType _selectCallback;
    MMHeadImageView *_headImageView;
    MMUILabel *_titleLabel;
    NSMutableArray *_cellViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cellViews; // @synthesize cellViews=_cellViews;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(copy, nonatomic) CDUnknownBlockType selectCallback; // @synthesize selectCallback=_selectCallback;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)onTapCellView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

