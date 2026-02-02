//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, UIImageView, UIScrollView, VoipRecentStatusFadeView;

@interface VoipRecentStatusImagesView : UIView
{
    CDUnknownBlockType _loadedAction;
    CDUnknownBlockType _refreshBlock;
    CDUnknownBlockType _didSlideCallback;
    unsigned long long _count;
    unsigned long long _currentIndex;
    UIScrollView *_scrollView;
    UIImageView *_leftImageView;
    UIImageView *_centerImageView;
    UIImageView *_rightImageView;
    NSTimer *_timer;
    VoipRecentStatusFadeView *_topFadeView;
    VoipRecentStatusFadeView *_bottomFadeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoipRecentStatusFadeView *bottomFadeView; // @synthesize bottomFadeView=_bottomFadeView;
@property(retain, nonatomic) VoipRecentStatusFadeView *topFadeView; // @synthesize topFadeView=_topFadeView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIImageView *centerImageView; // @synthesize centerImageView=_centerImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(copy, nonatomic) CDUnknownBlockType didSlideCallback; // @synthesize didSlideCallback=_didSlideCallback;
@property(copy, nonatomic) CDUnknownBlockType refreshBlock; // @synthesize refreshBlock=_refreshBlock;
@property(copy, nonatomic) CDUnknownBlockType loadedAction; // @synthesize loadedAction=_loadedAction;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)refreshContents;
- (void)scrollAutomatically;
- (void)layoutSubviews;
- (void)startUpTimer;
- (void)terminateTimer;
- (id)initWithCount:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

