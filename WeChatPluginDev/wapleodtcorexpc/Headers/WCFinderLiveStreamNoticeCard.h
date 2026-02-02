//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeInfo, WCFinderContact;

@interface WCFinderLiveStreamNoticeCard : NSObject
{
    FinderLiveNoticeInfo *_noticeInfo;
    WCFinderContact *_contact;
}

+ (id)finderLiveStreamNoticeCardFrom:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
- (id)toFinderLiveStreamNoticeCard;

@end

