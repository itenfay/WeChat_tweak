//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class RichTextView;

@interface WCFinderDotTextView : UIView
{
    RichTextView *_textView;
    UIView *_dotView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
- (void)updateFont:(id)arg1 content:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

