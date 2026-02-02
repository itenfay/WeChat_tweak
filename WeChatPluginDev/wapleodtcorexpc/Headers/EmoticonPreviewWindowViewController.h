//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HLActionButton, NSString, UIImage, UIImageView, UIView;
@protocol EmoticonPreviewWindowViewControllerDelegate;

@interface EmoticonPreviewWindowViewController
{
    int _aligment;
    id <EmoticonPreviewWindowViewControllerDelegate> _delegate;
    HLActionButton *_moveToFrontButton;
    HLActionButton *_deleteButton;
    HLActionButton *_showDetailButton;
    HLActionButton *_confirmDelButton;
    UIView *_horizontalDivider;
    UIView *_verticalDivider;
    UIImage *_leftTipsBubble;
    UIImage *_rightTipsBubble;
    UIImage *_midTipsBubble;
    UIImageView *_leftButtonBubble;
    UIImageView *_rightButtonBubble;
    UIImageView *_midButtonBubble;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *midButtonBubble; // @synthesize midButtonBubble=_midButtonBubble;
@property(retain, nonatomic) UIImageView *rightButtonBubble; // @synthesize rightButtonBubble=_rightButtonBubble;
@property(retain, nonatomic) UIImageView *leftButtonBubble; // @synthesize leftButtonBubble=_leftButtonBubble;
@property(retain, nonatomic) UIImage *midTipsBubble; // @synthesize midTipsBubble=_midTipsBubble;
@property(retain, nonatomic) UIImage *rightTipsBubble; // @synthesize rightTipsBubble=_rightTipsBubble;
@property(retain, nonatomic) UIImage *leftTipsBubble; // @synthesize leftTipsBubble=_leftTipsBubble;
@property(nonatomic) int aligment; // @synthesize aligment=_aligment;
@property(retain, nonatomic) UIView *verticalDivider; // @synthesize verticalDivider=_verticalDivider;
@property(retain, nonatomic) UIView *horizontalDivider; // @synthesize horizontalDivider=_horizontalDivider;
@property(retain, nonatomic) HLActionButton *confirmDelButton; // @synthesize confirmDelButton=_confirmDelButton;
@property(retain, nonatomic) HLActionButton *showDetailButton; // @synthesize showDetailButton=_showDetailButton;
@property(retain, nonatomic) HLActionButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) HLActionButton *moveToFrontButton; // @synthesize moveToFrontButton=_moveToFrontButton;
@property(nonatomic) __weak id <EmoticonPreviewWindowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)currentEmotionMd5;
- (_Bool)isSelfModEvent:(id)arg1;
- (void)onStickyBackupEmoticonFailed:(id)arg1;
- (void)onStickyBackupEmoticonOK:(id)arg1;
- (void)onDeleteBackupEmoticonFailed:(id)arg1;
- (void)onDeleteBackupEmoticonOK:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onShowEmotionDetailPage:(id)arg1;
- (void)onMoveEmoticonToFront:(id)arg1;
- (void)onComfirmDeleteEmoticon:(id)arg1;
- (void)onDeleteEmoticon:(id)arg1;
- (void)changeToDeleteConfirmMode;
- (void)layoutSubviewFrame;
- (void)setPreviewModel:(id)arg1;
- (void)setupButtonBubbleImageLeft:(id)arg1 mid:(id)arg2 right:(id)arg3;
- (void)layoutButtonComponent;
- (id)actionButtonWithTitle:(id)arg1 selector:(SEL)arg2;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

