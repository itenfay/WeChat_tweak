//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUIImageView, MMUILabel, WCAgreementCheckBox;
@protocol MJVoiceCloneIntroViewDelegate;

@interface MJVoiceCloneIntroView : UIView
{
    id <MJVoiceCloneIntroViewDelegate> _delegate;
    MMUIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_contentLabel;
    WCAgreementCheckBox *_agreementCheckBox;
    MMUIButton *_closeButton;
    MMUIButton *_goRecordingButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *goRecordingButton; // @synthesize goRecordingButton=_goRecordingButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) WCAgreementCheckBox *agreementCheckBox; // @synthesize agreementCheckBox=_agreementCheckBox;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <MJVoiceCloneIntroViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateGoRecordingButtonStyleWithAgreementSelected:(_Bool)arg1;
- (void)goRecordingButtonDidTouchUpInside:(id)arg1;
- (void)closeButtonDidTouchUpInside:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

