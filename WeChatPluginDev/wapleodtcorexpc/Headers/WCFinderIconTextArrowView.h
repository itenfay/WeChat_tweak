//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, NSString, UIImageView, UILabel, WCFinderJumpInfo;

@interface WCFinderIconTextArrowView : UIView
{
    int _showPosition;
    CDUnknownBlockType _clickBlock;
    MMWebImageView *_iconImageView;
    UILabel *_textLabel;
    UIImageView *_arrowImageView;
    UIView *_bottomLineView;
    WCFinderJumpInfo *_jumpInfo;
}

+ (double)height;
- (void).cxx_destruct;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void)layoutAllSubviews;
- (void)updateWithImage:(id)arg1 text:(id)arg2;
- (void)updateWithImageUrl:(id)arg1 text:(id)arg2;
- (void)onClickAction;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

