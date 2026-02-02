//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIColor, UIView;
@protocol MMCopyLabelDelegate;

@interface MMCopyLabel
{
    UIView<MMCopyLabelDelegate> *_delegate;
    UIColor *_highlightedBGColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *highlightedBGColor; // @synthesize highlightedBGColor=_highlightedBGColor;
@property(nonatomic) __weak UIView<MMCopyLabelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)longPressToCopy:(id)arg1;
- (void)menuItemHidden:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

