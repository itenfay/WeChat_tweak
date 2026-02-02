//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveResDownloadManagerUtilities : NSObject
{
}

+ (void)saveExtraData:(id)arg1 forFileAtPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)extractExtraDataAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)computeAndSaveDigestForFileAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)validateFileAtPathWithComputedDigest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

