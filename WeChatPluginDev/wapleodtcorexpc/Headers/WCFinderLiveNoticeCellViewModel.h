//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeInfo, NSString;
@protocol WCFinderLiveNoticeCellViewModelDelegate;

@interface WCFinderLiveNoticeCellViewModel : NSObject
{
    _Bool _shouldShowNoticeInfo;
    _Bool _hasShowFlag;
    FinderLiveNoticeInfo *_noticeInfo;
    NSString *_noticeTitle;
    NSString *_username;
    id <WCFinderLiveNoticeCellViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasShowFlag; // @synthesize hasShowFlag=_hasShowFlag;
@property(nonatomic) __weak id <WCFinderLiveNoticeCellViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool shouldShowNoticeInfo; // @synthesize shouldShowNoticeInfo=_shouldShowNoticeInfo;
@property(retain, nonatomic) NSString *noticeTitle; // @synthesize noticeTitle=_noticeTitle;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
- (_Bool)isEqual:(id)arg1;
- (void)onFinderContactLiveUpdateWithNoticeInfo:(id)arg1 noticeList:(id)arg2 commentScene:(int)arg3;
- (_Bool)isNoticeInfoStateChange:(id)arg1;
- (void)onLiveNoticeReserveStateChanged:(id)arg1 info:(id)arg2 error:(id)arg3;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(_Bool)arg2 noticeId:(id)arg3;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 hasPurchaseStateChanged:(_Bool)arg2;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)updateLiveNoticeInfo:(id)arg1;
@property(readonly, nonatomic) unsigned long long reserveState;
- (id)copy;
- (id)initWithFinderUsername:(id)arg1 liveNoticeInfo:(id)arg2 enableUsernameExtension:(_Bool)arg3;
- (id)initWithFinderUsername:(id)arg1 liveNoticeInfo:(id)arg2;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

