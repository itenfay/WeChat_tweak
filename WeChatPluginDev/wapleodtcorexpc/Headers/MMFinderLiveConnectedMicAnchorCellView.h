//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, WCFinderHeadImageView;

@interface MMFinderLiveConnectedMicAnchorCellView
{
    _Bool _forceDisableOperationButton;
    WCFinderHeadImageView *_avatarView;
    MMWebImageView *_authIconView;
}

+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool forceDisableOperationButton; // @synthesize forceDisableOperationButton=_forceDisableOperationButton;
@property(retain, nonatomic) MMWebImageView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) WCFinderHeadImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void)layoutUI;
- (void)updateWithConnectMicUser:(id)arg1 searchInfo:(id)arg2 forceHideOperationButton:(_Bool)arg3 forceDisableOperationButton:(_Bool)arg4 hideBottomSeparatorLine:(_Bool)arg5;
- (void)updateRightButton;
- (void)configNickNameLabelWithSearchInfo:(id)arg1;
- (void)configSubTitleLabel;
- (void)configAuthIconView;
- (void)configAvatarView;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

