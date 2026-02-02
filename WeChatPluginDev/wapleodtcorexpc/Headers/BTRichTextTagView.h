//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView;

@interface BTRichTextTagView : UIView
{
    RichTextView *_richTextView;
    UIView *_tagView;
    NSString *_tagAccessibilityLabel;
    double _limitWidth;
    unsigned long long _limitLineNumber;
    double _customTextTagLeftSpacing;
    double _customTextTagBottomSpacing;
}

+ (_Bool)canTagAddByLineBreak:(id)arg1 limitLineNumber:(unsigned long long)arg2;
+ (_Bool)canTagAddByLineEnd:(id)arg1 tagSize:(struct CGSize)arg2 limitWidth:(double)arg3;
+ (double)lastLineWidth:(id)arg1;
+ (struct CGSize)sizeForContent:(id)arg1 font:(id)arg2 limitWidth:(double)arg3 lineSpacing:(double)arg4 limitLineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 outArrStyles:(id *)arg7 hasTag:(_Bool)arg8 tagSize:(struct CGSize)arg9 spacingDic:(id)arg10;
+ (struct CGSize)sizeForContent:(id)arg1 font:(id)arg2 limitWidth:(double)arg3 lineSpacing:(double)arg4 limitLineNumber:(unsigned long long)arg5 outArrStyles:(id *)arg6 hasTag:(_Bool)arg7 tagSize:(struct CGSize)arg8 spacingDic:(id)arg9;
- (void).cxx_destruct;
@property(nonatomic) double customTextTagBottomSpacing; // @synthesize customTextTagBottomSpacing=_customTextTagBottomSpacing;
@property(nonatomic) double customTextTagLeftSpacing; // @synthesize customTextTagLeftSpacing=_customTextTagLeftSpacing;
@property(nonatomic) unsigned long long limitLineNumber; // @synthesize limitLineNumber=_limitLineNumber;
@property(nonatomic) double limitWidth; // @synthesize limitWidth=_limitWidth;
@property(retain, nonatomic) NSString *tagAccessibilityLabel; // @synthesize tagAccessibilityLabel=_tagAccessibilityLabel;
@property(retain, nonatomic) UIView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)setSubviewOrigin;
- (void)fitSize;
- (void)updateWithArrStyles:(id)arg1 limitWidth:(double)arg2 limitLineNumber:(unsigned long long)arg3 content:(id)arg4 spacingDic:(id)arg5;
- (void)updateWithArrStyles:(id)arg1 limitWidth:(double)arg2 limitLineNumber:(unsigned long long)arg3;
- (void)setTagViewAccessibilityLabel:(id)arg1;
- (void)setTagView:(id)arg1 size:(struct CGSize)arg2;
- (void)setTagViewHidden:(_Bool)arg1;
- (void)setTextColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

