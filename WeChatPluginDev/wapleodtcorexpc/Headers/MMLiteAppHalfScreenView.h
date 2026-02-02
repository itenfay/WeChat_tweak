//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiteAppHalfScreenViewController;

@interface MMLiteAppHalfScreenView
{
    _Bool _enablePullUp;
    _Bool _enablePullDown;
    _Bool _enableFullscreenPullDown;
    _Bool _withMask;
    _Bool _landscape;
    _Bool _autoRotate;
    _Bool _isRealAppear;
    MMLiteAppHalfScreenViewController *_halfScreenVC;
    double _heightPercent;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRealAppear; // @synthesize isRealAppear=_isRealAppear;
@property(nonatomic) _Bool autoRotate; // @synthesize autoRotate=_autoRotate;
@property(nonatomic) _Bool landscape; // @synthesize landscape=_landscape;
@property(nonatomic) _Bool withMask; // @synthesize withMask=_withMask;
@property(nonatomic) _Bool enableFullscreenPullDown; // @synthesize enableFullscreenPullDown=_enableFullscreenPullDown;
@property(nonatomic) _Bool enablePullDown; // @synthesize enablePullDown=_enablePullDown;
@property(nonatomic) _Bool enablePullUp; // @synthesize enablePullUp=_enablePullUp;
@property(nonatomic) double heightPercent; // @synthesize heightPercent=_heightPercent;
@property(retain, nonatomic) MMLiteAppHalfScreenViewController *halfScreenVC; // @synthesize halfScreenVC=_halfScreenVC;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(_Bool)arg2 pageId:(unsigned long long)arg3;
- (void)scrollToResume;
- (void)scrollToBottom;
- (void)scrollToTop;
- (void)layoutSubviews;
- (id)findViewController;
- (void)attachParentViewController;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)removeFromSuperview;
- (void)updateByUIWindow:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)onAttachViewController:(id)arg1;
- (void)innerAttachLiteAppView:(id)arg1;
- (void)dealloc;
- (void)attachLiteAppView:(id)arg1;
- (void)attachLiteAppView:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 isTransparent:(_Bool)arg6 startReport:(id)arg7 reporter:(id)arg8;
- (id)init;

@end

