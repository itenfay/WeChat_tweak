//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextField.h>

@interface WCUITextField : UITextField
{
    _Bool m_bRestrictShareMenu;
    double m_fPlaceholderFontSize;
    struct UIEdgeInsets _expandHitAreaInsets;
}

@property(nonatomic) struct UIEdgeInsets expandHitAreaInsets; // @synthesize expandHitAreaInsets=_expandHitAreaInsets;
@property(nonatomic) double m_fPlaceholderFontSize; // @synthesize m_fPlaceholderFontSize;
@property(nonatomic) _Bool m_bRestrictShareMenu; // @synthesize m_bRestrictShareMenu;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)init;

@end

