//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UILabel, UIView, WCLiveBlurButton;

@interface MMFinderLiveBoxPageSheetView
{
    UIView *_contentView;
    WCLiveBlurButton *_closeButton;
    UIButton *_button;
    UILabel *_title;
    UILabel *_detail;
    double _titleCenter;
    double _detailTop;
    double _buttonTop;
    double _contentHeight;
    CDUnknownBlockType _callback;
    CDUnknownBlockType _didDismiss;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didDismiss; // @synthesize didDismiss=_didDismiss;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) double buttonTop; // @synthesize buttonTop=_buttonTop;
@property(nonatomic) double detailTop; // @synthesize detailTop=_detailTop;
@property(nonatomic) double titleCenter; // @synthesize titleCenter=_titleCenter;
@property(retain, nonatomic) UILabel *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) WCLiveBlurButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)onButtonClicked;
- (void)layoutSubviews;
- (void)pageSheetDidDisappear;
- (void)onCloseButtonClicked;
- (void)initSubView;
- (void)setupPageSheetConfig;
- (id)initWithTitleCenter:(double)arg1 detailTop:(double)arg2 buttonTop:(double)arg3 contentHeight:(double)arg4;

@end

