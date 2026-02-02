//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveTableStyleCommentPubbleCell
{
    NSString *_signAccessibilityStr;
    NSString *_selfAccessibilityStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *selfAccessibilityStr; // @synthesize selfAccessibilityStr=_selfAccessibilityStr;
@property(retain, nonatomic) NSString *signAccessibilityStr; // @synthesize signAccessibilityStr=_signAccessibilityStr;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateSelfAccessibility;
- (void)updateAccessibility:(id)arg1;
- (id)getSelfAccessibility;
- (id)getHandledAccessibilityStr:(id)arg1;
- (void)updateCommentLabelOrigin;
- (void)layoutCommentLabel;
- (void)setCommentLabel:(id)arg1;
- (double)maxCornerRadius;
- (void)layoutSubviews;
- (id)finderPubbleCellFrame;
- (id)initWithCellFrame:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

