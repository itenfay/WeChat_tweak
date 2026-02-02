//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class EditImageColor, UIView;

@interface EditImageColorDotView : UIControl
{
    UIView *m_dotView;
    EditImageColor *_editColor;
    double _selectedSizeLen;
    double _unselectedSizeLen;
    double _borderWidth;
    long long _expandHitWidth;
    long long _expandHitHeight;
}

- (void).cxx_destruct;
@property(nonatomic) long long expandHitHeight; // @synthesize expandHitHeight=_expandHitHeight;
@property(nonatomic) long long expandHitWidth; // @synthesize expandHitWidth=_expandHitWidth;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double unselectedSizeLen; // @synthesize unselectedSizeLen=_unselectedSizeLen;
@property(nonatomic) double selectedSizeLen; // @synthesize selectedSizeLen=_selectedSizeLen;
@property(retain, nonatomic) EditImageColor *editColor; // @synthesize editColor=_editColor;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;

@end

