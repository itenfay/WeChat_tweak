//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveNewCustomGiftComponent, MMFinderLiveNewCustomGiftStyleObj, NSString, RichTextView;

@interface MMLiveRewardGiftNewCustomizationStyleSelectContentView : UIView
{
    long long _contentMode;
    UIView *_contentView;
    RichTextView *_unsupportTipLabel;
    MMFinderLiveNewCustomGiftComponent *_currentConflictComponent;
    struct CGSize _selfSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize selfSize; // @synthesize selfSize=_selfSize;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftComponent *currentConflictComponent; // @synthesize currentConflictComponent=_currentConflictComponent;
@property(retain, nonatomic) RichTextView *unsupportTipLabel; // @synthesize unsupportTipLabel=_unsupportTipLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)changeToNormalMode;
- (void)changeToUnSupportModeForConflictComponent:(id)arg1;
- (void)onUnSupportTipLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)getUnSupportTipWithConflictComponent:(id)arg1;
- (void)updateUnSupportTipWithConflictComponent:(id)arg1;
- (void)updateUIForCurrentContentMode;
- (void)updateContentMode:(long long)arg1;
@property(readonly, nonatomic) MMFinderLiveNewCustomGiftStyleObj *styleObj;
- (void)updateUnSupportTipLabelOrigin;
- (void)layoutUnSupportTipLabel;
- (void)layoutContentView;
- (void)checkSelfSizeChanged;
- (void)layoutUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

