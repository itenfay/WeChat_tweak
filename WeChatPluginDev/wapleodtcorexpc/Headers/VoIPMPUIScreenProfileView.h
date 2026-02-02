//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, MultiTalkHDHeadView, UIImageView;

@interface VoIPMPUIScreenProfileView : UIView
{
    _Bool _isCleared;
    _Bool _isTalking;
    _Bool _isFloated;
    _Bool _isFold;
    CContact *_contact;
    unsigned long long _splitLocation;
    UIImageView *_blurView;
    MultiTalkHDHeadView *_headImageView;
    double _subviewsScale;
    double _panelHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double panelHeight; // @synthesize panelHeight=_panelHeight;
@property(nonatomic) double subviewsScale; // @synthesize subviewsScale=_subviewsScale;
@property(retain, nonatomic) MultiTalkHDHeadView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIImageView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
@property(nonatomic) _Bool isFloated; // @synthesize isFloated=_isFloated;
@property(nonatomic) _Bool isTalking; // @synthesize isTalking=_isTalking;
@property(nonatomic) _Bool isCleared; // @synthesize isCleared=_isCleared;
@property(nonatomic) unsigned long long splitLocation; // @synthesize splitLocation=_splitLocation;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutBackground;
- (void)layoutHeadView;
- (void)layoutBlurView;

@end

