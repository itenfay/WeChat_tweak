//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class KidsWatchButton, MMUILabel;

@interface KidsWatchActionCardView : UIView
{
    double _cornerRadius;
    double _buttonWidth;
    unsigned long long _action;
    CDUnknownBlockType _tapHandler;
    MMUILabel *_titleLabel;
    MMUILabel *_contentLabel;
    KidsWatchButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KidsWatchButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(nonatomic) double buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)onTapActionButton;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

