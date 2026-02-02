//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class WXMASViewAttribute;

@interface UIView (WXMASAdditions)
- (id)mas_closestCommonSuperview:(id)arg1;
@property(retain, nonatomic) id mas_key;
@property(readonly, nonatomic) WXMASViewAttribute *mas_safeAreaLayoutGuideRight;
@property(readonly, nonatomic) WXMASViewAttribute *mas_safeAreaLayoutGuideLeft;
@property(readonly, nonatomic) WXMASViewAttribute *mas_safeAreaLayoutGuideBottom;
@property(readonly, nonatomic) WXMASViewAttribute *mas_safeAreaLayoutGuideTop;
@property(readonly, nonatomic) WXMASViewAttribute *mas_safeAreaLayoutGuide;
@property(readonly, nonatomic) WXMASViewAttribute *mas_centerYWithinMargins;
@property(readonly, nonatomic) WXMASViewAttribute *mas_centerXWithinMargins;
@property(readonly, nonatomic) WXMASViewAttribute *mas_trailingMargin;
@property(readonly, nonatomic) WXMASViewAttribute *mas_leadingMargin;
@property(readonly, nonatomic) WXMASViewAttribute *mas_bottomMargin;
@property(readonly, nonatomic) WXMASViewAttribute *mas_topMargin;
@property(readonly, nonatomic) WXMASViewAttribute *mas_rightMargin;
@property(readonly, nonatomic) WXMASViewAttribute *mas_leftMargin;
@property(readonly, nonatomic) WXMASViewAttribute *mas_lastBaseline;
@property(readonly, nonatomic) WXMASViewAttribute *mas_firstBaseline;
@property(readonly, nonatomic) CDUnknownBlockType mas_attribute;
@property(readonly, nonatomic) WXMASViewAttribute *mas_baseline;
@property(readonly, nonatomic) WXMASViewAttribute *mas_centerY;
@property(readonly, nonatomic) WXMASViewAttribute *mas_centerX;
@property(readonly, nonatomic) WXMASViewAttribute *mas_height;
@property(readonly, nonatomic) WXMASViewAttribute *mas_width;
@property(readonly, nonatomic) WXMASViewAttribute *mas_trailing;
@property(readonly, nonatomic) WXMASViewAttribute *mas_leading;
@property(readonly, nonatomic) WXMASViewAttribute *mas_bottom;
@property(readonly, nonatomic) WXMASViewAttribute *mas_right;
@property(readonly, nonatomic) WXMASViewAttribute *mas_top;
@property(readonly, nonatomic) WXMASViewAttribute *mas_left;
- (id)mas_remakeConstraints:(CDUnknownBlockType)arg1;
- (id)mas_updateConstraints:(CDUnknownBlockType)arg1;
- (id)mas_makeConstraints:(CDUnknownBlockType)arg1;
@end

