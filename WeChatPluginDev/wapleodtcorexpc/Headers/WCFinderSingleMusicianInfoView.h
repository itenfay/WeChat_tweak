//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderContact, NSString, UIImageView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderFittingWidthRichView, WCFinderHeadImageView;
@protocol WCFinderSingleMusicianInfoViewDelegate;

@interface WCFinderSingleMusicianInfoView
{
    id <WCFinderSingleMusicianInfoViewDelegate> _delegate;
    UIView *_headerView;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    UILabel *_authInfoLabel;
    WCFinderAuthInfoIconView *_authIconView;
    UIImageView *_arrowImageView;
    WCFinderFittingWidthRichView *_richTextView;
    UILabel *_friendFollowLabel;
    FinderContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UILabel *friendFollowLabel; // @synthesize friendFollowLabel=_friendFollowLabel;
@property(retain, nonatomic) WCFinderFittingWidthRichView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *authInfoLabel; // @synthesize authInfoLabel=_authInfoLabel;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <WCFinderSingleMusicianInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onRichView:(id)arg1 expandChanged:(_Bool)arg2;
- (void)adjustAllSubviews;
- (void)updateWithSingerInfo:(id)arg1 expand:(_Bool)arg2;
- (id)signatureDisplayText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

