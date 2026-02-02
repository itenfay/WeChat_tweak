//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIButton, UIView;
@protocol RingRecommendSwitchDelegate;

@interface RingBackWarnPageSheetView
{
    id <RingRecommendSwitchDelegate> _delegate;
    UIView *_contentView;
    UIView *_customizedContentView;
    MMUILabel *_titleLabel;
    MMUILabel *_messageLabel;
    UIButton *_cancelButton;
    UIButton *_acceptButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *customizedContentView; // @synthesize customizedContentView=_customizedContentView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <RingRecommendSwitchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)acceptButtonDidClick:(id)arg1;
- (void)cancelButtonDidClick:(id)arg1;
- (void)initView;
- (id)init;

@end

