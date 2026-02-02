//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCUIAlertView;
@protocol WCPayCommentTextViewDelegate;

@interface WCPayCommentTextView
{
    _Bool _isShowingAlertView;
    unsigned int _m_maxCommentLength;
    id <WCPayCommentTextViewDelegate> _m_alertDelegate;
    NSString *_m_comment;
    NSString *_m_initComment;
    NSString *_m_modifyComment;
    NSString *_m_inputTitle;
    NSString *_m_placeHolder;
    WCUIAlertView *_m_alertView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowingAlertView; // @synthesize isShowingAlertView=_isShowingAlertView;
@property(retain, nonatomic) WCUIAlertView *m_alertView; // @synthesize m_alertView=_m_alertView;
@property(nonatomic) unsigned int m_maxCommentLength; // @synthesize m_maxCommentLength=_m_maxCommentLength;
@property(retain, nonatomic) NSString *m_placeHolder; // @synthesize m_placeHolder=_m_placeHolder;
@property(retain, nonatomic) NSString *m_inputTitle; // @synthesize m_inputTitle=_m_inputTitle;
@property(retain, nonatomic) NSString *m_modifyComment; // @synthesize m_modifyComment=_m_modifyComment;
@property(retain, nonatomic) NSString *m_initComment; // @synthesize m_initComment=_m_initComment;
@property(retain, nonatomic) NSString *m_comment; // @synthesize m_comment=_m_comment;
@property(nonatomic) __weak id <WCPayCommentTextViewDelegate> m_alertDelegate; // @synthesize m_alertDelegate=_m_alertDelegate;
- (void)updatePlaceHolder:(id)arg1;
- (_Bool)isFirstResponder;
- (void)confirmComment;
- (void)cancelComment;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateCommentMaxLength:(unsigned int)arg1;
- (void)updateContent;
- (id)commentText;
- (void)updateInputTitle:(id)arg1;
- (void)updateComment:(id)arg1;
- (void)updateModifyComment:(id)arg1;
- (void)updateInitComment:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

