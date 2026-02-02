//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMKRedirectUrl, NSString;

@interface MMKJumpRemindInfo : NSObject
{
    _Bool _isPopUpWindows;
    int _jumpType;
    NSString *_wording;
    NSString *_leftButtonWording;
    NSString *_rightButtonWording;
    MMKRedirectUrl *_url;
    NSString *_title;
}

+ (id)KJumpRemindInfoWithJumpType:(int)arg1 isPopUpWindows:(_Bool)arg2 wording:(id)arg3 leftButtonWording:(id)arg4 rightButtonWording:(id)arg5 url:(id)arg6 title:(id)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) MMKRedirectUrl *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *rightButtonWording; // @synthesize rightButtonWording=_rightButtonWording;
@property(readonly, nonatomic) NSString *leftButtonWording; // @synthesize leftButtonWording=_leftButtonWording;
@property(readonly, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(readonly, nonatomic) _Bool isPopUpWindows; // @synthesize isPopUpWindows=_isPopUpWindows;
@property(readonly, nonatomic) int jumpType; // @synthesize jumpType=_jumpType;
- (id)description;
- (id)initWithJumpType:(int)arg1 isPopUpWindows:(_Bool)arg2 wording:(id)arg3 leftButtonWording:(id)arg4 rightButtonWording:(id)arg5 url:(id)arg6 title:(id)arg7;

@end

