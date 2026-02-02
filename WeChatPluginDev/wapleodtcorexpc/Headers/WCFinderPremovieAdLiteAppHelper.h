//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiteAppView;

@interface WCFinderPremovieAdLiteAppHelper
{
    _Bool _isReadyToShow;
    MMLiteAppView *_liteAppView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiteAppView *liteAppView; // @synthesize liteAppView=_liteAppView;
@property(nonatomic) _Bool isReadyToShow; // @synthesize isReadyToShow=_isReadyToShow;
- (struct CGRect)adLabelFrameInExtraInfo:(id)arg1;
- (void)notifyLiteAppViewToPlay:(id)arg1;
- (void)notifyLiteAppViewExpose:(_Bool)arg1;
- (void)preloadVideo;
- (void)createPremovieStore;
- (void)preDownloadLiteApp;
- (void)clearCache;
- (void)closePremovieAd;
- (void)showPremovieAd;
- (id)genPremovieView:(id)arg1;
- (void)updateWithMultiMediaCell:(id)arg1;

@end

