//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, UIView;

@interface WCListenLyricsPlayCell : UICollectionViewCell
{
    MMUILabel *_textLabel;
    UIView *_highlightedView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightedView; // @synthesize highlightedView=_highlightedView;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)updateDisplay:(double)arg1;
- (void)updateText:(id)arg1 font:(id)arg2 textColor:(id)arg3 paddingEdgeInsets:(struct UIEdgeInsets)arg4;
- (void)updateText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)internalConfigureLayout:(id)arg1 textColor:(id)arg2 paddingEdgeInsets:(struct UIEdgeInsets)arg3;
- (void)configureLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

