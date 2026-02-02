//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSObject, NSString, UILabel, WAPlateInputView, WAPlateItem;
@protocol WAPlateEditViewControllerDelegate;

@interface WAPlateEditViewController
{
    _Bool _firstIn;
    NSString *_createSubDesc;
    NSObject<WAPlateEditViewControllerDelegate> *_delegate;
    WAPlateInputView *_plateInputView;
    WAPlateItem *_plateItem;
    MMUILabel *_inputReminder;
    unsigned long long _style;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) MMUILabel *inputReminder; // @synthesize inputReminder=_inputReminder;
@property(retain, nonatomic) WAPlateItem *plateItem; // @synthesize plateItem=_plateItem;
@property(retain, nonatomic) WAPlateInputView *plateInputView; // @synthesize plateInputView=_plateInputView;
@property(nonatomic) _Bool firstIn; // @synthesize firstIn=_firstIn;
@property(nonatomic) __weak NSObject<WAPlateEditViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *createSubDesc; // @synthesize createSubDesc=_createSubDesc;
- (void)onInputDisableFinish;
- (void)OnInputCanFinish:(id)arg1;
- (void)onFinishBtnClicked;
- (_Bool)disMissSelf;
- (void)configPlateItem:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)initSubviewsWithStyle:(unsigned long long)arg1;
- (id)navigationBarBackgroundColor;
- (id)init;
- (id)initWithPlateItem:(id)arg1 Style:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

