//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;

@interface WCFinderZoomCacheData : NSObject
{
    UIView *_snapView;
    double _snapCornerRadius;
    struct CGRect _snapOriginFrame;
}

- (void).cxx_destruct;
@property(nonatomic) double snapCornerRadius; // @synthesize snapCornerRadius=_snapCornerRadius;
@property(nonatomic) struct CGRect snapOriginFrame; // @synthesize snapOriginFrame=_snapOriginFrame;
@property(retain, nonatomic) UIView *snapView; // @synthesize snapView=_snapView;

@end

