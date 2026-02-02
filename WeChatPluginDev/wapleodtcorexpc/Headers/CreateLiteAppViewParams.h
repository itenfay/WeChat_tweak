//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CreateLiteAppViewParams : NSObject
{
    _Bool _isHalfScreen;
    _Bool _autoWidth;
    _Bool _autoHeight;
    _Bool _enablePullUp;
    _Bool _enablePullDown;
    _Bool _enableFullscreenPullDown;
    _Bool _withMask;
    _Bool _landscape;
    _Bool _autoRotate;
    CDUnknownBlockType _bodySizeChange;
    double _heightPercent;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool autoRotate; // @synthesize autoRotate=_autoRotate;
@property(nonatomic) _Bool landscape; // @synthesize landscape=_landscape;
@property(nonatomic) _Bool withMask; // @synthesize withMask=_withMask;
@property(nonatomic) double heightPercent; // @synthesize heightPercent=_heightPercent;
@property(nonatomic) _Bool enableFullscreenPullDown; // @synthesize enableFullscreenPullDown=_enableFullscreenPullDown;
@property(nonatomic) _Bool enablePullDown; // @synthesize enablePullDown=_enablePullDown;
@property(nonatomic) _Bool enablePullUp; // @synthesize enablePullUp=_enablePullUp;
@property(copy, nonatomic) CDUnknownBlockType bodySizeChange; // @synthesize bodySizeChange=_bodySizeChange;
@property(nonatomic) _Bool autoHeight; // @synthesize autoHeight=_autoHeight;
@property(nonatomic) _Bool autoWidth; // @synthesize autoWidth=_autoWidth;
@property(nonatomic) _Bool isHalfScreen; // @synthesize isHalfScreen=_isHalfScreen;
- (id)init:(_Bool)arg1;
- (id)init;

@end

