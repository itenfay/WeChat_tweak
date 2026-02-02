//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface VoipSnsDataSource : NSObject
{
    _Bool _noMoreData;
    unsigned int _timeLimit;
    NSString *_username;
    CDUnknownBlockType _resolver;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType resolver; // @synthesize resolver=_resolver;
@property(nonatomic) _Bool noMoreData; // @synthesize noMoreData=_noMoreData;
@property(nonatomic) unsigned int timeLimit; // @synthesize timeLimit=_timeLimit;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void)dealloc;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (id)getLatestSnsInfo:(id)arg1 timeLimit:(unsigned long long)arg2;
- (void)handleData:(id)arg1;
- (void)fetchMoreData;
- (void)fetchData;
- (void)unregisterExtension;
- (void)registerExtension;

@end

