//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAMediaCastingUpnpCommandService : NSObject
{
}

+ (double)toTimeInterval:(id)arg1;
+ (void)logErrorIfNeeded:(id)arg1 prefix:(id)arg2;
+ (void)getTransportInfoWithDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getMediaInfoWithDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getPositionInfoWithDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getVolumeWithDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)seekWithDevice:(id)arg1 position:(double)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)setVolumeWithDevice:(id)arg1 volume:(double)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)pauseWithDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)stopWithDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)playWithDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)playWithDevice:(id)arg1 startPosition:(double)arg2 uri:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

