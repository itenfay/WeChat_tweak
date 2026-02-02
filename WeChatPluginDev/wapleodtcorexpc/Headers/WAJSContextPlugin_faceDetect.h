//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, WeVisFace;
@protocol OS_dispatch_queue;

@interface WAJSContextPlugin_faceDetect
{
    NSMutableDictionary *_faceRect;
    NSObject<OS_dispatch_queue> *_queue;
    WeVisFace *_visFace;
}

- (void).cxx_destruct;
@property(retain) WeVisFace *visFace; // @synthesize visFace=_visFace;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *faceRect; // @synthesize faceRect=_faceRect;
- (void)initQueue;
- (int)releaseDetect;
- (id)detectImage:(WeImage_f6985655)arg1 withPara:(id)arg2;
- (int)initDetect;
- (int)errorCodeGetBy:(int)arg1;

@end

