//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeInfo, FinderLiveNoticeListInfo;

@interface WCFinderMemberLiveNoticeModel : NSObject
{
    FinderLiveNoticeInfo *_noticeInfo;
    FinderLiveNoticeListInfo *_noticeList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveNoticeListInfo *noticeList; // @synthesize noticeList=_noticeList;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;

@end

