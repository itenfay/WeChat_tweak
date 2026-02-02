//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveMessageCellMainContentView, MMWebImageView, NSString, ServiceNotifyMessageViewModel, UILabel, UIView;

@interface FinderLiveServiceNotifyMessageCellView
{
    FinderLiveMessageCellMainContentView *_mainContentView;
    MMWebImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    MMWebImageView *_authIconImageView;
    UIView *_titleLineView;
    UILabel *_titleLabel;
    UIView *_onPressedView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *onPressedView; // @synthesize onPressedView=_onPressedView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *titleLineView; // @synthesize titleLineView=_titleLineView;
@property(retain, nonatomic) MMWebImageView *authIconImageView; // @synthesize authIconImageView=_authIconImageView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) FinderLiveMessageCellMainContentView *mainContentView; // @synthesize mainContentView=_mainContentView;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (id)genNickNameLabel;
- (id)genLineView;
- (id)genTitleLabel;
- (id)genAuthIconImageView;
- (id)genAvatarImageView;
- (id)genDisplayViewWithItemInfo:(id)arg1 longestKeyLabelWidth:(double)arg2 maxDisplayViewWidth:(double)arg3;
- (id)itemValueLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3 maxLine:(unsigned long long)arg4;
- (id)itemValueLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (id)itemLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (void)showWCCoinView;
- (void)onTouchUpInside;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)onTouchDown;
- (void)recreateContentViews;
- (void)layoutContentView;
@property(readonly, nonatomic) ServiceNotifyMessageViewModel *serviceNotifyMessageViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

