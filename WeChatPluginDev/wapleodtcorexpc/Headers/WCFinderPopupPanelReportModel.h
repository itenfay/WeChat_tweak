//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderPopupPanelReportModel : NSObject
{
    int _scene;
    NSMutableDictionary *_commonReportDict;
    NSString *_fromFeedId;
    NSString *_fromFeedSessionBuffer;
    NSString *_fromFinderUsername;
    NSString *_noticeTitle;
    NSString *_noticeSubtitle;
    NSString *_noticeTips;
    NSString *_noticeTipsId;
    NSString *_noticeTipsUuid;
    NSString *_noticeFeedId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *noticeFeedId; // @synthesize noticeFeedId=_noticeFeedId;
@property(copy, nonatomic) NSString *noticeTipsUuid; // @synthesize noticeTipsUuid=_noticeTipsUuid;
@property(copy, nonatomic) NSString *noticeTipsId; // @synthesize noticeTipsId=_noticeTipsId;
@property(copy, nonatomic) NSString *noticeTips; // @synthesize noticeTips=_noticeTips;
@property(copy, nonatomic) NSString *noticeSubtitle; // @synthesize noticeSubtitle=_noticeSubtitle;
@property(copy, nonatomic) NSString *noticeTitle; // @synthesize noticeTitle=_noticeTitle;
@property(copy, nonatomic) NSString *fromFinderUsername; // @synthesize fromFinderUsername=_fromFinderUsername;
@property(copy, nonatomic) NSString *fromFeedSessionBuffer; // @synthesize fromFeedSessionBuffer=_fromFeedSessionBuffer;
@property(copy, nonatomic) NSString *fromFeedId; // @synthesize fromFeedId=_fromFeedId;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSMutableDictionary *commonReportDict; // @synthesize commonReportDict=_commonReportDict;
- (id)init;

@end

