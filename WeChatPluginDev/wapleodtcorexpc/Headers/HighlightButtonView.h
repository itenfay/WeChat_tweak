//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView;

@interface HighlightButtonView : NSObject
{
    MMUIView *_highlightMaskView;
}

@property(retain, nonatomic) MMUIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
- (void)setHighlighted:(_Bool)arg1;

@end

