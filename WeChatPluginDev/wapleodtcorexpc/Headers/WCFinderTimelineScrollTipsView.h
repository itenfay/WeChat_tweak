//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, UITapGestureRecognizer;

@interface WCFinderTimelineScrollTipsView : UIView
{
    NSString *_feedID;
    CDUnknownBlockType _clickAction;
    UILabel *_label;
    UIImageView *_iconImage;
    UITapGestureRecognizer *_tapGesture;
}

+ (id)tipsViewWithTips:(id)arg1 imageName:(id)arg2 maxWidth:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void)clickTipsAction;
- (void)setUpWithTips:(id)arg1 imageName:(id)arg2 maxWidth:(double)arg3;

@end

