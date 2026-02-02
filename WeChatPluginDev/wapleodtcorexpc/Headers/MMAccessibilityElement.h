//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIAccessibilityElement.h>

@class RichTextView, UIBezierPath;

@interface MMAccessibilityElement : UIAccessibilityElement
{
    UIBezierPath *_accessibilityPathInContainer;
    RichTextView *_richTextView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(copy, nonatomic) UIBezierPath *accessibilityPathInContainer; // @synthesize accessibilityPathInContainer=_accessibilityPathInContainer;
- (id)accessibilityPath;

@end

