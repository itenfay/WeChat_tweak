//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QNavigationGravityLine, QUserLocationCompassPresentation, UIColor, UIImage;

@interface QUserLocationPresentation : NSObject
{
    UIImage *_icon;
    UIColor *_circleFillColor;
    QUserLocationCompassPresentation *_compass;
    QNavigationGravityLine *_gravityLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QNavigationGravityLine *gravityLine; // @synthesize gravityLine=_gravityLine;
@property(retain, nonatomic) QUserLocationCompassPresentation *compass; // @synthesize compass=_compass;
@property(retain, nonatomic) UIColor *circleFillColor; // @synthesize circleFillColor=_circleFillColor;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;

@end

