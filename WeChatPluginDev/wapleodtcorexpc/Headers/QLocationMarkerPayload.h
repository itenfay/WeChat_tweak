//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QLocationCompassPayload, QLocationRedlinePayload, UIColor, UIImage;

@interface QLocationMarkerPayload : NSObject
{
    UIImage *_icon;
    UIColor *_circleFillColor;
    QLocationCompassPayload *_compass;
    QLocationRedlinePayload *_redline;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QLocationRedlinePayload *redline; // @synthesize redline=_redline;
@property(retain, nonatomic) QLocationCompassPayload *compass; // @synthesize compass=_compass;
@property(retain, nonatomic) UIColor *circleFillColor; // @synthesize circleFillColor=_circleFillColor;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;

@end

