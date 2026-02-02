//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RichTextView, UIImageView;
@protocol WCFinderNavTeenagerViewDelegate;

@interface WCFinderNavTeenagerView
{
    double _maxWidth;
    UIImageView *_teenagerImageView;
    id <WCFinderNavTeenagerViewDelegate> _delegate;
    RichTextView *_richTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(nonatomic) __weak id <WCFinderNavTeenagerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *teenagerImageView; // @synthesize teenagerImageView=_teenagerImageView;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (void)onClickAction;
- (void)layoutAllSubviews;
- (void)updateUIModelStyle:(unsigned long long)arg1;
- (void)_updateUIStyle:(unsigned long long)arg1;
- (_Bool)updateTitle:(id)arg1 mode:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

