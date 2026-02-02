//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJAssetInfo;

@interface WCTemplateMaterialInfo : NSObject
{
    OMJAssetInfo *_omjAssetInfo;
}

+ (id)assetInfoWithMediaFileAtPath:(id)arg1 identifier:(id)arg2 mediaType:(long long)arg3 error:(id *)arg4;
+ (id)assetInfoWithPHLocalIdentifier:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) OMJAssetInfo *omjAssetInfo; // @synthesize omjAssetInfo=_omjAssetInfo;
- (id)initWithMediaFileAtPath:(id)arg1 identifier:(id)arg2 mediaType:(long long)arg3 error:(id *)arg4;
- (id)initWithPHLocalIdentifier:(id)arg1 error:(id *)arg2;

@end

