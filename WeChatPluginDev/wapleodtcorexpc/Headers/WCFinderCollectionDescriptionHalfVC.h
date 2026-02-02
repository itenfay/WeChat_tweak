//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, RichTextView, UIScrollView;

@interface WCFinderCollectionDescriptionHalfVC
{
    NSString *_descContent;
    double _heightRatio;
    UIScrollView *_scrollView;
    RichTextView *_textView;
    MMUIButton *_closeBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(copy, nonatomic) NSString *descContent; // @synthesize descContent=_descContent;
- (void)onCloseBtnClicked:(id)arg1;
- (void)setupUI;
- (double)scrollViewHeight;
- (void)viewWillLayoutSubviews;
- (double)topViewHeight;
- (double)getMaxHalfScreenHeight;
- (double)halfScreenHeight;
- (void)viewDidLoad;
- (void)baseInit;
- (id)initWithDescription:(id)arg1;

@end

