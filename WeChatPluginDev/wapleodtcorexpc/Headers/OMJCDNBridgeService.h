//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OMJCDNBridgeServiceDelegate;

@interface OMJCDNBridgeService : NSObject
{
    id <OMJCDNBridgeServiceDelegate> _delegate;
    SharedPtr_35b112bd _backingService;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_35b112bd backingService; // @synthesize backingService=_backingService;
@property(nonatomic) __weak id <OMJCDNBridgeServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyUploadFailureWithTaskKey:(id)arg1 error:(id)arg2;
- (void)notifyUploadSuccessWithResult:(id)arg1;
- (void)notifyDownloadFailureWithTaskKey:(id)arg1 error:(id)arg2;
- (void)notifyDownloadSuccessWithTaskKey:(id)arg1;
- (void)setupCallback;
- (id)init;

@end

