//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJVideoFrameExtractor : NSObject
{
    _Bool _isCanceled;
}

@property _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
- (void)cancel;
- (void)extractVideoFrameWithAVAsset:(id)arg1 phLocalIdentifier:(id)arg2 timestamps:(id)arg3 videoFrameHandler:(CDUnknownBlockType)arg4;
- (void)extractVideoFrameWithPHLocalIdentifier:(id)arg1 timestamps:(id)arg2 videoFrameHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

