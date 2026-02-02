//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JumpInfo, NSString, UIColor, UIImage;

@interface GameLifeTabNavItemConfig : NSObject
{
    _Bool _hasSmallRedDot;
    NSString *_navKey;
    UIImage *_rightBarItemImg;
    UIImage *_rightBarItemDarkImg;
    NSString *_rightBarItemTitle;
    UIColor *_rightBarItemColor;
    JumpInfo *_jumpInfo;
    long long _badgetValue;
}

+ (id)navItemConfigArrayFromCornerSettings:(id)arg1;
+ (id)navItemConfigFromCornerSetting:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasSmallRedDot; // @synthesize hasSmallRedDot=_hasSmallRedDot;
@property(nonatomic) long long badgetValue; // @synthesize badgetValue=_badgetValue;
@property(retain, nonatomic) JumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) UIColor *rightBarItemColor; // @synthesize rightBarItemColor=_rightBarItemColor;
@property(copy, nonatomic) NSString *rightBarItemTitle; // @synthesize rightBarItemTitle=_rightBarItemTitle;
@property(retain, nonatomic) UIImage *rightBarItemDarkImg; // @synthesize rightBarItemDarkImg=_rightBarItemDarkImg;
@property(retain, nonatomic) UIImage *rightBarItemImg; // @synthesize rightBarItemImg=_rightBarItemImg;
@property(copy, nonatomic) NSString *navKey; // @synthesize navKey=_navKey;

@end

