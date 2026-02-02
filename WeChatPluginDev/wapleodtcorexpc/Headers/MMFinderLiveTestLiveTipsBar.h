//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MMUIButton, UILabel;

@interface MMFinderLiveTestLiveTipsBar : UIView
{
    CDUnknownBlockType _closeTestLiveBlock;
    UIView *_contentView;
    CAShapeLayer *_shapeLayer;
    UILabel *_tipLabel;
    MMUIButton *_closeBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType closeTestLiveBlock; // @synthesize closeTestLiveBlock=_closeTestLiveBlock;
- (void)updateSelfViewShapeClip;
- (void)closeTestLiveClick;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

