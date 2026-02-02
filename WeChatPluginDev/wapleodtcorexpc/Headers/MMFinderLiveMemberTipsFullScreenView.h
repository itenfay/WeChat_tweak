//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface MMFinderLiveMemberTipsFullScreenView
{
    _Bool _isShow;
    _Bool _isAppear;
    unsigned int _requestActionSeq;
    CDUnknownBlockType _confirmCallback;
    unsigned long long _memberShipPayCoinNum;
    UIView *_parentView;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int requestActionSeq; // @synthesize requestActionSeq=_requestActionSeq;
@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) unsigned long long memberShipPayCoinNum; // @synthesize memberShipPayCoinNum=_memberShipPayCoinNum;
@property(copy, nonatomic) CDUnknownBlockType confirmCallback; // @synthesize confirmCallback=_confirmCallback;
- (void)notifyDisappear;
- (void)notifyAppear;
- (void)checkIsMemberShipWithAnchor;
- (id)tipsLabelText;
- (void)onConfirmButtonClicked;
- (void)updateConfirmButtonTitleAndImage;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)onConfirm;
- (id)getConfirmtButtonImg;
- (id)getConfirmButtonText;
- (id)initWithFrame:(struct CGRect)arg1 liveTask:(id)arg2;

@end

