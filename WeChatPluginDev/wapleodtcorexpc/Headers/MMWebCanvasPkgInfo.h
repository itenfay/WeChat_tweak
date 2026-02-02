//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebCanvasBasePkgInfo, MMWebCanvasBizPkgInfo;

@interface MMWebCanvasPkgInfo : NSObject
{
    MMWebCanvasBasePkgInfo *_basePkgInfo;
    MMWebCanvasBizPkgInfo *_bizPkgInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebCanvasBizPkgInfo *bizPkgInfo; // @synthesize bizPkgInfo=_bizPkgInfo;
@property(retain, nonatomic) MMWebCanvasBasePkgInfo *basePkgInfo; // @synthesize basePkgInfo=_basePkgInfo;
- (id)description;

@end

