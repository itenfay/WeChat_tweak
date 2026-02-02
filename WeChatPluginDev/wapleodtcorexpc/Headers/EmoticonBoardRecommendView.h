//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EmoticonTabRecommendItem, MMEmoticonStoreDownloadLogic, MMWebImageView, NSString, UIButton, UILabel;
@protocol EmoticonBoardRecommendViewDelegate;

@interface EmoticonBoardRecommendView : UIView
{
    UIView *m_contentView;
    MMWebImageView *m_imageView;
    UILabel *m_titleLabel;
    UILabel *m_recWordLabel;
    UIButton *m_showDetailButton;
    EmoticonTabRecommendItem *m_item;
    UIButton *m_closeButton;
    id <EmoticonBoardRecommendViewDelegate> _delegate;
    MMEmoticonStoreDownloadLogic *_downloadLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMEmoticonStoreDownloadLogic *downloadLogic; // @synthesize downloadLogic=_downloadLogic;
@property(nonatomic) __weak id <EmoticonBoardRecommendViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (void)onViewTap;
- (void)updateItem:(id)arg1;
- (void)onClickCloseButton;
- (void)updateCloseButton;
- (void)updateShowDetailButton;
- (void)updateDownloadView;
- (void)updateRecWordLabel;
- (void)updateTitleLabel;
- (void)updateImageView;
- (void)updateContentView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

