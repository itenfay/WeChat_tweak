//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveNoticeInfo;

@interface MMFinderLiveNoticeAnchorPromoteInfo
{
    FinderLiveNoticeInfo *_noticeInfo;
}

+ (id)createNoticeAnchorPromoteInfoFrom:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
- (id)promoteKey;

@end

