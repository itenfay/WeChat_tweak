//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UITextView;

@interface MJMovieTextButton
{
    unsigned long long _style;
    UITextView *_textView;
    UITextView *_placeholderView;
}

+ (id)buildTextViewWithFont:(id)arg1 maximumNumberOfLines:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UITextView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)_textView;
- (void)setPlaceholder:(id)arg1;
- (void)setText:(id)arg1;
- (void)setupViews;
- (id)initWithStyle:(unsigned long long)arg1;

@end

