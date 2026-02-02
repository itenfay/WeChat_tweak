//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderStreamProfileContainer
{
    _Bool _displayCover;
    _Bool _isHalfModel;
}

@property(nonatomic) _Bool isHalfModel; // @synthesize isHalfModel=_isHalfModel;
@property(nonatomic) _Bool displayCover; // @synthesize displayCover=_displayCover;
- (long long)overrideUserInterfaceStyle;
- (_Bool)useTransparentNavibar;

@end

