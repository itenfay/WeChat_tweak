//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_Style, NSString, RichTextView, UIImageView, UILabel, WCFinderJumpInfo, WCFinderJumpInfoIconView;
@protocol WCFinderAdBannerViewDelegate;

@interface WCFinderAdBannerView : UIView
{
    int _showPosition;
    id <WCFinderAdBannerViewDelegate> _delegate;
    WCFinderJumpInfoIconView *_iconView;
    RichTextView *_textView;
    WCFinderJumpInfo *_jumpInfo;
    FinderJumpInfo_Style *_style;
    UIImageView *_arrowImageView;
    UIView *_bottomLineView;
    UILabel *_adLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @synthesize style=_style;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) WCFinderJumpInfoIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <WCFinderAdBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)videoTid;
- (_Bool)videoPauseState;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)layoutViewByPosition;
- (void)updateUIInfo;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)onClickAction;
- (id)localIconFormJumpInfo:(id)arg1 iconSize:(struct CGSize)arg2 iconColor:(id)arg3 enable:(_Bool)arg4;
- (id)getLocalDefaultPagResPath:(id)arg1;
- (id)fetchRecommendForJumpInfo:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 jumpInfo:(id)arg2 enableClick:(_Bool)arg3 disableIconColor:(id)arg4 disableTextColor:(id)arg5 iconSize:(struct CGSize)arg6 textFont:(id)arg7 delegate:(id)arg8 textNormalColor:(id)arg9 adLabelColor:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

