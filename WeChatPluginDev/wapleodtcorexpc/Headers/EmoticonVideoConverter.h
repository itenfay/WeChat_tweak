//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonVideoConvertConfig, EmoticonVideoInput;
@protocol OS_dispatch_queue;

@interface EmoticonVideoConverter : NSObject
{
    _Bool _active;
    NSObject<OS_dispatch_queue> *_processQueue;
    EmoticonVideoConvertConfig *_config;
    CDUnknownBlockType _completeBlock;
    EmoticonVideoInput *_videoInput;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonVideoInput *videoInput; // @synthesize videoInput=_videoInput;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) EmoticonVideoConvertConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue; // @synthesize processQueue=_processQueue;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (struct CGSize)getScaledSizeFor:(struct CGSize)arg1;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)compressWithImages:(id)arg1;
- (void)frameProcess;
- (_Bool)startConvert;
- (_Bool)convertWithConfig:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isActive;
- (id)init;
- (id)initWithQueue:(id)arg1;

@end

