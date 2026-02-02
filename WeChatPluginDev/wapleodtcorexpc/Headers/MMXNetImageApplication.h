//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSThread;

@interface MMXNetImageApplication
{
    NSThread *_thread;
    shared_ptr_772c274f _model;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(nonatomic) shared_ptr_772c274f model; // @synthesize model=_model;
- (id)modelPath;
- (id)modelFiles;
- (id)getThreadName;
- (void)requestFeatureWithImage:(id)arg1;
- (id)featureWithImage:(id)arg1;
- (void)addThreadToRunLoop;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

