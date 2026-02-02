//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OMJAssetInfo;

@interface MJAIAssetTaskInfo : NSObject
{
    _Bool _cdnUploadCacheEnabled;
    unsigned long long _index;
    OMJAssetInfo *_originalAssetInfo;
    NSString *_assetFileKey;
    NSString *_adjustedAssetFilePath;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cdnUploadCacheEnabled; // @synthesize cdnUploadCacheEnabled=_cdnUploadCacheEnabled;
@property(copy, nonatomic) NSString *adjustedAssetFilePath; // @synthesize adjustedAssetFilePath=_adjustedAssetFilePath;
@property(copy, nonatomic) NSString *assetFileKey; // @synthesize assetFileKey=_assetFileKey;
@property(retain, nonatomic) OMJAssetInfo *originalAssetInfo; // @synthesize originalAssetInfo=_originalAssetInfo;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (id)initWithIndex:(unsigned long long)arg1 originalAssetInfo:(id)arg2;

@end

