//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonBoardView, NSString, UIView;
@protocol EmoticonBoardViewDelegate><BaseEmoticonViewDelegate;

@interface WSEmoticonPadViewController
{
    _Bool _emoticonBoardUp;
    id <EmoticonBoardViewDelegate><BaseEmoticonViewDelegate> _delegate;
    UIView *_contentBGView;
    EmoticonBoardView *_emoticonPad;
    UIView *_guideView;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isEmoticonBoardUp) _Bool emoticonBoardUp; // @synthesize emoticonBoardUp=_emoticonBoardUp;
@property(retain, nonatomic) UIView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) EmoticonBoardView *emoticonPad; // @synthesize emoticonPad=_emoticonPad;
@property(retain, nonatomic) UIView *contentBGView; // @synthesize contentBGView=_contentBGView;
@property(nonatomic) __weak id <EmoticonBoardViewDelegate><BaseEmoticonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)animateHideWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)touchDownInsideMask:(id)arg1;
- (void)animatShowOnView:(id)arg1 refFrame:(struct CGRect)arg2 exterInfo:(id)arg3;
- (void)initViews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

