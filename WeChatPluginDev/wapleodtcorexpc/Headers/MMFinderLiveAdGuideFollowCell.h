//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveGuideFollowAdInfoItem, MMUIButton, MMUILabel, MMUIView, MMWebImageView, WCFinderHeadImageView;
@protocol MMFinderLiveAdGuideFollowCellDelegate;

@interface MMFinderLiveAdGuideFollowCell
{
    _Bool _isAnchor;
    FinderLiveGuideFollowAdInfoItem *_info;
    id <MMFinderLiveAdGuideFollowCellDelegate> _delegate;
    MMUIView *_contentView;
    WCFinderHeadImageView *_headImageView;
    MMUILabel *_nameLabel;
    MMUILabel *_descLabel;
    MMUILabel *_followedLabel;
    MMWebImageView *_authIconView;
    MMUIButton *_followButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) MMWebImageView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) MMUILabel *followedLabel; // @synthesize followedLabel=_followedLabel;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMFinderLiveAdGuideFollowCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) FinderLiveGuideFollowAdInfoItem *info; // @synthesize info=_info;
- (void)onClickContent;
- (void)onClickFollow;
- (void)layoutUI;
- (void)updateAuthInfo;
- (_Bool)shouldAuthIconViewShow;
- (void)initSubviewsWith:(double)arg1 height:(double)arg2;
- (void)setupSubviewsWith:(double)arg1 height:(double)arg2;
- (void)initCellConfig;
- (id)initWithInfo:(id)arg1 width:(double)arg2 height:(double)arg3 delegate:(id)arg4;

@end

