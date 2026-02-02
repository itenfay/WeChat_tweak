//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveBoxId, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveCommentDataMgr;

@interface MMFinderLiveCommentDataAppendLogic : NSObject
{
    MMFinderLiveTaskId *_taskId;
    FinderLiveBoxId *_boxIdObj;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveBoxId *boxIdObj; // @synthesize boxIdObj=_boxIdObj;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)appendCommentContentFromMySelf:(id)arg1 toUser:(id)arg2 postType:(unsigned long long)arg3 poiAddrSubStr:(id)arg4 callback:(CDUnknownBlockType)arg5 extra:(id)arg6;
- (id)appendCommentContentFromMySelf:(id)arg1 toUser:(id)arg2 postType:(unsigned long long)arg3 callback:(CDUnknownBlockType)arg4 extra:(id)arg5;
- (id)appendCommentContentFromMySelf:(id)arg1 toDataItem:(id)arg2 callback:(CDUnknownBlockType)arg3 extra:(id)arg4;
@property(readonly, nonatomic) MMLiveCommentDataMgr *commentDataMgr;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (id)initWithTaskId:(id)arg1 boxId:(id)arg2;

@end

