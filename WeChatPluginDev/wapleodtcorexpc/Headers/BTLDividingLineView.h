//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel;

@interface BTLDividingLineView : UIView
{
    UILabel *_tipsLabel;
    UIView *_leftLine;
    UIView *_rightLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)layoutSubviews;
- (void)internalInitWithWording:(id)arg1 font:(id)arg2;
- (id)initWithTipsWording:(id)arg1 font:(id)arg2;

@end

