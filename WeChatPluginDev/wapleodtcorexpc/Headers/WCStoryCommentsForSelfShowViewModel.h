//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCStoryDataItem;

@interface WCStoryCommentsForSelfShowViewModel : NSObject
{
    _Bool _hadBubble;
    NSMutableArray *_comments;
    NSString *_tid;
    NSMutableArray *_cellFrameArray;
    WCStoryDataItem *_dataItem;
    CDUnknownBlockType _configBlock;
    CDUnknownBlockType _updateBlock;
}

+ (id)viewModelWithDataItemId:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) CDUnknownBlockType configBlock; // @synthesize configBlock=_configBlock;
@property(nonatomic) _Bool hadBubble; // @synthesize hadBubble=_hadBubble;
@property(retain, nonatomic) WCStoryDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) NSMutableArray *cellFrameArray; // @synthesize cellFrameArray=_cellFrameArray;
@property(readonly, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSMutableArray *comments; // @synthesize comments=_comments;
- (void)onDataItemHasUpdate:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)isVideoPostBySelf;
- (unsigned long long)visitorCount;
- (double)tableViewHeightFromTopToRow:(unsigned long long)arg1;
- (void)reload;
- (void)commitWithText:(id)arg1 forReplyComment:(id)arg2 reportObj:(id)arg3;
- (void)commitBubbleWithReportObj:(id)arg1;
- (void)deleteComment:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)indexOfComment:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (_Bool)checkHadBubble:(id)arg1;
- (id)cellFrameArrayWithDataItem:(id)arg1;
- (id)commentsWithDataItem:(id)arg1;
- (id)init;
- (id)initWithDataItemId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

