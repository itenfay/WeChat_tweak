//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIFont, UIImageView, UILabel;

@interface NewLifeRedPacketActivityView : UIView
{
    int _coverViewType;
    double _activityPaddingStart;
    double _activityPaddingEnd;
    double _activityPaddingVertical;
    double _activityInnerSpace;
    double _activityCornerRadius;
    UIFont *_activityLabelFont;
    double _activityMarginStart;
    double _activityMarginBottom;
    UILabel *_activityLabel;
    UIImageView *_activityIcon;
    UIView *_activityView;
    struct CGSize _activityIconSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIImageView *activityIcon; // @synthesize activityIcon=_activityIcon;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(nonatomic) int coverViewType; // @synthesize coverViewType=_coverViewType;
@property(nonatomic) double activityMarginBottom; // @synthesize activityMarginBottom=_activityMarginBottom;
@property(nonatomic) double activityMarginStart; // @synthesize activityMarginStart=_activityMarginStart;
@property(retain, nonatomic) UIFont *activityLabelFont; // @synthesize activityLabelFont=_activityLabelFont;
@property(nonatomic) double activityCornerRadius; // @synthesize activityCornerRadius=_activityCornerRadius;
@property(nonatomic) double activityInnerSpace; // @synthesize activityInnerSpace=_activityInnerSpace;
@property(nonatomic) double activityPaddingVertical; // @synthesize activityPaddingVertical=_activityPaddingVertical;
@property(nonatomic) double activityPaddingEnd; // @synthesize activityPaddingEnd=_activityPaddingEnd;
@property(nonatomic) double activityPaddingStart; // @synthesize activityPaddingStart=_activityPaddingStart;
@property(nonatomic) struct CGSize activityIconSize; // @synthesize activityIconSize=_activityIconSize;
- (void)setLabelText:(id)arg1;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)initSubviews;
- (void)initParams;
- (id)initWithCoverViewType:(int)arg1;

@end

