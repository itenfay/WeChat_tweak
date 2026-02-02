//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeInfo, FinderLiveNoticeListInfo, NSString;

@interface WCFinderLiveNoticCardParams : NSObject
{
    _Bool _isAuthor;
    NSString *_anchorUsername;
    FinderLiveNoticeInfo *_noticeInfo;
    FinderLiveNoticeListInfo *_noticeList;
    unsigned long long _noticeOpenScene;
}

+ (id)fromNoticeList:(id)arg1 isAuthor:(_Bool)arg2 anchorUsername:(id)arg3;
+ (id)paramsWithIsAuthor:(_Bool)arg1 noticeInfo:(id)arg2 noticeList:(id)arg3 anchorUsername:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long noticeOpenScene; // @synthesize noticeOpenScene=_noticeOpenScene;
@property(retain, nonatomic) FinderLiveNoticeListInfo *noticeList; // @synthesize noticeList=_noticeList;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(retain, nonatomic) NSString *anchorUsername; // @synthesize anchorUsername=_anchorUsername;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;

@end

