//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, UIImageView, UILabel, WCDataItem;
@protocol WCPuzzleImageViewDelegate;

@interface WCPuzzleImageView
{
    WCDataItem *m_dataItem;
    NSArray *m_arrMediaData;
    NSMutableArray *m_arrView;
    int m_visableCount;
    struct vector<bool, std::allocator<bool>> m_imageReady;
    UIImageView *m_lockStausView;
    UIImageView *m_sharedStausView;
    UIImageView *m_starredStatusView;
    UIImageView *m_livePhotoStatusView;
    UIImageView *m_failedStatusView;
    UIImageView *m_shadowImageView;
    UILabel *m_nickLabel;
    id <WCPuzzleImageViewDelegate> m_delegate;
    long long _layoutStyle;
}

+ (id)getImageForMedia:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem;
@property(nonatomic) __weak id <WCPuzzleImageViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) NSArray *m_arrMediaData; // @synthesize m_arrMediaData;
- (void)showOwnerNickname:(_Bool)arg1 username:(id)arg2;
- (void)showFailedStatus:(_Bool)arg1;
- (void)updateLivePhotoStatus:(_Bool)arg1;
- (void)showStarredStatus:(_Bool)arg1;
- (void)showSharedStatus:(_Bool)arg1;
- (void)showLockStatus:(_Bool)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetImages;
- (void)layoutStatusView;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateShadowImageViewHiddenState;
- (void)setupShadowImageView;
- (id)initWithMediaData:(id)arg1 layoutStyle:(long long)arg2;

@end

