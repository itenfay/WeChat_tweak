//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UILabel;
@protocol MMLiveMusicOperationPanelDelegate;

@interface MMLiveMusicOperationPanel : UIView
{
    id <MMLiveMusicOperationPanelDelegate> _delegate;
    UIView *_panelView;
    MMUIButton *_bgMusicButton;
    UILabel *_bgMusicLabel;
    UILabel *_bgMusicGuideLabel;
    MMUIButton *_singButton;
    UILabel *_singLabel;
    UILabel *_singGuideLabel;
    MMUIButton *_arrowButton;
    MMUIButton *_backgroundExitButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *backgroundExitButton; // @synthesize backgroundExitButton=_backgroundExitButton;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) UILabel *singGuideLabel; // @synthesize singGuideLabel=_singGuideLabel;
@property(retain, nonatomic) UILabel *singLabel; // @synthesize singLabel=_singLabel;
@property(retain, nonatomic) MMUIButton *singButton; // @synthesize singButton=_singButton;
@property(retain, nonatomic) UILabel *bgMusicGuideLabel; // @synthesize bgMusicGuideLabel=_bgMusicGuideLabel;
@property(retain, nonatomic) UILabel *bgMusicLabel; // @synthesize bgMusicLabel=_bgMusicLabel;
@property(retain, nonatomic) MMUIButton *bgMusicButton; // @synthesize bgMusicButton=_bgMusicButton;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) __weak id <MMLiveMusicOperationPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)createDescLabelWithText:(id)arg1;
- (void)onClickSingButton;
- (void)onClickBGMusicButton;
- (void)closeWithSelection:(unsigned long long)arg1;
- (void)onTapNotPanelArea;
- (void)setSubPathWithTitle:(id)arg1 selection:(unsigned long long)arg2;
- (void)showPanel;
- (void)layoutSubviews;

@end

