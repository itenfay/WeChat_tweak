//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView;

@interface MMFinderLiveNotifyStyleCommentPubbleCell
{
    RichTextView *_nickLabel;
    NSString *_selfAccessibilityStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *selfAccessibilityStr; // @synthesize selfAccessibilityStr=_selfAccessibilityStr;
@property(retain, nonatomic) RichTextView *nickLabel; // @synthesize nickLabel=_nickLabel;
- (void)updateSelfAccessibility;
- (void)updateAccessibility:(id)arg1;
- (id)getSelfAccessibility;
- (id)getHandledAccessibilityStr:(id)arg1;
- (id)finderPubbleCellFrame;
- (void)updateNickLabelOrigin;
- (void)layoutNickLabel;
- (void)updateCommentLabelOrigin;
- (void)layoutCommentLabel;
- (void)updateBackGroundColor;
- (id)initWithCellFrame:(id)arg1;

@end

