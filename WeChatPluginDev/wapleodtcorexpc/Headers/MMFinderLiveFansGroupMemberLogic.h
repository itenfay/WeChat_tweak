//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveFansGroupMemberSectionInfo, MMFinderLiveTask, MMFinderLiveTaskId, NSData;

@interface MMFinderLiveFansGroupMemberLogic : NSObject
{
    _Bool _isFetching;
    unsigned int _continueFlag;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveFansGroupMemberSectionInfo *_memberSectionInfo;
    NSData *_lastBuffer;
    CDUnknownBlockType _completion;
    unsigned long long _lastReqFilterType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastReqFilterType; // @synthesize lastReqFilterType=_lastReqFilterType;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(nonatomic) unsigned int continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) MMFinderLiveFansGroupMemberSectionInfo *memberSectionInfo; // @synthesize memberSectionInfo=_memberSectionInfo;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) _Bool isSelfAnchor;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (_Bool)fetchFansGroupMemberList:(_Bool)arg1 filterType:(unsigned long long)arg2 sortType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)fetchFansGroupMemberList:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithTaskId:(id)arg1;

@end

