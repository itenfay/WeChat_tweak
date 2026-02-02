//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonLensInfo, NSString, PersonalDesigner, UIButton, UIImageView, UILabel, UIView;
@protocol EmoticonStoreLensDesignerViewDelegate;

@interface EmoticonStoreLensDesignerView
{
    id <EmoticonStoreLensDesignerViewDelegate> _delegate;
    NSString *_lensId;
    EmoticonLensInfo *_lensInfo;
    UIView *_separatorView;
    UIImageView *_iconImageView;
    UILabel *_lensNameLabel;
    UILabel *_designerNameLabel;
    UIButton *_followButton;
}

+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *designerNameLabel; // @synthesize designerNameLabel=_designerNameLabel;
@property(retain, nonatomic) UILabel *lensNameLabel; // @synthesize lensNameLabel=_lensNameLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) EmoticonLensInfo *lensInfo; // @synthesize lensInfo=_lensInfo;
@property(retain, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(nonatomic) __weak id <EmoticonStoreLensDesignerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onEmoticonLensIconDownloadSuccess:(id)arg1;
- (void)onFollowButtonClick;
@property(readonly, nonatomic) PersonalDesigner *designer;
- (void)setupLensInfo:(id)arg1;
- (void)setupLensId:(id)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

