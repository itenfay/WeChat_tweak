//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSString;
@protocol MJSegmentReusableViewDelegate;

@interface MJNarrationSegmentPlaceholderView : UICollectionReusableView
{
    id <MJSegmentReusableViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MJSegmentReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)prepareForReuse;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutViews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

