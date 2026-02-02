//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class NSString, RichTextView, UIImageView, WCMomentsErrTipsViewModel;
@protocol WCTimelineErrTipsViewDelegate;

@interface WCTimelineErrTipsView : UIButton
{
    id <WCTimelineErrTipsViewDelegate> _delegate;
    UIImageView *_errImageView;
    RichTextView *_errTipsView;
    WCMomentsErrTipsViewModel *_viewModel;
}

+ (double)heightForDataItem:(id)arg1 width:(double)arg2;
+ (double)heightForViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsErrTipsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) RichTextView *errTipsView; // @synthesize errTipsView=_errTipsView;
@property(retain, nonatomic) UIImageView *errImageView; // @synthesize errImageView=_errImageView;
@property(nonatomic) __weak id <WCTimelineErrTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)layoutSubviews;
- (id)errTipsAccessibilityText;
- (void)updateWithDataItem:(id)arg1;
- (void)updateErrImageView:(unsigned long long)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

