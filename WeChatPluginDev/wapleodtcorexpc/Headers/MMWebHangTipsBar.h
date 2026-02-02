//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, SightIconView;
@protocol MMWebHangTipsBarDelegate;

@interface MMWebHangTipsBar : UIView
{
    id <MMWebHangTipsBarDelegate> _delegate;
    UIView *_buttonBgView;
    UIView *_sepLine;
    MMUILabel *_transLabel;
    MMUIButton *_linkBtn;
    MMUIButton *_closeBtn;
    SightIconView *_loadView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SightIconView *loadView; // @synthesize loadView=_loadView;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) MMUIButton *linkBtn; // @synthesize linkBtn=_linkBtn;
@property(retain, nonatomic) MMUILabel *transLabel; // @synthesize transLabel=_transLabel;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) UIView *buttonBgView; // @synthesize buttonBgView=_buttonBgView;
@property(nonatomic) __weak id <MMWebHangTipsBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickCloseBtn:(id)arg1;
- (void)onClickLinkBtn:(id)arg1;
- (void)setSepLineShow:(_Bool)arg1;
- (void)setTransTipsText:(id)arg1 andHideLoad:(_Bool)arg2;
- (void)layoutSubviews;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

