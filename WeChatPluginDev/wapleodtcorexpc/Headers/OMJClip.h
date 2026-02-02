//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJAssetInfo;

@interface OMJClip : NSObject
{
    OMJAssetInfo *_assetInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) OMJAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
- (id)initWithAssetInfo:(id)arg1;

@end

