//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, MMUIButton, UIButton, UILabel;
@protocol StorageFootPanelViewDelegate;

@interface StorageFootPanelView : UIView
{
    _Bool _bShowHardLinkTip;
    id <StorageFootPanelViewDelegate> _delegate;
    UIButton *_selectAllButton;
    UIButton *_deleteButton;
    UILabel *_sizeLabel;
    MMUIActivityIndicatorView *_loadingIndicatorView;
    MMUIButton *_hardlinkInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *hardlinkInfo; // @synthesize hardlinkInfo=_hardlinkInfo;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
@property(nonatomic) _Bool bShowHardLinkTip; // @synthesize bShowHardLinkTip=_bShowHardLinkTip;
@property(nonatomic) __weak id <StorageFootPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFootPanelDeleteButtonClick;
- (void)onFootPanelSelectButtonClick;
- (void)onClickShowInfo;
- (void)updateView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

