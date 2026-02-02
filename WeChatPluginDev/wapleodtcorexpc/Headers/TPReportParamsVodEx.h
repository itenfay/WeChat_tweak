//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPReportParamsVodEx : NSObject
{
    _Bool _multitrack;
    _Bool _vip;
    long long _freetype;
    long long _currentplay;
    long long _optimizedplay;
    long long _subtitles;
    long long _selsubtitles;
    long long _bizid;
    long long _clip;
    long long _hevclv;
    long long _status;
    long long _hitdownloaded;
}

@property(nonatomic) long long hitdownloaded; // @synthesize hitdownloaded=_hitdownloaded;
@property(nonatomic) _Bool vip; // @synthesize vip=_vip;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long hevclv; // @synthesize hevclv=_hevclv;
@property(nonatomic) long long clip; // @synthesize clip=_clip;
@property(nonatomic) long long bizid; // @synthesize bizid=_bizid;
@property(nonatomic) _Bool multitrack; // @synthesize multitrack=_multitrack;
@property(nonatomic) long long selsubtitles; // @synthesize selsubtitles=_selsubtitles;
@property(nonatomic) long long subtitles; // @synthesize subtitles=_subtitles;
@property(nonatomic) long long optimizedplay; // @synthesize optimizedplay=_optimizedplay;
@property(nonatomic) long long currentplay; // @synthesize currentplay=_currentplay;
@property(nonatomic) long long freetype; // @synthesize freetype=_freetype;
- (void)setErrorCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

