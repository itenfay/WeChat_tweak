//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, WCVideoProducerBaseSheetViewConfig;
@protocol WCVideoProducerBaseSheetViewDelegate;

@interface WCVideoProducerBaseSheetView : UIView
{
    id <WCVideoProducerBaseSheetViewDelegate> _delegate;
    UIView *_topView;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIView *_contentView;
    UIView *_bottomView;
    WCVideoProducerBaseSheetViewConfig *_viewConfig;
    UIView *_containerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WCVideoProducerBaseSheetViewConfig *viewConfig; // @synthesize viewConfig=_viewConfig;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) __weak id <WCVideoProducerBaseSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_initContentView;
- (void)_initBottomView;
- (void)_initTopBarView;
- (void)_initContainerView;
- (void)_initView;
- (void)_relayoutViews;
- (void)_onClickRightButton;
- (void)_onClickLeftButton;
- (double)getContentHeight;
- (void)_loadViewConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewConfig:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

