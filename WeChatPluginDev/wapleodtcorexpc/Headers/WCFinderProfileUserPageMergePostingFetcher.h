//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFinderProfileUserPageMergePostingFetcher : NSObject
{
    NSMutableArray *_postedDataItems;
    NSString *_username;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSMutableArray *postedDataItems; // @synthesize postedDataItems=_postedDataItems;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (id)userpageWithParams:(id)arg1 successful:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)initWithUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

