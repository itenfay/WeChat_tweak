//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, NSArray, UIColor, WCFinderCustomImageRichTextView;

@interface WCFinderTextCarouselView : UIView
{
    UIColor *_textColor;
    WCFinderCustomImageRichTextView *_textView;
    WCFinderCustomImageRichTextView *_textAnimationView;
    MMTimer *_carouselTimer;
    NSArray *_textArray;
    long long _index;
}

- (void).cxx_destruct;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSArray *textArray; // @synthesize textArray=_textArray;
@property(retain, nonatomic) MMTimer *carouselTimer; // @synthesize carouselTimer=_carouselTimer;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *textAnimationView; // @synthesize textAnimationView=_textAnimationView;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (id)genTextView;
- (void)scrollToNext;
- (void)layoutUI;
- (void)stopCarousel;
- (void)startCarousel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (id)displayText;
- (void)updateWithTextArray:(id)arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

