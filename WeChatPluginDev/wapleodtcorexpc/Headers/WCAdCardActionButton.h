//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, WCAdCardBtnInfo;

@interface WCAdCardActionButton
{
    long long _enabledStyle;
    WCAdCardBtnInfo *_buttonInfo;
    long long _animationState;
    UIView *_highlightedCoverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightedCoverView; // @synthesize highlightedCoverView=_highlightedCoverView;
@property(nonatomic) long long animationState; // @synthesize animationState=_animationState;
@property(retain, nonatomic) WCAdCardBtnInfo *buttonInfo; // @synthesize buttonInfo=_buttonInfo;
@property(nonatomic) long long enabledStyle; // @synthesize enabledStyle=_enabledStyle;
- (void)asyncStartToAnimate;
- (void)stopAnimating;
- (void)startToAnimate;
- (id)fetchDisabledTitleColor;
- (id)fetchNormalTitleColorWithInfo:(id)arg1;
- (id)fetchDisabledBgColor;
- (id)fetchNormalBgColorWithInfo:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)initialContentsWithInfo:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 buttonInfo:(id)arg2;

@end

