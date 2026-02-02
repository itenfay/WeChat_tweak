//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BizAppBaseMessageViewModel, MMHeadImageView, MMUIImageView, MMUILabel, MMWebImageView, RichTextView, UIView;

@interface BizAppBaseMessageCellView
{
    RichTextView *m_titleLabel;
    RichTextView *m_digestLabel;
    MMWebImageView *m_coverImageView;
    UIView *m_sourceView;
    MMHeadImageView *m_headImgView;
    MMUIImageView *m_wsDefaultImgView;
    MMUILabel *m_nicknameLabel;
    MMUILabel *m_sourceViewDetailLabel;
}

- (void).cxx_destruct;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (id)viewControllerForPreview:(id)arg1;
- (id)urlForPreView:(id)arg1;
- (_Bool)canPeek;
- (id)getSourceIcon;
- (void)updateSourceView:(id)arg1 nickname:(id)arg2 detailStr:(id)arg3;
- (id)operationMenuItems;
- (void)addSourceView:(double)arg1;
- (void)addCoverView;
- (void)addDigestLabel;
- (void)addTitleLabel;
- (void)onTouchUpInside;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) BizAppBaseMessageViewModel *viewModel;

@end

