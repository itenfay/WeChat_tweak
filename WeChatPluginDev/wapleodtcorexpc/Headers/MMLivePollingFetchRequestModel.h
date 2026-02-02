//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSArray, NSData;

@interface MMLivePollingFetchRequestModel : NSObject
{
    MMFinderLiveTaskId *_liveTaskId;
    NSData *_liveCookies;
    NSData *_lastBuffer;
    NSArray *_reqBufferArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *reqBufferArray; // @synthesize reqBufferArray=_reqBufferArray;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2;

@end

