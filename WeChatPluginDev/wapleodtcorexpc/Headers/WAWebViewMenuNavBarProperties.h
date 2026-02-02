//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface WAWebViewMenuNavBarProperties : NSObject
{
    _Bool _rightButtonHidden;
    _Bool _loading;
    long long _navMode;
    long long _statusBarType;
    NSString *_navTitle;
    UIColor *_navBarColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool rightButtonHidden; // @synthesize rightButtonHidden=_rightButtonHidden;
@property(retain, nonatomic) UIColor *navBarColor; // @synthesize navBarColor=_navBarColor;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(nonatomic) long long statusBarType; // @synthesize statusBarType=_statusBarType;
@property(nonatomic) long long navMode; // @synthesize navMode=_navMode;

@end

