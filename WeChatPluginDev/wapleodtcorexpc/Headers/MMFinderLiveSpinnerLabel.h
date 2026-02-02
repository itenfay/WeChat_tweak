//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIColor, UIFont, UILabel;

@interface MMFinderLiveSpinnerLabel : UIView
{
    UILabel *_primaryLabel;
    UILabel *_alternativeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *alternativeLabel; // @synthesize alternativeLabel=_alternativeLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
- (void)layoutSubviews;
- (id)accessibilityElements;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAttributedText:(id)arg1 direction:(unsigned long long)arg2 duration:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setText:(id)arg1 direction:(unsigned long long)arg2 duration:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) NSAttributedString *attributedText;
@property(retain, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;

@end

