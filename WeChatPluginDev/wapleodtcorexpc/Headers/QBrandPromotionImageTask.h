//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSURLSessionDataTask;

@interface QBrandPromotionImageTask : NSObject
{
    NSURLSessionDataTask *_task;
    NSMutableSet *_imageOwners;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *imageOwners; // @synthesize imageOwners=_imageOwners;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
- (void)removeImageOwner:(id)arg1;
- (void)addImageOwner:(id)arg1;
- (id)init;

@end

