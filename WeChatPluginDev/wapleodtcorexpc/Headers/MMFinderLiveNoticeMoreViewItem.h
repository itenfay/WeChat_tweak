//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMFinderLiveNoticeMoreViewItemDelegate;

@interface MMFinderLiveNoticeMoreViewItem : NSObject
{
    _Bool _hasMore;
    _Bool _isLoading;
    id <MMFinderLiveNoticeMoreViewItemDelegate> _delegate;
    NSString *_tips;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) __weak id <MMFinderLiveNoticeMoreViewItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didUpdate;
@property(readonly, nonatomic) Class cellClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

