//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSMutableOrderedSet, NSString;

@interface MMFinderLiveConcertCommentMemberHeaderViewModel : NSObject
{
    MMFinderLiveTaskId *_finderTaskId;
    NSMutableOrderedSet *_headerUrlSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableOrderedSet *headerUrlSet; // @synthesize headerUrlSet=_headerUrlSet;
@property(retain, nonatomic) MMFinderLiveTaskId *finderTaskId; // @synthesize finderTaskId=_finderTaskId;
- (unsigned long long)getHeadImgCount;
- (id)getNextHeadImageUrl;
- (id)filterJoinLiveCommentItems:(id)arg1;
- (void)onNewNotifyCommentUpdate:(id)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

