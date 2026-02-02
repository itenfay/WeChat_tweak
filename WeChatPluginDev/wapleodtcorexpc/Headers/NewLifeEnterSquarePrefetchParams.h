//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderObject, NSString, NewLifeEnterSquareJumpDetailInfo, NewLifePostJumpFlowParams;

@interface NewLifeEnterSquarePrefetchParams : NSObject
{
    unsigned int _enterIndex;
    long long _prefetchType;
    NSString *_prefetchId;
    long long _enterScene;
    NewLifeEnterSquareJumpDetailInfo *_jumpDetailInfo;
    NewLifePostJumpFlowParams *_postJumpReportParams;
    long long _contextIdEntryScene;
    FinderObject *_reddotFinderObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderObject *reddotFinderObject; // @synthesize reddotFinderObject=_reddotFinderObject;
@property(nonatomic) long long contextIdEntryScene; // @synthesize contextIdEntryScene=_contextIdEntryScene;
@property(retain, nonatomic) NewLifePostJumpFlowParams *postJumpReportParams; // @synthesize postJumpReportParams=_postJumpReportParams;
@property(retain, nonatomic) NewLifeEnterSquareJumpDetailInfo *jumpDetailInfo; // @synthesize jumpDetailInfo=_jumpDetailInfo;
@property(nonatomic) unsigned int enterIndex; // @synthesize enterIndex=_enterIndex;
@property(nonatomic) long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) NSString *prefetchId; // @synthesize prefetchId=_prefetchId;
@property(nonatomic) long long prefetchType; // @synthesize prefetchType=_prefetchType;
- (id)init;

@end

