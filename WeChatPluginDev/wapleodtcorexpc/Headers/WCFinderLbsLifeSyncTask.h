//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LbsLifeSyncRequest;

@interface WCFinderLbsLifeSyncTask : NSObject
{
    int _syncScene;
    LbsLifeSyncRequest *_request;
}

+ (id)taskWithRequest:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) LbsLifeSyncRequest *request; // @synthesize request=_request;
@property(nonatomic) int syncScene; // @synthesize syncScene=_syncScene;

@end

