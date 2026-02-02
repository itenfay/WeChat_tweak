//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, WCDataItem;
@protocol WCAdConventionalHalfScreenMediaViewDelegate;

@interface WCAdConventionalHalfScreenMediaBaseView
{
    id <WCAdConventionalHalfScreenMediaViewDelegate> _delegate;
    long long _visibleType;
    WCDataItem *_dataItem;
    MMUIButton *_backgroundButton;
}

+ (id)fetchHalfScreenMediaViewWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 clickIndex:(long long)arg3 delegate:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) long long visibleType; // @synthesize visibleType=_visibleType;
@property(nonatomic) __weak id <WCAdConventionalHalfScreenMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)reportManager;
- (void)sendMediaViewContentBeClickedEvent;
- (void)onBackgroundButtonBeClicked;
- (long long)fetchCurrentIndex;
- (id)fetchCurrentSnapshot;
- (id)fetchMediaImage;
- (void)onViewDidDisappear;
- (void)onViewWillDisappear;
- (void)onViewDidAppear;
- (void)onViewWillAppear;
- (void)onHostViewDidExit;
- (void)onHostViewDidEnter;
- (void)onHostViewWillEnter;
- (void)layoutSubviews;
- (void)updateMediaContentWithWidth:(double)arg1 height:(double)arg2;
- (void)updateMediaContentWithHeight:(double)arg1;
- (double)fetchMediaContentWidthWithHeight:(double)arg1;
- (double)fetchMediaContentHeightWithWidth:(double)arg1;
- (double)fetchMediaWidthWithHeight:(double)arg1;
- (double)fetchMediaHeightWithWidth:(double)arg1;
- (struct CGSize)fetchMediaSize;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 delegate:(id)arg3;

@end

