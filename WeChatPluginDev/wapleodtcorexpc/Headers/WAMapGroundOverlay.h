//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage;

@interface WAMapGroundOverlay
{
    int _zIndex;
    long long _overlayId;
    long long _displayLevel;
    NSString *_iconSrc;
    UIImage *_icon;
    CDStruct_3ec1b870 _bounds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *iconSrc; // @synthesize iconSrc=_iconSrc;
@property(nonatomic) CDStruct_3ec1b870 bounds; // @synthesize bounds=_bounds;
@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) long long displayLevel; // @synthesize displayLevel=_displayLevel;
@property(nonatomic) long long overlayId; // @synthesize overlayId=_overlayId;

@end

