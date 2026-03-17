//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFTaskHelper : NSObject
{
}

+ (void)setupURLTask:(id)arg1;
+ (void)setupMediaTask:(id)arg1;
+ (id)genDownloadTaskInfos:(id)arg1 isThumb:(_Bool)arg2;
+ (id)generateDownloadHeadImageTaskInfo:(id)arg1 key:(id)arg2;
+ (id)taskInfoWithMedia:(id)arg1 type:(long long)arg2 key:(id)arg3;
+ (id)keyForMedia:(id)arg1 type:(long long)arg2;
+ (id)keyForURL:(id)arg1 imageIdentifier:(id)arg2;
+ (id)keyForURL:(id)arg1;
+ (id)hashKeyForURL:(id)arg1;

@end

