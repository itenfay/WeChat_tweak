//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJTextOverlayDesc;

@interface OMJHandleBoxTitle : NSObject
{
    OMJTextOverlayDesc *_overlayDesc;
    long long _corner;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long corner; // @synthesize corner=_corner;
@property(readonly, nonatomic) OMJTextOverlayDesc *overlayDesc; // @synthesize overlayDesc=_overlayDesc;
- (id)initWithOverlayDesc:(id)arg1 corner:(long long)arg2;

@end

