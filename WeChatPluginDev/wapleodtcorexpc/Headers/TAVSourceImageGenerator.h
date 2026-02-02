//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAssetImageGenerator, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TAVSourceImageGenerator : NSObject
{
    _Bool _generating;
    AVAssetImageGenerator *_imageGenerator;
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
    NSMutableDictionary *_imageCache;
    NSMutableArray *_requestedTimes;
    NSMutableArray *_handleList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool generating; // @synthesize generating=_generating;
@property(retain, nonatomic) NSMutableArray *handleList; // @synthesize handleList=_handleList;
@property(retain, nonatomic) NSMutableArray *requestedTimes; // @synthesize requestedTimes=_requestedTimes;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *thumbnailQueue; // @synthesize thumbnailQueue=_thumbnailQueue;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
- (id)validRequestTime:(id)arg1;
- (id)featchThumbnailAtTime:(CDStruct_1b6d18a9)arg1;
- (void)addRequestedTimes:(id)arg1;
- (void)generateThumbnailAtTimes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateThumbnailAtTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSource:(id)arg1 imageSize:(struct CGSize)arg2;

@end

