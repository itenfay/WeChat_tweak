//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface WCFinderApplyAcceptPhoneViewController
{
    CDUnknownBlockType _complete;
    UIView *_bgView;
    UIView *_detailView;
}

+ (void)showVCFromVC:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
- (void)close:(_Bool)arg1;
- (void)onClickAccept;
- (void)onClickCancelBtn;
- (id)createButtonWithTitle:(id)arg1 titleColor:(id)arg2 bgColor:(id)arg3 action:(SEL)arg4;
- (id)createDetailView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

