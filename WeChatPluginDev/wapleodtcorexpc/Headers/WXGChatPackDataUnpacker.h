//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, WXGChatPackDataUnpackerDelegate;

@interface WXGChatPackDataUnpacker : NSObject
{
    _Bool _bDataIsZip;
    _Bool _bUnpacking;
    id <WXGChatPackDataUnpackerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_unpackQueue;
    NSString *_unpackDestination;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *unpackDestination; // @synthesize unpackDestination=_unpackDestination;
@property _Bool bUnpacking; // @synthesize bUnpacking=_bUnpacking;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *unpackQueue; // @synthesize unpackQueue=_unpackQueue;
@property(nonatomic) _Bool bDataIsZip; // @synthesize bDataIsZip=_bDataIsZip;
@property(nonatomic) __weak id <WXGChatPackDataUnpackerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)p_importMsgFromFolder:(id)arg1;
- (void)startUnpackData:(id)arg1;
- (void)stopUnpack;
- (void)mainThreadSyncProgress:(float)arg1;
- (void)mainThreadCallDelegate:(_Bool)arg1;
- (id)init;

@end

