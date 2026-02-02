//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MJComposingPanelViewModel, UIViewController;

@interface MJComposingPanelView : UIView
{
    MJComposingPanelViewModel *_viewModel;
    UIView *_contentView;
    UIViewController *_contentViewController;
    double _panelHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double panelHeight; // @synthesize panelHeight=_panelHeight;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) MJComposingPanelViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)description;
- (id)initWithViewModel:(id)arg1 contentViewController:(id)arg2;
- (id)initWithViewModel:(id)arg1 contentView:(id)arg2;

@end

