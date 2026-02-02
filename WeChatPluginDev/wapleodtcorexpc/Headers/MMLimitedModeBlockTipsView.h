//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIScrollView;

@interface MMLimitedModeBlockTipsView : UIView
{
    CDUnknownBlockType _onQuitBlock;
    UIScrollView *_contentView;
    MMUILabel *_descLabel;
}

+ (id)showBlockTipsInViewController:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType onQuitBlock; // @synthesize onQuitBlock=_onQuitBlock;
- (void)onClickQuitBtn;
- (void)layoutSubviews;
- (void)configView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

