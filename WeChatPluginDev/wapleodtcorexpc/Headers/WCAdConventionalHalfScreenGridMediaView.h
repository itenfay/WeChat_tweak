//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollView, NSArray, NSString, UIPageControl;

@interface WCAdConventionalHalfScreenGridMediaView
{
    NSArray *_mediaItems;
    NSArray *_mediaImages;
    MMScrollView *_scrollView;
    UIPageControl *_pageCtrl;
    long long _clickIndex;
    long long _currentIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) long long clickIndex; // @synthesize clickIndex=_clickIndex;
@property(retain, nonatomic) UIPageControl *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) MMScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *mediaImages; // @synthesize mediaImages=_mediaImages;
@property(retain, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateMediaContentWithWidth:(double)arg1 height:(double)arg2;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)generateImageViewWithMediaItem:(id)arg1;
- (long long)fetchCurrentIndex;
- (id)fetchMediaImage;
- (double)fetchMediaContentWidthWithHeight:(double)arg1;
- (double)fetchMediaContentHeightWithWidth:(double)arg1;
- (struct CGSize)fetchMediaContentSize;
- (struct CGSize)fetchMediaSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 clickIndex:(long long)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

