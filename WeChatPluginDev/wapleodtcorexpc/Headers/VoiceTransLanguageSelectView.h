//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTableViewInfo, NSString, UIPanGestureRecognizer;
@protocol VoiceTransLanguageSelectViewDelegate;

@interface VoiceTransLanguageSelectView : UIView
{
    unsigned int _languageType;
    NSString *_chatUserName;
    id <VoiceTransLanguageSelectViewDelegate> _delegate;
    MMTableViewInfo *_tableViewInfo;
    UIView *_selectPanelView;
    UIPanGestureRecognizer *_panGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) unsigned int languageType; // @synthesize languageType=_languageType;
@property(retain, nonatomic) UIView *selectPanelView; // @synthesize selectPanelView=_selectPanelView;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(nonatomic) __weak id <VoiceTransLanguageSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
- (void)onBackBtnClick;
- (void)onLanguageSelectd:(id)arg1;
- (void)updateSelectViewWithCurInputType:(unsigned int)arg1;
- (void)onPanGestureRecognizerAction:(id)arg1;
- (void)initPanGestureRecognizer;
- (void)addSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

