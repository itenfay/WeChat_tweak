//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFullScreenShadeConfig : NSObject
{
    _Bool _cancleOnTouch;
    NSString *_remindWording;
    double _topRation;
    double _maxTextSize;
    double _animationDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double maxTextSize; // @synthesize maxTextSize=_maxTextSize;
@property(nonatomic) _Bool cancleOnTouch; // @synthesize cancleOnTouch=_cancleOnTouch;
@property(nonatomic) double topRation; // @synthesize topRation=_topRation;
@property(retain, nonatomic) NSString *remindWording; // @synthesize remindWording=_remindWording;

@end

