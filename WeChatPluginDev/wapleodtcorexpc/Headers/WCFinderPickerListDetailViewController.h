//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, RichTextView, UILabel, UIScrollView, UIView, WCFinderFeedContentVM, WCFinderHeadImageView;

@interface WCFinderPickerListDetailViewController
{
    UIView *_contentContainderView;
    WCFinderFeedContentVM *_contentVM;
    MMUIButton *_customCloseBtn;
    UILabel *_titleLabel;
    UIScrollView *_scrollView;
    WCFinderHeadImageView *_headView;
    UILabel *_nickNameLabel;
    RichTextView *_textView;
    UIScrollView *_contentScrollView;
    RichTextView *_contentTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *customCloseBtn; // @synthesize customCloseBtn=_customCloseBtn;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIView *contentContainderView; // @synthesize contentContainderView=_contentContainderView;
- (void)onClose;
- (id)closeButton;
- (id)topView;
- (void)setupSubView;
- (void)viewWillLayoutSubviews;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;
- (id)initWithContentVM:(id)arg1;

@end

