//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveNoticeInfo, MMUIButton, MMUILabel, UIImageView, UIView, WCFinderContact, WCFinderHeadImageView;

@interface MMFinderLiveFeedNoticeColumnView
{
    CDUnknownBlockType _contentButtonBlock;
    WCFinderContact *_anchorContact;
    FinderLiveNoticeInfo *_noticeInfo;
    MMUIButton *_contentButton;
    WCFinderHeadImageView *_avatarIconView;
    MMUILabel *_titleLabel;
    UIImageView *_arrowImageView;
    UIView *_topSeparaLine;
    UIView *_bottomSeparaLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeparaLine; // @synthesize bottomSeparaLine=_bottomSeparaLine;
@property(retain, nonatomic) UIView *topSeparaLine; // @synthesize topSeparaLine=_topSeparaLine;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarIconView; // @synthesize avatarIconView=_avatarIconView;
@property(retain, nonatomic) MMUIButton *contentButton; // @synthesize contentButton=_contentButton;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
@property(copy, nonatomic) CDUnknownBlockType contentButtonBlock; // @synthesize contentButtonBlock=_contentButtonBlock;
- (void)contentButtonClick;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithAnchorFinderContact:(id)arg1 noticeInfo:(id)arg2;

@end

