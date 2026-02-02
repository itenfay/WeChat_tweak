//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString;
@protocol WCPayBottomPanelViewDelegate;

@interface WCPayBottomPanelView : UIView
{
    id <WCPayBottomPanelViewDelegate> _delegate;
    NSString *_title;
    NSString *_btnTitle;
    UIView *_detailView;
    UIView *_backgroundView;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCPayBottomPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)confirmBtnClick;
- (void)handleTap;
- (void)setupContentView;
- (id)initPanelViewWithTitle:(id)arg1 detailView:(id)arg2 confirmBtnTitle:(id)arg3;

@end

