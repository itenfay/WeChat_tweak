//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCStoryDataItem, WCStoryPreviewReportObj;
@protocol WCStoryAggregateCommentBubbleViewModelDelegate;

@interface WCStoryAggregateCommentBubbleViewModel : NSObject
{
    id <WCStoryAggregateCommentBubbleViewModelDelegate> _delegate;
    NSString *_tid;
    WCStoryDataItem *_dataItem;
    NSMutableArray *_commentCellHeights;
    unsigned long long _listReadState;
    WCStoryPreviewReportObj *_reportObj;
}

+ (id)viewModelWithTid:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCStoryPreviewReportObj *reportObj; // @synthesize reportObj=_reportObj;
@property(nonatomic) unsigned long long listReadState; // @synthesize listReadState=_listReadState;
@property(retain, nonatomic) NSMutableArray *commentCellHeights; // @synthesize commentCellHeights=_commentCellHeights;
@property(retain, nonatomic) WCStoryDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) __weak id <WCStoryAggregateCommentBubbleViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setPreviewReportObj:(id)arg1;
- (void)onRelatedCommentAdd:(id)arg1;
- (void)onDataItemHasUpdate:(id)arg1;
- (id)genCellHeightsWithDataItem:(id)arg1;
- (void)exposeReportPageType:(unsigned long long)arg1;
- (void)deleteComment:(id)arg1 successFul:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)commitWithText:(id)arg1 forReplyComment:(id)arg2;
- (_Bool)isDataItemExpiredOrInvisible;
- (_Bool)hasUnreadVisitor;
- (_Bool)hasUnreadComment;
- (id)cellHeights;
- (id)comments;
- (id)visitors;
- (_Bool)isCommentListReaded;
- (void)makeCommentListUnReaded;
- (void)makeCommentListAllReaded;
- (void)markCommentListHasReaded;
- (_Bool)isVisitListReaded;
- (void)makeVisitListUnReaded;
- (void)makeVisitListAllReaded;
- (void)markVisitListHasReaded;
- (id)initWithTid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

