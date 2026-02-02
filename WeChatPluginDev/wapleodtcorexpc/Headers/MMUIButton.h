//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class MMUIButtonChainModel;

@interface MMUIButton : UIButton
{
    _Bool _autoExpandHitArea;
    long long _expandHitWidth;
    long long _expandHitHeight;
    id _customObject;
    double _intrinsicContentHorizontalMargin;
    double _intrinsicContentVerticalMargin;
    struct UIEdgeInsets _touchInsets;
}

+ (CDUnknownBlockType)zz_create;
- (void).cxx_destruct;
@property(nonatomic) double intrinsicContentVerticalMargin; // @synthesize intrinsicContentVerticalMargin=_intrinsicContentVerticalMargin;
@property(nonatomic) double intrinsicContentHorizontalMargin; // @synthesize intrinsicContentHorizontalMargin=_intrinsicContentHorizontalMargin;
@property(retain, nonatomic) id customObject; // @synthesize customObject=_customObject;
@property(nonatomic) _Bool autoExpandHitArea; // @synthesize autoExpandHitArea=_autoExpandHitArea;
@property(nonatomic) long long expandHitHeight; // @synthesize expandHitHeight=_expandHitHeight;
@property(nonatomic) long long expandHitWidth; // @synthesize expandHitWidth=_expandHitWidth;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
- (struct CGSize)intrinsicContentSize;
- (void)adjustTrimmedTextWhenBoldByAutoFont;
- (void)adjustTrimmedTextWhenBoldByClipping;
- (void)setNormalImage:(id)arg1 selectedImage:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)fitHoverStyle;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateWithDirection:(unsigned long long)arg1 spacing:(double)arg2;
@property(readonly, copy, nonatomic) MMUIButtonChainModel *zz_setup;

@end

