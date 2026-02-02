//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUITextField, NSString, UILabel, UIView;
@protocol WCFinderSpecialTopicCreateViewControllerDelegate;

@interface WCFinderHighlightTopicCreateViewController
{
    id <WCFinderSpecialTopicCreateViewControllerDelegate> _delegate;
    NSString *_originalHighlightTopicName;
    UIView *_containerView;
    MMUITextField *_textFiled;
    UILabel *_tipsLabel;
    UILabel *_wordCountLimitLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *wordCountLimitLabel; // @synthesize wordCountLimitLabel=_wordCountLimitLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMUITextField *textFiled; // @synthesize textFiled=_textFiled;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSString *originalHighlightTopicName; // @synthesize originalHighlightTopicName=_originalHighlightTopicName;
@property(nonatomic) __weak id <WCFinderSpecialTopicCreateViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)mmTextFieldDidChange:(id)arg1;
- (void)onClickRightBtn:(id)arg1;
- (_Bool)canPostEvent;
- (void)viewWillLayoutSubviews;
- (void)setupSubViews;
- (void)setupPageSheetConfig;
- (void)viewDidLoad;
- (id)initWithHighlightTopicName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

