//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol MJSegmentReusableViewDelegate;

@interface MJMusicSegmentPlaceholderView : UICollectionReusableView
{
    id <MJSegmentReusableViewDelegate> _delegate;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UITapGestureRecognizer *_tapGR;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGR; // @synthesize tapGR=_tapGR;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <MJSegmentReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)prepareForReuse;
- (void)updatePlaceholderLeadingOffset:(double)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)layoutViews;
- (void)setupViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

