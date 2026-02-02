//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface QIntersectionOverlayPayload : NSObject
{
    _Bool _visible;
    _Bool _isDayMode;
    int _abDistance;
    int _junctionStyle;
    int _junctionType;
    NSData *_data;
    unsigned long long _leftTopCornerRadius;
    unsigned long long _rightTopCornerRadius;
    unsigned long long _leftBottomCornerRadius;
    unsigned long long _rightBottomCornerRadius;
    struct CGRect _rect;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long rightBottomCornerRadius; // @synthesize rightBottomCornerRadius=_rightBottomCornerRadius;
@property(nonatomic) unsigned long long leftBottomCornerRadius; // @synthesize leftBottomCornerRadius=_leftBottomCornerRadius;
@property(nonatomic) unsigned long long rightTopCornerRadius; // @synthesize rightTopCornerRadius=_rightTopCornerRadius;
@property(nonatomic) unsigned long long leftTopCornerRadius; // @synthesize leftTopCornerRadius=_leftTopCornerRadius;
@property(nonatomic) int junctionType; // @synthesize junctionType=_junctionType;
@property(nonatomic) int junctionStyle; // @synthesize junctionStyle=_junctionStyle;
@property(nonatomic) int abDistance; // @synthesize abDistance=_abDistance;
@property(nonatomic) _Bool isDayMode; // @synthesize isDayMode=_isDayMode;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;

@end

