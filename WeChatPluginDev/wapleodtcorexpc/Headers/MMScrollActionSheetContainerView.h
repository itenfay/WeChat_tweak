//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIScrollView;
@protocol MMScrollActionSheetContainerViewDelegate;

@interface MMScrollActionSheetContainerView : UIView
{
    UIScrollView *_bodyView;
    UIView *_footerView;
    UIView *_headerView;
    UIView *_bodyFooterView;
    UIView *_maskView;
    UIButton *_voiceoverExitButton;
    id <MMScrollActionSheetContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMScrollActionSheetContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *voiceoverExitButton; // @synthesize voiceoverExitButton=_voiceoverExitButton;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *bodyFooterView; // @synthesize bodyFooterView=_bodyFooterView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIScrollView *bodyView; // @synthesize bodyView=_bodyView;
- (void)onClickVoiceOverExitButton;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)addActionSheetBodyFooter:(id)arg1;
- (void)addActionSheetFooter:(id)arg1;
- (void)addActionSheetHeader:(id)arg1;
- (void)reloadMaskView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

