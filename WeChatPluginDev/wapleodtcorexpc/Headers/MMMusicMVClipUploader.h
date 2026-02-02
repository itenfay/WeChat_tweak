//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol MMMusicMVClipUploaderDelegate, OS_dispatch_queue;

@interface MMMusicMVClipUploader : NSObject
{
    NSMutableDictionary *_dictUploadingClip;
    id <MMMusicMVClipUploaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property __weak id <MMMusicMVClipUploaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)fillMoreVideoInformationFrom:(id)arg1 toFinderDataItem:(id)arg2;
- (void)uploadClipItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

