//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface WASheetHeaderTipsView : UIView
{
    CDUnknownBlockType _clickCloseBlock;
    CDUnknownBlockType _didShowBlock;
    NSString *_tipsText;
    UILabel *_tipsLabel;
    UIButton *_closeButton;
    UIImageView *_iconView;
}

+ (double)tipsViewHeightWithText:(id)arg1 superviewWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(copy, nonatomic) NSString *tipsText; // @synthesize tipsText=_tipsText;
@property(copy, nonatomic) CDUnknownBlockType didShowBlock; // @synthesize didShowBlock=_didShowBlock;
@property(copy, nonatomic) CDUnknownBlockType clickCloseBlock; // @synthesize clickCloseBlock=_clickCloseBlock;
- (void)didMoveToWindow;
- (void)onClickTipsClose:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithTipsText:(id)arg1;

@end

