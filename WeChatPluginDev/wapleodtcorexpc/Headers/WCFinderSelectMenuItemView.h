//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class NSString, RichTextView;

@interface WCFinderSelectMenuItemView : UIControl
{
    NSString *_title;
    double _cornerRadius;
    RichTextView *_textView;
}

+ (double)estimatedHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (double)getMaxWidth;
- (id)initWithFrame:(struct CGRect)arg1;

@end

