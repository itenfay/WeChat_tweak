//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView;

@interface MMFinderLiveFansGroupInvisibleTipView : UIView
{
    RichTextView *_richTextView;
    NSString *_tip;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithTip:(id)arg1 blurColor:(id)arg2;

@end

