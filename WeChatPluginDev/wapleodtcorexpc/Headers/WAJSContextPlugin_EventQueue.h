//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WAJSContextPlugin_EventQueue
{
    NSMutableArray *_arrViewDidAppearEvent;
    NSMutableArray *_eventHandlersWhenIndexDataLoaded;
    NSMutableArray *_arrNavigationViewDidAppearEvent;
}

- (void).cxx_destruct;
- (id)anyThread_popAllEventWhenIndexDataLoadedQueue;
- (void)anythread_addEventWhenIndexDataLoadedQueue:(CDUnknownBlockType)arg1;
- (id)anyThread_popAllEventInNavigationViewDidAppearQueue;
- (void)anyThread_addEventToNavigationViewDidAppearQueue:(CDUnknownBlockType)arg1;
- (id)anyThread_popAllEventInViewDidAppearQueue;
- (void)anyThread_addEventToViewDidAppearQueue:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (void)mainthread_handleEventWhenIndexDataLoadedQueue;
- (void)mainthread_addEventWhenIndexDataLoadedQueue:(CDUnknownBlockType)arg1;
- (void)mainthread_handleEventInNavigationViewDidAppearQueue;
- (void)mainthread_addEventToNavigationViewDidAppearQueue:(CDUnknownBlockType)arg1;
- (void)mainthread_handleEventInViewDidAppearQueue;
- (void)mainthread_addEventToViewDidAppearQueue:(CDUnknownBlockType)arg1;

@end

