//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface QUserLocationCompassPresentation : NSObject
{
    UIImage *_compassImage;
    UIImage *_directionNorth;
    UIImage *_directionSouth;
    UIImage *_directionEast;
    UIImage *_directionWest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *directionWest; // @synthesize directionWest=_directionWest;
@property(retain, nonatomic) UIImage *directionEast; // @synthesize directionEast=_directionEast;
@property(retain, nonatomic) UIImage *directionSouth; // @synthesize directionSouth=_directionSouth;
@property(retain, nonatomic) UIImage *directionNorth; // @synthesize directionNorth=_directionNorth;
@property(retain, nonatomic) UIImage *compassImage; // @synthesize compassImage=_compassImage;

@end

