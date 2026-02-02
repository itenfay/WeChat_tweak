//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, RichTextView, WCFinderTimelineRedDotBubbleDisplayInfo;

@interface WCFinderTLTabBubble : UIView
{
    NSArray *_iconViews;
    RichTextView *_textView;
    long long _category;
    unsigned long long _token;
    WCFinderTimelineRedDotBubbleDisplayInfo *_redDotDisplayInfo;
    double _displayDuration;
    long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double displayDuration; // @synthesize displayDuration=_displayDuration;
@property(retain, nonatomic) WCFinderTimelineRedDotBubbleDisplayInfo *redDotDisplayInfo; // @synthesize redDotDisplayInfo=_redDotDisplayInfo;
@property(nonatomic) unsigned long long token; // @synthesize token=_token;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSArray *iconViews; // @synthesize iconViews=_iconViews;
- (void)updateDSLRedDotInfo:(id)arg1;
- (void)updateIconUrls:(id)arg1 withText:(id)arg2 style:(long long)arg3;
- (void)adjustArrowForAnchor:(double)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 adjustElementSize:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)prepareForReuse;
- (void)updateMask:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

