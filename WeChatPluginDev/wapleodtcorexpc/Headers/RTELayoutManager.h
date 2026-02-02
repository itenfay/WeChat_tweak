//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/NSLayoutManager.h>

@protocol RTELayoutManagerDelegate;

@interface RTELayoutManager : NSLayoutManager
{
    id <RTELayoutManagerDelegate> _layoutDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <RTELayoutManagerDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (id)storage;
- (void)relayoutForContentRange:(struct _NSRange)arg1;
- (void)setNeedsDisplay:(id)arg1;
- (void)setNeedsLayout:(id)arg1;
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;

@end

