//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface JITRuntimeNativeBufferMgr : NSObject
{
    unsigned long long _bufferIDSequence;
    NSMutableDictionary *_localBufferDic;
    NSMutableDictionary *_remoteBufferDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *remoteBufferDic; // @synthesize remoteBufferDic=_remoteBufferDic;
@property(retain, nonatomic) NSMutableDictionary *localBufferDic; // @synthesize localBufferDic=_localBufferDic;
- (id)genBufferID;
- (void)getLocalBufferFromXHR:(id)arg1 baseUrl:(id)arg2;
- (void)removeRemoteNativeBuffer:(id)arg1;
- (id)getRemoteNativeBuffer:(id)arg1;
- (void)addRemoteNativeBuffer:(id)arg1 buffer:(id)arg2 allocType:(long long)arg3;
- (id)getLocalNativeBuffer:(id)arg1;
- (id)popLocalNativeBuffer:(id)arg1;
- (id)createLocalNativeBuffer:(id)arg1;
- (id)init;

@end

