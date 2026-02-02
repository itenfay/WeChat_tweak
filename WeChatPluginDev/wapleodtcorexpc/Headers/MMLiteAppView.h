//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class LiteAppStore, MMLiteAppViewController;

@interface MMLiteAppView : UIView
{
    LiteAppStore *_store;
    CDUnknownBlockType _onBodySizeChangeBlock;
    _Bool _autoHeight;
    _Bool _autoWidth;
    _Bool _disableScroll;
    _Bool _disableLayoutSubview;
    _Bool _isRealAppear;
    MMLiteAppViewController *_vc;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRealAppear; // @synthesize isRealAppear=_isRealAppear;
@property(nonatomic) _Bool disableLayoutSubview; // @synthesize disableLayoutSubview=_disableLayoutSubview;
@property(retain, nonatomic) MMLiteAppViewController *vc; // @synthesize vc=_vc;
- (void)resumeView;
- (void)pauseView;
- (void)layoutSubviews;
- (void)disableScroll:(_Bool)arg1;
- (void)setContentOffset:(double)arg1;
- (id)findViewController;
- (void)attachParentViewController;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)updateByUIWindow:(id)arg1;
- (void)setAutoWidth:(_Bool)arg1;
- (void)setAutoHeight:(_Bool)arg1;
- (void)setOnBodySizeChangeBlock:(CDUnknownBlockType)arg1;
- (void)setStore:(id)arg1;
- (id)getStore;
- (void)setFrame:(struct CGRect)arg1;
- (void)onAttachViewController:(id)arg1;
- (void)attachLiteAppView:(id)arg1;
- (void)attachLiteAppView:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 isTransparent:(_Bool)arg6 startReport:(id)arg7 reporter:(id)arg8;
- (void)dealloc;
- (id)init;

@end

