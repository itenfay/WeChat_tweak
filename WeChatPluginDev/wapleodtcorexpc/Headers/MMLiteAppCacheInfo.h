//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiteAppViewController, OpenLiteAppInfo;

@interface MMLiteAppCacheInfo : NSObject
{
    MMLiteAppViewController *_vc;
    OpenLiteAppInfo *_openInfo;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) OpenLiteAppInfo *openInfo; // @synthesize openInfo=_openInfo;
@property(retain, nonatomic) MMLiteAppViewController *vc; // @synthesize vc=_vc;
- (_Bool)isHitCache:(id)arg1;

@end

