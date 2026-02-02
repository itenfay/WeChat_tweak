//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WAAppTask;
@protocol WAWebViewPageMgrDelegate;

@interface WAWebViewPageMgr
{
    id <WAWebViewPageMgrDelegate> _delegate;
    NSMutableArray *_pages;
    NSMutableArray *_removedPages;
    NSMutableArray *_stackPages;
    NSMutableArray *_releasePool;
    NSMutableArray *_dissociativePool;
    WAAppTask *_task;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WAAppTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSMutableArray *dissociativePool; // @synthesize dissociativePool=_dissociativePool;
@property(retain, nonatomic) NSMutableArray *releasePool; // @synthesize releasePool=_releasePool;
@property(retain, nonatomic) NSMutableArray *stackPages; // @synthesize stackPages=_stackPages;
@property(retain, nonatomic) NSMutableArray *removedPages; // @synthesize removedPages=_removedPages;
@property(retain, nonatomic) NSMutableArray *pages; // @synthesize pages=_pages;
@property(nonatomic) __weak id <WAWebViewPageMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)currentStackMode;
- (unsigned int)stackPagesCount;
- (unsigned int)healthyPagesCount;
- (unsigned int)manuallyTerminatedPagesCount;
- (unsigned int)contentProcessTerminatedPagesCount;
- (id)pagesStatusDescription;
- (void)popAllDissociativeWebview;
- (void)popAllWebViewPage;
- (void)removeAllPageDelegates;
- (id)allPages;
- (id)findPageBeforePage:(id)arg1;
- (_Bool)isTopMostPage:(id)arg1;
- (id)prevPageFrom:(id)arg1;
- (id)topMostPage;
- (id)lastPage;
- (id)firstPage;
- (unsigned long long)webviewInPagesIndex:(id)arg1;
- (unsigned long long)pagesCount;
- (void)checkReleasePool;
- (void)checkStack;
- (void)popDissociativeWebViewPage:(id)arg1;
- (void)pushDissociativeWebViewPage:(id)arg1;
- (void)pageStackDidUpdate;
- (void)popWebViewPage:(id)arg1;
- (void)pushWebViewPage:(id)arg1;
- (id)initWithTask:(id)arg1;

@end

