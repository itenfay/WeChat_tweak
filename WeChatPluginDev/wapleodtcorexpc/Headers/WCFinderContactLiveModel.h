//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveInfo, FinderLiveNoticeInfo, FinderLiveNoticeListInfo, WCFinderDataItem;

@interface WCFinderContactLiveModel : NSObject
{
    unsigned long long _liveStatus;
    FinderLiveNoticeInfo *_noticeInfo;
    FinderLiveNoticeListInfo *_noticeList;
    FinderLiveInfo *_liveInfo;
    WCFinderDataItem *_dataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) FinderLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(retain, nonatomic) FinderLiveNoticeListInfo *noticeList; // @synthesize noticeList=_noticeList;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(nonatomic) unsigned long long liveStatus; // @synthesize liveStatus=_liveStatus;

@end

