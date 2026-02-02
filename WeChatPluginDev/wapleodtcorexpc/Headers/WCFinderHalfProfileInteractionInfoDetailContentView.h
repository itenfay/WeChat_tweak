//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, WCFinderCustomImageRichTextView, WCFinderHalfProfileInteractionInfoDetailConfiguration;
@protocol UIContentConfiguration;

@interface WCFinderHalfProfileInteractionInfoDetailContentView : UIView
{
    WCFinderHalfProfileInteractionInfoDetailConfiguration *_appliedConfiguration;
    WCFinderCustomImageRichTextView *_describeContentLabel;
}

+ (id)_getRichTextView;
+ (double)cellHeightWithConfiguration:(id)arg1 layoutEnvironment:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *describeContentLabel; // @synthesize describeContentLabel=_describeContentLabel;
@property(copy, nonatomic) WCFinderHalfProfileInteractionInfoDetailConfiguration *appliedConfiguration; // @synthesize appliedConfiguration=_appliedConfiguration;
@property(copy, nonatomic) id <UIContentConfiguration> configuration;
- (void)didTapLabel;
- (void)_updateUI;
- (void)_applyConfiguration:(id)arg1;
- (void)layoutSubviews;
- (void)_setupUI;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

