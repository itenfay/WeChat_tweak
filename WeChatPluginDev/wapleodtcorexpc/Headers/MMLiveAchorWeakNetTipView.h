//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUIImageView, MMUILabel;

@interface MMLiveAchorWeakNetTipView : UIView
{
    MMUIImageView *_nextImageView;
    CDUnknownBlockType _actionClickBlock;
    unsigned long long _type;
    MMUIButton *_actionButton;
    MMUIImageView *_errImageView;
    MMUILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIImageView *errImageView; // @synthesize errImageView=_errImageView;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)setActionClickBlock:(CDUnknownBlockType)arg1;
- (void)actionButtonClick;
@property(readonly, nonatomic) MMUIImageView *nextImageView;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateContentWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end

