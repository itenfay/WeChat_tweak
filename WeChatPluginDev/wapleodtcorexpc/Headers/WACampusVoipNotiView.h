//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class MMVoipCSMainWindow, NSString, UIButton, UIImageView, UILabel, VoipAutoUpdateLabel, WACampusVoipMsg;

@interface WACampusVoipNotiView : UIControl
{
    WACampusVoipMsg *_msg;
    CDUnknownBlockType _clickAction;
    CDUnknownBlockType _acceptAction;
    CDUnknownBlockType _rejectAction;
    UILabel *_nameLabel;
    UIImageView *_iconView;
    VoipAutoUpdateLabel *_descLabel;
    UIButton *_rejectButton;
    UIButton *_acceptButton;
    MMVoipCSMainWindow *_notiWindow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMVoipCSMainWindow *notiWindow; // @synthesize notiWindow=_notiWindow;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UIButton *rejectButton; // @synthesize rejectButton=_rejectButton;
@property(retain, nonatomic) VoipAutoUpdateLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(copy, nonatomic) CDUnknownBlockType rejectAction; // @synthesize rejectAction=_rejectAction;
@property(copy, nonatomic) CDUnknownBlockType acceptAction; // @synthesize acceptAction=_acceptAction;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(retain, nonatomic) WACampusVoipMsg *msg; // @synthesize msg=_msg;
- (void)onMMVoipCSMainWindowQuitAnimationDidEnd;
- (void)setupViews;
- (void)dismiss;
- (void)show;
- (void)handleContentViewPanGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithMsg:(id)arg1 clickAction:(CDUnknownBlockType)arg2 acceptAction:(CDUnknownBlockType)arg3 rejectAction:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

