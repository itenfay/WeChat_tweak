//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJAudioExtractor : NSObject
{
    _Bool _isCanceled;
}

@property _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
- (void)extractAudioDataImplWithFilePath:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)extractAudioDataWithFilePath:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end

