//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface WCFinderThanksButtonConfig : NSObject
{
    int _iconType;
    UIFont *_buttonFont;
    double _buttonHeight;
    UIColor *_backgroundColor;
    struct CGSize _iconSize;
    struct UIEdgeInsets _buttonContentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) int iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double buttonHeight; // @synthesize buttonHeight=_buttonHeight;
@property(nonatomic) struct UIEdgeInsets buttonContentInsets; // @synthesize buttonContentInsets=_buttonContentInsets;
@property(retain, nonatomic) UIFont *buttonFont; // @synthesize buttonFont=_buttonFont;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;

@end

