//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray;
@protocol WCGetScheduleCgiDelegate;

@interface WCGetScheduleCgi
{
    _Bool _firstPageOnly;
    _Bool _isRunning;
    _Bool _isCancel;
    id <WCGetScheduleCgiDelegate> _delegate;
    NSData *_pageContext;
    NSMutableArray *_scheduleItems;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSMutableArray *scheduleItems; // @synthesize scheduleItems=_scheduleItems;
@property(nonatomic) _Bool firstPageOnly; // @synthesize firstPageOnly=_firstPageOnly;
@property(retain, nonatomic) NSData *pageContext; // @synthesize pageContext=_pageContext;
@property(nonatomic) __weak id <WCGetScheduleCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)requestScheduleItemsWithPage:(id)arg1;
- (void)requestAllScheduleItemsWithPageContext:(id)arg1;
- (void)requestAllScheduleItems;
- (void)requestFirstPageItems;
- (id)init;

@end

