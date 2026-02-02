//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel;
@protocol POICorrectionTextViewDelegate;

@interface POICorrectionTextView : UIView
{
    _Bool _isFooterStyle;
    _Bool _isTopSeperatorValid;
    id <POICorrectionTextViewDelegate> _delegate;
    double _contentPaddingX;
    UILabel *_mainLabel;
    UILabel *_tipsLabel;
    UIView *_topSeperatorLine;
}

+ (double)contentHeight:(double)arg1 isFooterStyle:(_Bool)arg2 paddingX:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topSeperatorLine; // @synthesize topSeperatorLine=_topSeperatorLine;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(nonatomic) double contentPaddingX; // @synthesize contentPaddingX=_contentPaddingX;
@property(nonatomic) _Bool isTopSeperatorValid; // @synthesize isTopSeperatorValid=_isTopSeperatorValid;
@property(nonatomic) _Bool isFooterStyle; // @synthesize isFooterStyle=_isFooterStyle;
@property(nonatomic) __weak id <POICorrectionTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

