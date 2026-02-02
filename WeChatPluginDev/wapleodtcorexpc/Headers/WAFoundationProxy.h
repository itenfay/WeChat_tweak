//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAFoundationProxy : NSObject
{
}

+ (id)sharedPreDownloadTaskInfos;
+ (void)handleWAVideoStartStreamPlaying:(id)arg1;
+ (_Bool)preDownloadVideoWithArgs:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (_Bool)StopHttpsDownloadTask:(id)arg1;
+ (_Bool)StartHttpsDownloadTask:(id)arg1 withUrl:(id)arg2 withSavePath:(id)arg3 withIPList:(id)arg4 withIsGzip:(_Bool)arg5 withFileType:(int)arg6;
+ (void)setMatrixCustomInfoWithKey:(id)arg1 value:(id)arg2;
+ (void)removeMatrixUserType:(unsigned int)arg1;
+ (void)addMatrixUserType:(unsigned int)arg1;
+ (void)decreaseExistWeAppCount;
+ (void)setExistWeAppCount:(int)arg1;
+ (void)setWeAppScene:(id)arg1;
+ (_Bool)getFreeSize:(unsigned long long *)arg1;
+ (_Bool)getDiskSize:(unsigned long long *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

