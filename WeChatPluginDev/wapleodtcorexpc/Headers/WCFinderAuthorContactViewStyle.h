//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface WCFinderAuthorContactViewStyle : NSObject
{
    _Bool _showAuthProfessionLabel;
    double _headIconSize;
    double _authIconSize;
    double _nickNameLeftMargin;
    UIFont *_nicknameFont;
    UIColor *_nicknameColor;
}

+ (id)defaultStyle;
- (void).cxx_destruct;
@property(nonatomic) _Bool showAuthProfessionLabel; // @synthesize showAuthProfessionLabel=_showAuthProfessionLabel;
@property(retain, nonatomic) UIColor *nicknameColor; // @synthesize nicknameColor=_nicknameColor;
@property(retain, nonatomic) UIFont *nicknameFont; // @synthesize nicknameFont=_nicknameFont;
@property(nonatomic) double nickNameLeftMargin; // @synthesize nickNameLeftMargin=_nickNameLeftMargin;
@property(nonatomic) double authIconSize; // @synthesize authIconSize=_authIconSize;
@property(nonatomic) double headIconSize; // @synthesize headIconSize=_headIconSize;

@end

