//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;

@interface MMFinderLiveSpeedTestNotifyModel : NSObject
{
    unsigned int _interval;
    unsigned int _reqsize;
    unsigned int _concurrentNum;
    NSMutableArray *_serverAddrList;
    NSData *_ctx;
}

+ (id)getServerAddrListWithNotify:(id)arg1;
+ (id)changeModelWithNotify:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int concurrentNum; // @synthesize concurrentNum=_concurrentNum;
@property(retain, nonatomic) NSData *ctx; // @synthesize ctx=_ctx;
@property(nonatomic) unsigned int reqsize; // @synthesize reqsize=_reqsize;
@property(nonatomic) unsigned int interval; // @synthesize interval=_interval;
@property(copy, nonatomic) NSMutableArray *serverAddrList; // @synthesize serverAddrList=_serverAddrList;

@end

