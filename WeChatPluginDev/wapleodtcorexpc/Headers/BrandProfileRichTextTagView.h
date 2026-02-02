//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UITapGestureRecognizer;
@protocol BrandProfileRichTextTagViewDelegate;

@interface BrandProfileRichTextTagView : UIView
{
    RichTextView *_richTextView;
    UIView *_tagImageView;
    id <BrandProfileRichTextTagViewDelegate> _textTagViewDelegate;
    UIView *_tagView;
    double _limitWidth;
    unsigned long long _limitLineNumber;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (_Bool)canTagAddByLineBreak:(id)arg1 limitLineNumber:(unsigned long long)arg2;
+ (_Bool)canTagAddByLineEnd:(id)arg1 tagSize:(struct CGSize)arg2 limitWidth:(double)arg3;
+ (double)lastLineWidth:(id)arg1;
+ (long long)getCurrentLinesWithFont:(id)arg1 lineSpacing:(double)arg2 size:(struct CGSize)arg3;
+ (struct CGSize)sizeForContent:(id)arg1 font:(id)arg2 limitWidth:(double)arg3 lineSpacing:(double)arg4 limitLineNumber:(unsigned long long)arg5 outArrStyles:(id *)arg6 hasTag:(_Bool)arg7 tagImageSize:(struct CGSize)arg8;
- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) unsigned long long limitLineNumber; // @synthesize limitLineNumber=_limitLineNumber;
@property(nonatomic) double limitWidth; // @synthesize limitWidth=_limitWidth;
@property(retain, nonatomic) UIView *tagView; // @synthesize tagView=_tagView;
@property(nonatomic) __weak id <BrandProfileRichTextTagViewDelegate> textTagViewDelegate; // @synthesize textTagViewDelegate=_textTagViewDelegate;
@property(readonly, nonatomic) UIView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)layoutTagView;
- (void)initSubviews;
- (void)updateWithArrStyles:(id)arg1 limitWidth:(double)arg2 limitLineNumber:(unsigned long long)arg3;
- (void)setTagView:(id)arg1 size:(struct CGSize)arg2;
- (void)setTagViewHidden:(_Bool)arg1;
- (void)setTextColor:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onTap;
- (void)setupTapGesture;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

