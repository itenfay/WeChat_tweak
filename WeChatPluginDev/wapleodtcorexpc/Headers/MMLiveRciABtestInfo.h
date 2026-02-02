//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveRciABtestInfo : NSObject
{
    _Bool _enableRci;
    _Bool _allowCompressedForRenderingYUV;
    _Bool _allowCompressedForSrc;
    long long _effectFallbackFlags;
}

+ (id)sharedInstance;
@property(nonatomic) long long effectFallbackFlags; // @synthesize effectFallbackFlags=_effectFallbackFlags;
@property(nonatomic) _Bool allowCompressedForSrc; // @synthesize allowCompressedForSrc=_allowCompressedForSrc;
@property(nonatomic) _Bool allowCompressedForRenderingYUV; // @synthesize allowCompressedForRenderingYUV=_allowCompressedForRenderingYUV;
@property(nonatomic) _Bool enableRci; // @synthesize enableRci=_enableRci;
- (void)loadInfo;

@end

