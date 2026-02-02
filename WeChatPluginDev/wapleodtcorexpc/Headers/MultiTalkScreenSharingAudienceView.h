//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMContentScrollView, MultiTalkScreenSharingAudienceBackgroundView, MultiTalkScreenSharingAudienceContentView, NSString;
@protocol MultiTalkScreenSharingAudienceViewDelegate;

@interface MultiTalkScreenSharingAudienceView : UIView
{
    _Bool _isUnEnabled;
    _Bool _isLandscapeSupport;
    id <MultiTalkScreenSharingAudienceViewDelegate> _delegate;
    long long _contentInterfaceOrientation;
    MultiTalkScreenSharingAudienceBackgroundView *_backgroundView;
    MMContentScrollView *_scrollView;
    MultiTalkScreenSharingAudienceContentView *_contentView;
    double _contentWHRatio;
    struct CGRect _contentUnabledFrame;
}

- (void).cxx_destruct;
@property(nonatomic) double contentWHRatio; // @synthesize contentWHRatio=_contentWHRatio;
@property(retain, nonatomic) MultiTalkScreenSharingAudienceContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMContentScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MultiTalkScreenSharingAudienceBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long contentInterfaceOrientation; // @synthesize contentInterfaceOrientation=_contentInterfaceOrientation;
@property(nonatomic) _Bool isLandscapeSupport; // @synthesize isLandscapeSupport=_isLandscapeSupport;
@property(nonatomic) __weak id <MultiTalkScreenSharingAudienceViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect contentUnabledFrame; // @synthesize contentUnabledFrame=_contentUnabledFrame;
@property(nonatomic) _Bool isUnEnabled; // @synthesize isUnEnabled=_isUnEnabled;
- (_Bool)contentScrollView:(id)arg1 shouldIgnoreDoubleTapWithGestureRecoginzer:(id)arg2;
- (void)contentScrollViewDidDoubleTap:(id)arg1;
- (void)contentScrollViewDidSingleTap:(id)arg1;
- (void)updateTalkingMembersWithUsersName:(id)arg1;
- (void)resetScale;
- (void)updateMember:(id)arg1;
- (void)updateRender:(id)arg1;
@property(nonatomic) _Bool isOperationViewsHidden;
- (void)layoutSubviews;
- (void)layoutWithContentInterfaceOrientation:(long long)arg1 width:(double)arg2 height:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)transformToCellFrame:(struct CGRect)arg1 withAnimation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)transformFromCellFrame:(struct CGRect)arg1 withAnimation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

