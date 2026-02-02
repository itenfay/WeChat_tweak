//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCAdBulletScreenTextStyleInfo;

@interface WCAdBulletScreenInfo : NSObject
{
    int _visibleBullets;
    NSArray *_bulletTexts;
    WCAdBulletScreenTextStyleInfo *_bulletTextStyle;
    double _bulletShootingDelay;
    double _bulletShootingDuration;
    double _bulletShootingTime;
}

- (void).cxx_destruct;
@property(nonatomic) int visibleBullets; // @synthesize visibleBullets=_visibleBullets;
@property(nonatomic) double bulletShootingTime; // @synthesize bulletShootingTime=_bulletShootingTime;
@property(nonatomic) double bulletShootingDuration; // @synthesize bulletShootingDuration=_bulletShootingDuration;
@property(nonatomic) double bulletShootingDelay; // @synthesize bulletShootingDelay=_bulletShootingDelay;
@property(retain, nonatomic) WCAdBulletScreenTextStyleInfo *bulletTextStyle; // @synthesize bulletTextStyle=_bulletTextStyle;
@property(retain, nonatomic) NSArray *bulletTexts; // @synthesize bulletTexts=_bulletTexts;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

