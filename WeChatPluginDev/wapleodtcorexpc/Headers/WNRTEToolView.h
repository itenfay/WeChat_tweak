//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIView, NSArray, NSString, UITableView, WNRTEToolViewHelper;
@protocol WNRTEToolViewDelegate;

@interface WNRTEToolView : UIView
{
    MMUIView *_extBtnContainer;
    UIView *_tabLine;
    _Bool _allowVoiceClick;
    UIView *_toastView;
    double _baseBtnMargin;
    UITableView *_tableView;
    double _extPanelHeight;
    _Bool _needUseAverageMargin;
    int _viewType;
    id <WNRTEToolViewDelegate> _delegate;
    NSArray *_baseBtns;
    NSArray *_extendBtns;
    WNRTEToolViewHelper *_toolViewHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WNRTEToolViewHelper *toolViewHelper; // @synthesize toolViewHelper=_toolViewHelper;
@property(retain, nonatomic) NSArray *extendBtns; // @synthesize extendBtns=_extendBtns;
@property(retain, nonatomic) NSArray *baseBtns; // @synthesize baseBtns=_baseBtns;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;
@property(nonatomic) __weak id <WNRTEToolViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)OnEndWNAudioRecordWithObj:(id)arg1 FilePath:(id)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4;
- (void)OnStartWNAudioRecordWithObj:(id)arg1;
- (void)allowVoiceBtnClick;
- (void)onCreateVoice:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)hideToastWithAnimation:(_Bool)arg1;
- (void)hideToast;
- (void)showToastView:(id)arg1;
- (void)setBtnEnable:(int)arg1 Enabled:(_Bool)arg2;
- (void)setBtnSelected:(long long)arg1 selected:(_Bool)arg2;
- (unsigned int)checkExceedMaxObjectCountAndAlert:(unsigned int)arg1;
- (void)onClickItem:(id)arg1;
- (id)getIconName:(int)arg1;
- (id)getAccessbilityHint:(int)arg1;
- (id)getTitle:(int)arg1;
- (void)updateBtnStatus;
- (double)getExtendPanelHeight;
- (void)showTextExtView;
- (void)showBasicView;
- (void)initExtendView;
- (id)genBaseButtomWithType:(int)arg1;
- (void)initBasicView;
- (double)realTotalWidth;
- (_Bool)isDeviceLandscape;
- (void)initUI;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

