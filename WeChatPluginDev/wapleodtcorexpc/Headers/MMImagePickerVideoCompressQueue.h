//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMImagePickerVideoTask, NSMutableArray;

@interface MMImagePickerVideoCompressQueue : NSObject
{
    _Bool _cancelled;
    NSMutableArray *_videoCompressTasks;
    MMImagePickerVideoTask *_runningTask;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) MMImagePickerVideoTask *runningTask; // @synthesize runningTask=_runningTask;
@property(retain, nonatomic) NSMutableArray *videoCompressTasks; // @synthesize videoCompressTasks=_videoCompressTasks;
- (void)cancel;
- (void)runTask:(id)arg1;
- (void)checkNextTask;
- (void)addCompressTask:(id)arg1 videoAsset:(id)arg2 videoUrl:(id)arg3 scene:(unsigned long long)arg4 complete:(CDUnknownBlockType)arg5;
- (id)init;

@end

