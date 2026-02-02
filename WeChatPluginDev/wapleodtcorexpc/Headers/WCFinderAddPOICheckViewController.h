//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPickLocationViewController, MMUIButton, NSString, RichTextView, UIButton, UIImageView, UILabel;

@interface WCFinderAddPOICheckViewController
{
    NSString *_finderUsername;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_previewImageView;
    MMUIButton *_checkBox;
    RichTextView *_protoTextView;
    UIButton *_addButton;
    MMPickLocationViewController *_pickLocationViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMPickLocationViewController *pickLocationViewController; // @synthesize pickLocationViewController=_pickLocationViewController;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) RichTextView *protoTextView; // @synthesize protoTextView=_protoTextView;
@property(retain, nonatomic) MMUIButton *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onCancelSeletctedLocation;
- (void)onTapAddButton;
- (id)onGetRightBarButton;
- (void)initViews;
- (void)tapBackButton;
- (void)showPickLocationVC;
- (void)tapAddButton;
- (void)updateAddButton;
- (void)tapCheckBox;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (id)initWithFinderUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

