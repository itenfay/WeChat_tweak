//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;
@protocol WCPayRecommendItemViewDelegate;

@interface WCPayRecommendItemView : UIView
{
    id <WCPayRecommendItemViewDelegate> _m_delegate;
    NSArray *_numbers;
    NSMutableArray *_itemViews;
    NSMutableArray *_seperatorViews;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *seperatorViews; // @synthesize seperatorViews=_seperatorViews;
@property(retain) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain) NSArray *numbers; // @synthesize numbers=_numbers;
@property __weak id <WCPayRecommendItemViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onClickButton:(id)arg1;
- (void)addLine;
- (void)addButton:(id)arg1;
- (void)updateButtons;
- (void)updateNumbers:(id)arg1;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

