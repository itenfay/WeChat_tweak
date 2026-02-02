//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel;
@protocol MMWebHalfScreenDelegate;

@interface MMWebTransNoticeHalfScreen
{
    id <MMWebHalfScreenDelegate> _delegate;
    UILabel *_textLabel;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak id <MMWebHalfScreenDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillAppear;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)layoutSubviews;
- (id)init;
- (id)titleForPageSheetConfirmButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

