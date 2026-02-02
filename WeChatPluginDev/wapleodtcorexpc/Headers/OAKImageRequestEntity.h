//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OAKImageRequestEntity : NSObject
{
    _Bool _isRequestLivePhotoVideo;
    unsigned int _taskID;
    int _phRequestID;
    CDUnknownBlockType _imageDataCompletionHandler;
    CDUnknownBlockType _assetCompletionHandler;
    CDUnknownBlockType _livePhotoCompletionHandler;
}

+ (id)entityWithTaskID:(unsigned int)arg1 livePhotoCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)entityWithTaskID:(unsigned int)arg1 assetCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)entityWithTaskID:(unsigned int)arg1 imageDataCompletionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType livePhotoCompletionHandler; // @synthesize livePhotoCompletionHandler=_livePhotoCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType assetCompletionHandler; // @synthesize assetCompletionHandler=_assetCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType imageDataCompletionHandler; // @synthesize imageDataCompletionHandler=_imageDataCompletionHandler;
@property(nonatomic) _Bool isRequestLivePhotoVideo; // @synthesize isRequestLivePhotoVideo=_isRequestLivePhotoVideo;
@property(nonatomic) int phRequestID; // @synthesize phRequestID=_phRequestID;
@property(nonatomic) unsigned int taskID; // @synthesize taskID=_taskID;

@end

