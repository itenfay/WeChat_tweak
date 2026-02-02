//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveConnectMicModePreviewItemView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIImageView;

@interface MMFinderLiveConnectMicModePreviewView : UIView
{
    _Bool _isAnchorMicMode;
    unsigned long long _mode;
    NSString *_focusedUserId;
    unsigned long long _anchorMicIndex;
    NSArray *_micUsers;
    NSString *_anchorSdkUserId;
    UIView *_previewContainerView;
    UIView *_placeholderContainerView;
    UIImageView *_placeholderGridView;
    NSMutableArray *_placeholderViews;
    MMFinderLiveConnectMicModePreviewItemView *_anchorPreviewView;
    NSMutableDictionary *_previewViews;
}

+ (struct CGRect)previewAreaSizeWithContainerSize:(struct CGSize)arg1 aspectRatio:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *previewViews; // @synthesize previewViews=_previewViews;
@property(retain, nonatomic) MMFinderLiveConnectMicModePreviewItemView *anchorPreviewView; // @synthesize anchorPreviewView=_anchorPreviewView;
@property(retain, nonatomic) NSMutableArray *placeholderViews; // @synthesize placeholderViews=_placeholderViews;
@property(retain, nonatomic) UIImageView *placeholderGridView; // @synthesize placeholderGridView=_placeholderGridView;
@property(retain, nonatomic) UIView *placeholderContainerView; // @synthesize placeholderContainerView=_placeholderContainerView;
@property(retain, nonatomic) UIView *previewContainerView; // @synthesize previewContainerView=_previewContainerView;
@property(retain, nonatomic) NSString *anchorSdkUserId; // @synthesize anchorSdkUserId=_anchorSdkUserId;
@property(retain, nonatomic) NSArray *micUsers; // @synthesize micUsers=_micUsers;
@property(nonatomic) unsigned long long anchorMicIndex; // @synthesize anchorMicIndex=_anchorMicIndex;
@property(retain, nonatomic) NSString *focusedUserId; // @synthesize focusedUserId=_focusedUserId;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool isAnchorMicMode; // @synthesize isAnchorMicMode=_isAnchorMicMode;
- (void)layoutPlaceholderViewsWithOccupiedIndices:(id)arg1 mode:(unsigned long long)arg2 totalSize:(struct CGSize)arg3;
- (void)layoutForLeadMode;
- (void)layoutForGrabMode;
- (void)layoutForFocusMode;
- (void)layoutForStandardModeWithAspectRatio:(double)arg1;
- (void)layoutForStandardMode;
- (void)layoutForAnchorMicMode;
- (void)removePlaceholderView;
- (void)addPlaceholderView;
- (void)removePreviewViewForUserId:(id)arg1;
- (void)addPreviewViewForUser:(id)arg1;
- (void)setupAnchorPreviewViewWithAnchorBackgroundImage:(id)arg1 orBackgroundImageUri:(id)arg2 avatarUri:(id)arg3;
- (void)onLiveTask:(id)arg1 renderImageBuffer:(struct __CVBuffer *)arg2 forUserId:(id)arg3;
- (void)layoutSubviews;
- (void)setMode:(unsigned long long)arg1 focusedUserId:(id)arg2;
- (void)updatePreviewWithAnchorMicIndex:(unsigned long long)arg1 micUsers:(id)arg2;
@property(readonly, nonatomic) double preferredAspectRatio;
- (id)initWithFrame:(struct CGRect)arg1 anchorBackgroundImage:(id)arg2 orBackgroundImageUri:(id)arg3 avatarUri:(id)arg4 anchorSdkUserId:(id)arg5 isAnchorMicMode:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

