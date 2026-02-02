//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicPlayerContoller, NSMutableArray, NSString, UIView;

@interface WCListMusicCellView
{
    UIView *m_tailView;
    NSMutableArray *_arrKVOImageView;
    MMMusicPlayerContoller *_playButton;
}

+ (id)trimSingerNameWithDataItem:(id)arg1;
+ (id)musicTitleWithDataItem:(id)arg1;
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(_Bool)arg4 isLastOneInSection:(_Bool)arg5;
- (void).cxx_destruct;
- (id)customAccessibilityComponents;
- (void)updateAccessibility;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(_Bool)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onClickEvent;
- (id)trimSingerName;
- (id)musicTitle;
- (void)initView;
- (void)initTailView;
- (void)dealloc;
- (double)tailViewHeight;
- (double)maxLabelWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

