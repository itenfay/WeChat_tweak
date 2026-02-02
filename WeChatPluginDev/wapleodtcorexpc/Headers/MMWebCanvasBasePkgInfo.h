//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary;

@interface MMWebCanvasBasePkgInfo : NSObject
{
    NSDictionary *_dicContextMetaInfo;
    NSDictionary *_dicRenderMetaInfo;
}

+ (id)pkgInfoFromFilePath:(id)arg1;
@property(retain, nonatomic) NSDictionary *dicRenderMetaInfo; // @synthesize dicRenderMetaInfo=_dicRenderMetaInfo;
@property(retain, nonatomic) NSDictionary *dicContextMetaInfo; // @synthesize dicContextMetaInfo=_dicContextMetaInfo;

@end

