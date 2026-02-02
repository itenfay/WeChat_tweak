//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJShootFavTemplateAuthorButton, MMUIButton, UIImpactFeedbackGenerator;
@protocol MJShootFavTemplateEntranceViewDelegate;

@interface MJShootFavTemplateEntranceView
{
    id <MJShootFavTemplateEntranceViewDelegate> _delegate;
    MJShootFavTemplateAuthorButton *_authorButton;
    MMUIButton *_favButton;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) MMUIButton *favButton; // @synthesize favButton=_favButton;
@property(retain, nonatomic) MJShootFavTemplateAuthorButton *authorButton; // @synthesize authorButton=_authorButton;
@property(nonatomic) __weak id <MJShootFavTemplateEntranceViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateWithIsFavorite:(_Bool)arg1;
- (void)favButtonDidTouchUpInside:(id)arg1;
- (void)updateWithFavTemplateItem:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

