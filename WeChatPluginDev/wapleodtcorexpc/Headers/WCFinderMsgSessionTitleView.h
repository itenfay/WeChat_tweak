//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, WCFinderAuthInfoIconView, WCFinderMsgSessionBadgeGroupView;

@interface WCFinderMsgSessionTitleView : UIView
{
    WCFinderMsgSessionBadgeGroupView *_badgeGroupView;
    WCFinderAuthInfoIconView *_iconView;
    MMUILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WCFinderMsgSessionBadgeGroupView *badgeGroupView; // @synthesize badgeGroupView=_badgeGroupView;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)setupViewsWithTitle:(id)arg1 titleColor:(id)arg2 authInfo:(id)arg3 sessionId:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

