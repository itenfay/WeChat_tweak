//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMFinderLiveUploadTask : NSObject
{
    NSString *_taskId;
    NSArray *_mediaItemArray;
    CDUnknownBlockType _completion;
    long long _maxRetryCount;
    long long _currentRetryCount;
    long long _uploadingMediaCount;
}

- (void).cxx_destruct;
@property long long uploadingMediaCount; // @synthesize uploadingMediaCount=_uploadingMediaCount;
@property long long currentRetryCount; // @synthesize currentRetryCount=_currentRetryCount;
@property(nonatomic) long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSArray *mediaItemArray; // @synthesize mediaItemArray=_mediaItemArray;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) long long finishType;
@property(readonly, nonatomic) _Bool isUploadTaskSuccess;
- (id)initWithUploadTaskId:(id)arg1 mediaItemArray:(id)arg2 maxRetryCount:(long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

