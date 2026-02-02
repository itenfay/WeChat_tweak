//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PAGView, RichTextView, UIButton;

@interface WCFinderHalfScreenPrivateLikeViewController
{
    RichTextView *_titleTextView;
    RichTextView *_subtitleTextView;
    PAGView *_animationView;
    UIButton *_okButton;
    NSString *_mtitle;
    NSString *_subtitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *mtitle; // @synthesize mtitle=_mtitle;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) PAGView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) RichTextView *subtitleTextView; // @synthesize subtitleTextView=_subtitleTextView;
@property(retain, nonatomic) RichTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
- (double)calHalfScreenHeight;
- (void)clickOKButton;
- (void)layoutContentView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupAnimationView;
- (void)setupUI;
- (void)viewDidLoad;
- (void)initDataSource;
- (id)init;

@end

