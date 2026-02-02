//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderResourceLoadTask : NSObject
{
    _Bool _isCanceled;
    NSString *_targetURL;
    CDUnknownBlockType _onLoadCompletionBlock;
    NSString *_uid;
    NSString *_savePath;
    NSString *_fileMD5;
    unsigned long long _maxRetryCount;
    NSString *_tmpPath;
    unsigned long long _retryCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(copy, nonatomic) NSString *tmpPath; // @synthesize tmpPath=_tmpPath;
@property(nonatomic) unsigned long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(copy, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(copy, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) CDUnknownBlockType onLoadCompletionBlock; // @synthesize onLoadCompletionBlock=_onLoadCompletionBlock;
@property(copy, nonatomic) NSString *targetURL; // @synthesize targetURL=_targetURL;
- (id)description;
- (id)init;

@end

