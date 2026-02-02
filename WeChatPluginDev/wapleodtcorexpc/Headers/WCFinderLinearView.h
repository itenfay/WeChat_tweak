//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface WCFinderLinearView : UIView
{
    _Bool _hasContent;
    _Bool _dirty;
    _Bool _objectReleasing;
    double _contentPadding;
    CDUnknownBlockType _onSizeChanged;
    WCFinderLinearView *_rootLinearView;
    WCFinderLinearView *_parentLinearView;
    UIView *_rootYogaView;
    struct UIEdgeInsets _contentInsets;
}

+ (id)horizontalLayoutView;
+ (id)verticalLayoutView;
+ (id)linearViewBuilder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *rootYogaView; // @synthesize rootYogaView=_rootYogaView;
@property(nonatomic) __weak WCFinderLinearView *parentLinearView; // @synthesize parentLinearView=_parentLinearView;
@property(nonatomic) __weak WCFinderLinearView *rootLinearView; // @synthesize rootLinearView=_rootLinearView;
@property(nonatomic) _Bool objectReleasing; // @synthesize objectReleasing=_objectReleasing;
@property(copy, nonatomic) CDUnknownBlockType onSizeChanged; // @synthesize onSizeChanged=_onSizeChanged;
@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(nonatomic) _Bool hasContent; // @synthesize hasContent=_hasContent;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double contentPadding; // @synthesize contentPadding=_contentPadding;
- (void)layoutSubviews;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_delaySizeToFit;
- (void)delaySizeToFit;
- (void)markYogaDirty;
- (void)markDirty;
- (void)onSubImageViewImageChange:(id)arg1 object:(id)arg2;
- (void)onSublabelTextChange:(id)arg1 object:(id)arg2;
- (void)onSubviewHiddenChange:(id)arg1 object:(id)arg2;
- (void)removeObservers:(id)arg1;
- (void)addObservers:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void *)observeContext;
- (void)didMoveToSuperview;
- (void)addSubview:(id)arg1;
- (void)doUpdateViewPadding;
- (void)updatePaddingThenSizeToFit;
- (void)updateViewsPadding;
@property(nonatomic) double maxWidth;
@property(nonatomic) _Bool layoutVertical;
- (void)dealloc;
- (id)init;
- (id)initWithLayoutVertical:(_Bool)arg1;
- (id)addSpacer;
- (void)addSubVerticalLayout:(CDUnknownBlockType)arg1;
- (void)addSubHorizontalLayout:(CDUnknownBlockType)arg1;

@end

