//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, RichTextView, UIImageView, WCFinderPostModifyModel;
@protocol WCFinderModifiedLogBannerViewDelegate;

@interface WCFinderModifiedLogBannerView
{
    id <WCFinderModifiedLogBannerViewDelegate> _delegate;
    WCFinderPostModifyModel *_modifyModel;
    RichTextView *_fromTextView;
    UIImageView *_arrowImageView;
    RichTextView *_toTextView;
    MMUIView *_deleteBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) RichTextView *toTextView; // @synthesize toTextView=_toTextView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) RichTextView *fromTextView; // @synthesize fromTextView=_fromTextView;
@property(retain, nonatomic) WCFinderPostModifyModel *modifyModel; // @synthesize modifyModel=_modifyModel;
@property(nonatomic) __weak id <WCFinderModifiedLogBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickDeleteBtn;
- (void)layoutAllSubviews;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2;

@end

