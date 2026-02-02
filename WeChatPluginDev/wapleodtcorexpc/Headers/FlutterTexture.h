//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class IOSurface;
@protocol MTLTexture;

@interface FlutterTexture : NSObject
{
    id <MTLTexture> _texture;
    IOSurface *_surface;
    double _presentedTime;
    _Bool waitingForCompletion;
}

- (void).cxx_destruct;
@property _Bool waitingForCompletion; // @synthesize waitingForCompletion;
@property(nonatomic) double presentedTime; // @synthesize presentedTime=_presentedTime;
@property(readonly, nonatomic) IOSurface *surface; // @synthesize surface=_surface;
@property(readonly, nonatomic) id <MTLTexture> texture; // @synthesize texture=_texture;
- (id)initWithTexture:(id)arg1 surface:(id)arg2;

@end

