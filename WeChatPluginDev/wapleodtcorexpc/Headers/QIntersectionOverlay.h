//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, QIntersectionOverlayHandler, QIntersectionOverlayManager;

@interface QIntersectionOverlay : NSObject
{
    _Bool _visible;
    _Bool _isDayMode;
    _Bool _roundedCorner;
    NSData *_data;
    unsigned long long _leftTopCornerRadius;
    unsigned long long _rightTopCornerRadius;
    unsigned long long _leftBottomCornerRadius;
    unsigned long long _rightBottomCornerRadius;
    QIntersectionOverlayManager *_container;
    QIntersectionOverlayHandler *_handler;
    struct CGRect _rect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QIntersectionOverlayHandler *handler; // @synthesize handler=_handler;
@property(nonatomic) __weak QIntersectionOverlayManager *container; // @synthesize container=_container;
@property(nonatomic) unsigned long long rightBottomCornerRadius; // @synthesize rightBottomCornerRadius=_rightBottomCornerRadius;
@property(nonatomic) unsigned long long leftBottomCornerRadius; // @synthesize leftBottomCornerRadius=_leftBottomCornerRadius;
@property(nonatomic) unsigned long long rightTopCornerRadius; // @synthesize rightTopCornerRadius=_rightTopCornerRadius;
@property(nonatomic) unsigned long long leftTopCornerRadius; // @synthesize leftTopCornerRadius=_leftTopCornerRadius;
@property(nonatomic) _Bool roundedCorner; // @synthesize roundedCorner=_roundedCorner;
@property(nonatomic) _Bool isDayMode; // @synthesize isDayMode=_isDayMode;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;

@end

