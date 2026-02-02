//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, NSString, UILabel, WCFinderCollectionHalfViewParams, WCFinderFeedContentTextView;
@protocol WCFinderCollectionHalfDescHeaderDelegate;

@interface WCFinderCollectionHalfDescHeader : UIView
{
    id <WCFinderCollectionHalfDescHeaderDelegate> _delegate;
    WCFinderCollectionHalfViewParams *_params;
    MMUIButton *_moreBtn;
    UIView *_customRightView;
    UILabel *_titleLabel;
    UILabel *_episodeLabel;
    WCFinderFeedContentTextView *_descTextView;
    double _layoutWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) WCFinderFeedContentTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) UILabel *episodeLabel; // @synthesize episodeLabel=_episodeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *customRightView; // @synthesize customRightView=_customRightView;
@property(retain, nonatomic) MMUIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) WCFinderCollectionHalfViewParams *params; // @synthesize params=_params;
@property(nonatomic) __weak id <WCFinderCollectionHalfDescHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2;
- (void)didClickMore;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithParams:(id)arg1 customRightView:(id)arg2;
- (void)setupUI;
- (id)curRightView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

