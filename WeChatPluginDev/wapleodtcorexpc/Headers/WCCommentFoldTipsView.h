//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel, WCMomentsErrTipsViewModel;

@interface WCCommentFoldTipsView : UIView
{
    UILabel *_tipsLabel;
    WCMomentsErrTipsViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsErrTipsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

@end

