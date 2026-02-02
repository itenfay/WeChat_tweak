//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMNoticeItem : NSObject
{
    int _isShowNotice;
    NSString *_wording;
    NSString *_leftIcon;
    NSString *_jumpUrl;
    NSString *_noticeId;
}

+ (id)NoticeItemWithIsShowNotice:(int)arg1 wording:(id)arg2 leftIcon:(id)arg3 jumpUrl:(id)arg4 noticeId:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(readonly, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(readonly, nonatomic) NSString *leftIcon; // @synthesize leftIcon=_leftIcon;
@property(readonly, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(readonly, nonatomic) int isShowNotice; // @synthesize isShowNotice=_isShowNotice;
- (id)description;
- (id)initWithIsShowNotice:(int)arg1 wording:(id)arg2 leftIcon:(id)arg3 jumpUrl:(id)arg4 noticeId:(id)arg5;

@end

