//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMHeadImageView, MMUIButton, NSString, UIImageView, UITapGestureRecognizer, UIView, WCFinderCommentIdentityActionSheetView, WCFinderFeedContentVM;
@protocol WCFinderFeedDetailCommentInputCellDelegate;

@interface WCFinderFeedDetailCommentInputCell : UITableViewCell
{
    id <WCFinderFeedDetailCommentInputCellDelegate> _delegate;
    UIView *_fakeInputView;
    MMHeadImageView *_avatarImageView;
    MMUIButton *_fakeInputLabel;
    UIImageView *_identitySwitchView;
    UITapGestureRecognizer *_identitySwitchGesture;
    WCFinderCommentIdentityActionSheetView *_identitySwitchSheet;
    WCFinderFeedContentVM *_contentVM;
    unsigned long long _scene;
    unsigned long long _identitySwitchType;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long identitySwitchType; // @synthesize identitySwitchType=_identitySwitchType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderCommentIdentityActionSheetView *identitySwitchSheet; // @synthesize identitySwitchSheet=_identitySwitchSheet;
@property(retain, nonatomic) UITapGestureRecognizer *identitySwitchGesture; // @synthesize identitySwitchGesture=_identitySwitchGesture;
@property(retain, nonatomic) UIImageView *identitySwitchView; // @synthesize identitySwitchView=_identitySwitchView;
@property(retain, nonatomic) MMUIButton *fakeInputLabel; // @synthesize fakeInputLabel=_fakeInputLabel;
@property(retain, nonatomic) MMHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *fakeInputView; // @synthesize fakeInputView=_fakeInputView;
@property(nonatomic) __weak id <WCFinderFeedDetailCommentInputCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)identitySwitchClicked;
- (void)fakeInputLabelClicked;
- (void)updateCurrentIdentity;
- (void)updateCommentIdeneityType:(unsigned long long)arg1;
- (void)updateWithContentVM:(id)arg1 type:(unsigned long long)arg2;
- (id)createIndetitySwitchView;
- (void)reloadIdentitySwitchView;
- (void)setupFakeInputView;
- (void)updateUI;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

