//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, WXGRoamImportQueueDelegate;

@interface WXGRoamImportQueue : NSObject
{
    id <WXGRoamImportQueueDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_importQueue;
    NSString *_destinationFolder;
}

+ (void)importInDestionation:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *destinationFolder; // @synthesize destinationFolder=_destinationFolder;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *importQueue; // @synthesize importQueue=_importQueue;
@property(nonatomic) __weak id <WXGRoamImportQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)importOneDir:(id)arg1 taskId:(unsigned long long)arg2;
- (void)markImportFinish:(unsigned long long)arg1;
- (void)importAll;
- (id)init;

@end

