//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, RichTextView, UIImageView;

@interface MMFinderLiveFansGroupMemberTableHeaderView : UIView
{
    _Bool _showSuperfanTip;
    _Bool _showSuperfanWingsImage;
    MMUILabel *_fansGroupNameLabel;
    CDUnknownBlockType _enableSuperfanCallback;
    MMUILabel *_fansGroupNameTipLabel;
    RichTextView *_superfanTipLabel;
    UIImageView *_superfanWingsImageView;
}

+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *superfanWingsImageView; // @synthesize superfanWingsImageView=_superfanWingsImageView;
@property(retain, nonatomic) RichTextView *superfanTipLabel; // @synthesize superfanTipLabel=_superfanTipLabel;
@property(retain, nonatomic) MMUILabel *fansGroupNameTipLabel; // @synthesize fansGroupNameTipLabel=_fansGroupNameTipLabel;
@property(copy, nonatomic) CDUnknownBlockType enableSuperfanCallback; // @synthesize enableSuperfanCallback=_enableSuperfanCallback;
@property(nonatomic) _Bool showSuperfanWingsImage; // @synthesize showSuperfanWingsImage=_showSuperfanWingsImage;
@property(nonatomic) _Bool showSuperfanTip; // @synthesize showSuperfanTip=_showSuperfanTip;
@property(retain, nonatomic) MMUILabel *fansGroupNameLabel; // @synthesize fansGroupNameLabel=_fansGroupNameLabel;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)layoutSuperfanWingsImageView;
- (void)layoutSuperfanTipLabel;
- (void)layoutFansGroupNameLabel;
- (void)layoutFansGroupNameTipLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentTopMargin;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

