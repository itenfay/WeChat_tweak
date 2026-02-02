//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderMusicTopicInfo, MMUIButton, MMWebImageView, RichTextView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderDataItem;
@protocol WCFinderMusicCardBriefViewDelegate;

@interface WCFinderMusicCardBriefView
{
    id <WCFinderMusicCardBriefViewDelegate> _delegate;
    MMUIButton *_joinButton;
    UIView *_line;
    MMWebImageView *_mediaBkgImage;
    RichTextView *_songNameTextView;
    UILabel *_nicknameLabel;
    WCFinderAuthInfoIconView *_authIconView;
    FinderMusicTopicInfo *_musicTopicInfo;
    WCFinderDataItem *_fromDataItem;
}

+ (double)height;
+ (id)buildTitleTextView:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *fromDataItem; // @synthesize fromDataItem=_fromDataItem;
@property(retain, nonatomic) FinderMusicTopicInfo *musicTopicInfo; // @synthesize musicTopicInfo=_musicTopicInfo;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) RichTextView *songNameTextView; // @synthesize songNameTextView=_songNameTextView;
@property(retain, nonatomic) MMWebImageView *mediaBkgImage; // @synthesize mediaBkgImage=_mediaBkgImage;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) MMUIButton *joinButton; // @synthesize joinButton=_joinButton;
@property(nonatomic) __weak id <WCFinderMusicCardBriefViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)enableShow;
- (void)joinButtonClicked;
- (void)onClickAuthorView;
- (void)layoutAllSubviews;
- (void)layoutSubviews;
- (void)updateWithMusicTopicInfo:(id)arg1 fromDataItem:(id)arg2 shareItemInfo:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

