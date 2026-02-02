//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RequestContactReq, UIButton, UIImageView, UILabel, UIView, WCFinderHeadImageView, WCFinderPersonalCenterViewModel;

@interface NewLifeCheckContactValidPageSheet
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    WCFinderPersonalCenterViewModel *_viewModel;
    NSString *_finderUsername;
    RequestContactReq *_req;
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_topLine;
    UIView *_centerView;
    UIImageView *_addImageView;
    WCFinderHeadImageView *_headImageView;
    UILabel *_nameLabel;
    UIView *_bottomLine;
    UIButton *_doneButton;
    UIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIImageView *addImageView; // @synthesize addImageView=_addImageView;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) RequestContactReq *req; // @synthesize req=_req;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) WCFinderPersonalCenterViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)createUserFinished:(id)arg1;
- (void)onJumpCreateFinderContact;
- (void)onCancel;
- (void)onDone;
- (void)pageSheetWillAppear;
- (void)pageSheetDidClose:(_Bool)arg1;
- (double)contentHeight;
- (void)updateLayout;
- (void)initSubviews;
- (void)initData;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

