//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMExpandImageView, MMHeadImageView, MMUIButton, MMUIImageView, MMUILabel, TextStateModel;
@protocol WCStatusViewDelegate;

@interface TextStateHeaderSectionView
{
    _Bool _shouldShowLocationDistance;
    unsigned int _type;
    TextStateModel *_textState;
    CDUnknownBlockType _operateButtonHandler;
    MMUIButton *_operateButton;
    MMUIButton *_moreButton;
    MMUIButton *_contactButton;
    MMHeadImageView *_headImageView;
    MMUILabel *_nicknameLabel;
    MMUILabel *_shortTimeLabel;
    MMUIImageView *_liveImageView;
    MMExpandImageView *_privacyImageView;
    id <WCStatusViewDelegate> _statusViewDelegate;
    CDUnknownBlockType _moreButtonHandler;
    CDUnknownBlockType _contactButtonHandler;
    struct UIEdgeInsets _insets;
}

+ (id)standardMoreButton;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType contactButtonHandler; // @synthesize contactButtonHandler=_contactButtonHandler;
@property(copy, nonatomic) CDUnknownBlockType moreButtonHandler; // @synthesize moreButtonHandler=_moreButtonHandler;
@property(nonatomic) __weak id <WCStatusViewDelegate> statusViewDelegate; // @synthesize statusViewDelegate=_statusViewDelegate;
@property(retain, nonatomic) MMExpandImageView *privacyImageView; // @synthesize privacyImageView=_privacyImageView;
@property(retain, nonatomic) MMUIImageView *liveImageView; // @synthesize liveImageView=_liveImageView;
@property(retain, nonatomic) MMUILabel *shortTimeLabel; // @synthesize shortTimeLabel=_shortTimeLabel;
@property(retain, nonatomic) MMUILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMUIButton *contactButton; // @synthesize contactButton=_contactButton;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) _Bool shouldShowLocationDistance; // @synthesize shouldShowLocationDistance=_shouldShowLocationDistance;
@property(retain, nonatomic) MMUIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) MMUIButton *operateButton; // @synthesize operateButton=_operateButton;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType operateButtonHandler; // @synthesize operateButtonHandler=_operateButtonHandler;
@property(retain, nonatomic) TextStateModel *textState; // @synthesize textState=_textState;
- (void)onTapMoreButton;
- (void)onTapContactButton;
- (void)updateVoiceOver;
- (void)imageViewTapped:(id)arg1;
- (void)updatePrivacyView;
- (void)updateContact;
- (void)updateTimeAndLocation;
- (void)updateLive;
- (void)updateData;
- (_Bool)hasOperateButton;
- (void)updateLayout;
- (void)updateSubview;
- (_Bool)hasMoreButton;
- (void)removeMoreButton;
- (void)addMoreButton:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)addMoreButtonWithHandler:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

