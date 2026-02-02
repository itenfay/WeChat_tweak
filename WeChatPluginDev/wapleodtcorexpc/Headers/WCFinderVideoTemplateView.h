//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, RichTextView, UIImageView, UILabel, WCFinderAuthInfoIconView;
@protocol WCFinderVideoTemplateViewDelegate;

@interface WCFinderVideoTemplateView
{
    id <WCFinderVideoTemplateViewDelegate> _delegate;
    UILabel *_titleLabel;
    MMWebImageView *_mediaBkgImage;
    RichTextView *_songNameTextView;
    UILabel *_songDescLabel;
    UILabel *_nicknameLabel;
    WCFinderAuthInfoIconView *_authIconView;
    UIImageView *_arrowImageView;
}

+ (double)height;
+ (id)buildTitleTextView:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UILabel *songDescLabel; // @synthesize songDescLabel=_songDescLabel;
@property(retain, nonatomic) RichTextView *songNameTextView; // @synthesize songNameTextView=_songNameTextView;
@property(retain, nonatomic) MMWebImageView *mediaBkgImage; // @synthesize mediaBkgImage=_mediaBkgImage;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCFinderVideoTemplateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutAllSubviews;
- (void)updateWithMusicTopicInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

