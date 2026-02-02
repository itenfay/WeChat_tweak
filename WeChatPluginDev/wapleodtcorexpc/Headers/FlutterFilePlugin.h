//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FlutterFilePlugin : NSObject
{
}

- (id)getStreamProfilerDirectoryRelease:(_Bool)arg1 error:(id *)arg2;
- (id)getGeneralCacheDirectoryWithError:(id *)arg1;
- (id)getRealPathPath:(id)arg1 error:(id *)arg2;
- (id)getDefaultImageCacheDirectoryWithError:(id *)arg1;
- (void)createFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createDirectoryPath:(id)arg1 recursive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

