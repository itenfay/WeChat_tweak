//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, MMActionSheetScrollView, MMUIButton, MMUIView, NSMutableArray, NSString, UIColor, UIFont, UILabel;
@protocol RecentForwardScrollViewDelegate;

@interface RecentForwardScrollView : UIView
{
    NSString *m_title;
    UIColor *m_backgroundColor;
    double m_headImgWidth;
    UIFont *m_titleFont;
    double m_titleMarginLeft;
    double m_titleMarginTop;
    double m_titleLineHeight;
    double m_scrollViewMarginLeft;
    double m_scrollItemMarginLeft;
    _Bool m_showSeperator;
    double m_bottomPadding;
    UIFont *m_nameLabelFont;
    _Bool m_bIgnoreChatRoom;
    _Bool m_onlyChatRoom;
    _Bool m_bNewEditModel;
    _Bool m_bStartNewEditModelIng;
    _Bool m_isHalfScreen;
    _Bool m_hasDeleteItem;
    NSMutableArray *m_deleteList;
    long long m_toUserIndex;
    NSString *m_toUserName;
    unsigned long long m_startTime;
    unsigned int _msgType;
    unsigned int _innerAppMsgType;
    id <RecentForwardScrollViewDelegate> _delegate;
    CContact *_longpressContact;
    long long _maxNumberOfForwardItem;
    UILabel *_titleLabel;
    id _userInfo;
    unsigned long long _scene;
    NSString *_reportUserInfo;
    UILabel *_tipLabel;
    MMActionSheetScrollView *_aScrollView;
    NSMutableArray *_iconViews;
    UIView *_seperator;
    MMUIButton *_deleteForwardChatBtnInNewEditModel;
    MMUIButton *_finishForwardChatBtnInNewEditModel;
    MMUIView *_finishForwardChatBtnInNewEditModelView;
}

+ (_Bool)hasRecentForward;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *finishForwardChatBtnInNewEditModelView; // @synthesize finishForwardChatBtnInNewEditModelView=_finishForwardChatBtnInNewEditModelView;
@property(retain, nonatomic) MMUIButton *finishForwardChatBtnInNewEditModel; // @synthesize finishForwardChatBtnInNewEditModel=_finishForwardChatBtnInNewEditModel;
@property(retain, nonatomic) MMUIButton *deleteForwardChatBtnInNewEditModel; // @synthesize deleteForwardChatBtnInNewEditModel=_deleteForwardChatBtnInNewEditModel;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) NSMutableArray *iconViews; // @synthesize iconViews=_iconViews;
@property(retain, nonatomic) MMActionSheetScrollView *aScrollView; // @synthesize aScrollView=_aScrollView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) NSString *reportUserInfo; // @synthesize reportUserInfo=_reportUserInfo;
@property(nonatomic) unsigned int innerAppMsgType; // @synthesize innerAppMsgType=_innerAppMsgType;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long maxNumberOfForwardItem; // @synthesize maxNumberOfForwardItem=_maxNumberOfForwardItem;
@property(retain, nonatomic) CContact *longpressContact; // @synthesize longpressContact=_longpressContact;
@property(nonatomic) __weak id <RecentForwardScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnDidClickSmallDeleteButton:(id)arg1;
- (_Bool)OnGetStartNewEditModelIngValue;
- (void)changeEditingStatus:(_Bool)arg1;
- (id)getDeleteList;
- (unsigned long long)getOneLineCount;
- (long long)indexForContact:(id)arg1;
- (void)reportRecentForwardHalfPanelUsage;
- (void)didMoveToWindow;
- (void)setForceDarkMode:(_Bool)arg1;
- (id)getAllIconView;
- (id)iconViewForContact:(id)arg1;
- (void)deleteContactAnimation;
- (void)deleteContact:(id)arg1;
- (void)onDeleteItem;
- (void)onItemLongPress:(id)arg1;
- (void)onItemClick:(id)arg1;
- (void)finishDelectChatNewEditModelAnimation;
- (void)finishDelectChatNewEditModel;
- (void)onClickFinishForwardChatBtnInNewEditModel;
- (void)deleteForwardChatNewEditModelAnimation;
- (void)onClickDeleteForwardChatBtnInNewEditModel;
- (void)layoutSubviews;
- (id)contactsForRecentForwardMenu;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)initFinishForwardChatBtnInNewEditModel;
- (void)initDeleteForwardChatBtnInNewEditModel;
- (void)initView;
- (id)initWithCount:(long long)arg1 title:(id)arg2 backgroundColor:(id)arg3 headImgWidth:(double)arg4 titleFont:(id)arg5 titleMarginLeft:(double)arg6 titleMarginTop:(double)arg7 titleLineHeight:(double)arg8 scrollViewMarginLeft:(double)arg9 scrollItemMarginLeft:(double)arg10 showSeperator:(_Bool)arg11 bottomPadding:(double)arg12 nameLabelFont:(id)arg13 ignoreChatRoom:(_Bool)arg14 bNewEditModel:(_Bool)arg15 onlyChatRoom:(_Bool)arg16;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

