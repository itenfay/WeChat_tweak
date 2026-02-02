//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary;

@interface MMWebCanvasBizPkgInfo
{
    NSDictionary *_dicClientMetaInfo;
}

+ (id)pkgInfoFromFilePath:(id)arg1;
+ (id)pkgMetaInfoKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *dicClientMetaInfo; // @synthesize dicClientMetaInfo=_dicClientMetaInfo;
- (long long)minBasePkgVersionRequired;
- (id)getBizJsWithType:(id)arg1;

@end

