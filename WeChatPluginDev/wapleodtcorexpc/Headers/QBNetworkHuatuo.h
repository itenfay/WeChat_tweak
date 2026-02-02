//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface QBNetworkHuatuo : NSObject
{
    NSArray *_urlStringArray;
    NSMutableArray *_QBSpeedItemArray;
    unsigned long long _totalCount;
    unsigned long long _finishedCount;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)finishRecord;
- (void)_start;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

