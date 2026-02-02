//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMEmoticonView, MMUIActivityIndicatorView, NSString, UIImageView, UILabel;

@interface GCEmoticonCell
{
    UILabel *m_downloadFailRetryLabel;
    UIImageView *m_downloadFailedImageView;
    MMUIActivityIndicatorView *m_imageLoadingView;
    MMEmoticonView *_emoticonView;
}

+ (void)onCalculatLayoutInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
- (void)configureWithCellModel:(id)arg1;
- (id)emoticonCellModel;
- (void)showDownloadFailView;
- (void)showLoadingView;
- (void)updateStatus;
- (void)updateEmoticonView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

