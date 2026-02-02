//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class MMUILabel, NSArray;

@interface MMFinderLiveAnchorCustomizeRewardStyleSelectPanelTab : UIScrollView
{
    CDUnknownBlockType _onLabelClickedAtIndex;
    NSArray *_labelArray;
    MMUILabel *_selectedTabLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *selectedTabLabel; // @synthesize selectedTabLabel=_selectedTabLabel;
@property(retain, nonatomic) NSArray *labelArray; // @synthesize labelArray=_labelArray;
@property(copy, nonatomic) CDUnknownBlockType onLabelClickedAtIndex; // @synthesize onLabelClickedAtIndex=_onLabelClickedAtIndex;
- (void)onSelectTab:(id)arg1;
- (void)onTapStyleTabLabel:(id)arg1;
- (double)firstTabLeftInterval;
- (double)tabWidthInterval;
- (double)tabHeightInterval;
- (double)tabContainerHeight;
- (void)configLabelSize:(id)arg1;
- (void)updateLabelOrigin:(id)arg1;
- (void)updateLabel:(id)arg1 withSelected:(_Bool)arg2;
- (void)setSelectedTabWithLabelText:(id)arg1;
- (void)layoutSubviews;
- (id)createLabelWithText:(id)arg1;
- (void)initLabelArrayWithLabelTextArray:(id)arg1;
- (id)initWithTabLabelTextArray:(id)arg1;

@end

