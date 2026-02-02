//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView;

@interface MaskButtonView
{
    MMUIView *_maskButtonHighlightedView;
}

@property(retain, nonatomic) MMUIView *maskButtonHighlightedView; // @synthesize maskButtonHighlightedView=_maskButtonHighlightedView;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;

@end

