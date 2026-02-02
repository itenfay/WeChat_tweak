//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, KeepRotateImageView, MMLaconButton, MMUIButton, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView;

@interface ContactSelectToolView : UIView
{
    unsigned int _msgSelectedCount;
    double m_viewTop;
    UIView *m_viewBottomLine;
    NSMutableArray *m_arrMenu;
    CContact *m_menuContactToShow;
    CContact *m_menuContactShowing;
    CContact *m_menuContactSelected;
    UIButton *_completeButton;
    MMLaconButton *_msgHistoryButton;
    UIView *_selectContactsView;
    CDUnknownBlockType _completeHandler;
    CDUnknownBlockType _retryHandler;
    CDUnknownBlockType _viewMsgHistoryHandler;
    CDUnknownBlockType _deselectContactHandler;
    CDUnknownBlockType _previewSelectedContactHandler;
    KeepRotateImageView *_progressView;
    UIImageView *_msgHistorySelectedMark;
    UIImageView *_msgHistoryGoSelectMark;
    MMUIButton *_msgRetryButton;
    MMUIButton *_foldButton;
    NSMutableArray *_selectedContacts;
    NSMutableDictionary *_headImageViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *headImageViews; // @synthesize headImageViews=_headImageViews;
@property(retain, nonatomic) NSMutableArray *selectedContacts; // @synthesize selectedContacts=_selectedContacts;
@property(retain, nonatomic) MMUIButton *foldButton; // @synthesize foldButton=_foldButton;
@property(retain, nonatomic) MMUIButton *msgRetryButton; // @synthesize msgRetryButton=_msgRetryButton;
@property(retain, nonatomic) UIImageView *msgHistoryGoSelectMark; // @synthesize msgHistoryGoSelectMark=_msgHistoryGoSelectMark;
@property(retain, nonatomic) UIImageView *msgHistorySelectedMark; // @synthesize msgHistorySelectedMark=_msgHistorySelectedMark;
@property(retain, nonatomic) KeepRotateImageView *progressView; // @synthesize progressView=_progressView;
@property(copy, nonatomic) CDUnknownBlockType previewSelectedContactHandler; // @synthesize previewSelectedContactHandler=_previewSelectedContactHandler;
@property(copy, nonatomic) CDUnknownBlockType deselectContactHandler; // @synthesize deselectContactHandler=_deselectContactHandler;
@property(copy, nonatomic) CDUnknownBlockType viewMsgHistoryHandler; // @synthesize viewMsgHistoryHandler=_viewMsgHistoryHandler;
@property(copy, nonatomic) CDUnknownBlockType retryHandler; // @synthesize retryHandler=_retryHandler;
@property(copy, nonatomic) CDUnknownBlockType completeHandler; // @synthesize completeHandler=_completeHandler;
@property(readonly, nonatomic) UIView *selectContactsView; // @synthesize selectContactsView=_selectContactsView;
@property(retain, nonatomic) MMLaconButton *msgHistoryButton; // @synthesize msgHistoryButton=_msgHistoryButton;
@property(retain, nonatomic) UIButton *completeButton; // @synthesize completeButton=_completeButton;
- (void)onMenuControllerDidHide;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)showMenuForContact:(id)arg1;
- (void)deSelectContactInMune;
- (void)initMenu;
- (void)applicationDidBecomeActive;
- (void)onTapHeadImage:(id)arg1;
- (void)onShowAllSelectedContacts;
- (void)onClickRetry:(id)arg1;
- (void)onUpdateUploadProgress:(double)arg1;
- (void)onFailUpload;
- (void)onFinishUpload;
- (void)onStartUpload;
- (void)updateMsgHistoryCount:(unsigned int)arg1;
- (void)onViewMsgHistory:(id)arg1;
- (void)onDone:(id)arg1;
- (void)resetSelectContactViewAndHistoryButtonWithViewTop:(double)arg1;
- (id)historyButtonTitle;
- (void)layoutSubviews;
- (void)updateHeadPosition;
- (void)updateHeadPositionAnimated;
- (void)updateHeadImageViews;
- (void)updateSelectedContacts:(id)arg1;
- (void)updateWithCompleteBarButtonItem:(id)arg1;
- (id)generateCompleteButton;
- (void)initViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

