//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface WCFinderSyncKeyBufHandler : NSObject
{
    NSData *_keyBuf;
    CDUnknownBlockType _bufferSaveBlock;
    CDUnknownBlockType _bufferLoadBlock;
}

+ (id)handlerForLbsLifeSync;
+ (id)handlerForFinderSync;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType bufferLoadBlock; // @synthesize bufferLoadBlock=_bufferLoadBlock;
@property(copy, nonatomic) CDUnknownBlockType bufferSaveBlock; // @synthesize bufferSaveBlock=_bufferSaveBlock;
@property(retain, nonatomic) NSData *keyBuf; // @synthesize keyBuf=_keyBuf;
- (void)reinitMemoryKeyBuffer;
- (void)reinitKeyBuffer;
- (void)mergeKeyBuffer:(id)arg1;
- (id)getKeyBufferMD5;
- (id)getKeyBufferForPB;
- (id)getKeyBuffer;
- (id)initWithBufferSaver:(CDUnknownBlockType)arg1 bufferLoader:(CDUnknownBlockType)arg2;

@end

