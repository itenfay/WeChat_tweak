//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMWebPrefetchResUtil
{
}

+ (id)jsApiPermitionArrFromData:(id)arg1;
+ (unsigned int)maxCacheTimeWithRespHeader:(id)arg1;
+ (id)valueInLowercaseForField:(id)arg1 withHeader:(id)arg2;
+ (void)clearAllPreloadResourceCache;
+ (void)clearCacheIfExistWithDomain:(id)arg1 identifier:(id)arg2;
+ (id)pathOfCacheDir;
+ (id)dirPathOfComResDownload;
+ (id)fileNameForResPkgWithUrl:(id)arg1;
+ (id)fileNameForTempDownloadPkg:(id)arg1;
+ (id)fileNameForResWithUrl:(id)arg1;
+ (id)dicForRespHeaderWithPath:(id)arg1;
+ (id)pathForComResRespHeaderWithUrl:(id)arg1;
+ (id)packageIdentifierFromUrl:(id)arg1;
+ (id)tempDownloadPathForComResPkgHeader:(id)arg1 url:(id)arg2;
+ (id)tempDownloadPathForComResPkg:(id)arg1 url:(id)arg2;
+ (id)pathForComResPkgHeaderWithPackageIdentifier:(id)arg1 version:(id)arg2;
+ (id)pathForComResPkgWithPackageIdentifier:(id)arg1 version:(id)arg2;
+ (id)localPkgVersionListWithIdentifier:(id)arg1;
+ (id)pathForComResWithUrl:(id)arg1;
+ (id)dirPathOfDocument;
+ (id)pathForRespHeaderOfDocumentWithDomain:(id)arg1 identifier:(id)arg2;
+ (id)pathForDocumentWithDomain:(id)arg1 identifier:(id)arg2;
+ (id)reqHeaderForDocumentWithDomain:(id)arg1 identifier:(id)arg2;
+ (id)docHTMLStringWithDomain:(id)arg1 identifier:(id)arg2;
+ (id)dicForRespHeaderOfDocumentWithDomain:(id)arg1 identifier:(id)arg2;
+ (unsigned int)fileStatusWithFilePath:(id)arg1 respHeader:(id)arg2;
+ (unsigned int)documentStatusWithDomain:(id)arg1 identifier:(id)arg2;
+ (id)documentInfoWithDomain:(id)arg1 identifier:(id)arg2;

@end

