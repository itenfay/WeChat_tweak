//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIAccessibilityElement.h>

@class SemanticsObject;

@interface SemanticsObjectContainer : UIAccessibilityElement
{
    SemanticsObject *_semanticsObject;
    WeakPtr_9998a1eb _bridge;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak SemanticsObject *semanticsObject; // @synthesize semanticsObject=_semanticsObject;
- (_Bool)accessibilityScroll:(long long)arg1;
- (id)accessibilityContainer;
- (struct CGRect)accessibilityFrame;
- (_Bool)isAccessibilityElement;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)initWithSemanticsObject:(id)arg1 bridge:(WeakPtr_9998a1eb)arg2;
- (id)init;

@end

