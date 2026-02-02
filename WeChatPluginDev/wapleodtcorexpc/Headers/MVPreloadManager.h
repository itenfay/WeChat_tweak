//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface MVPreloadManager : NSObject
{
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)stopAll;
- (void)stopPreloadWithItem:(id)arg1;
- (id)buildImageRequestWithItem:(id)arg1;
- (id)buildRequestWithItem:(id)arg1;
- (void)startPreloadWithItem:(id)arg1;

@end

