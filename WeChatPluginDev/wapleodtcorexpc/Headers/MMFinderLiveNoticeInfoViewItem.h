//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeInfo, NSString;
@protocol MMFinderLiveNoticeInfoViewItemDelegate;

@interface MMFinderLiveNoticeInfoViewItem : NSObject
{
    _Bool _isAuthor;
    id <MMFinderLiveNoticeInfoViewItemDelegate> _delegate;
    FinderLiveNoticeInfo *_noticeInfo;
    NSString *_finderUserName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(readonly, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(readonly, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(nonatomic) __weak id <MMFinderLiveNoticeInfoViewItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(_Bool)arg2 noticeId:(id)arg3;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 hasPurchaseStateChanged:(_Bool)arg2;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)didUpdate;
- (id)initWithNoticeInfo:(id)arg1 isAuthor:(_Bool)arg2 finderUserName:(id)arg3;
@property(readonly, nonatomic) Class cellClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

