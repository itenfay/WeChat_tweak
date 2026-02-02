//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLbsAdvertismentInfo : NSObject
{
    _Bool _canBeClose;
    NSString *_adId;
    NSString *_title;
    NSString *_desc;
    NSString *_iconUrl;
    long long _jumpType;
    NSString *_jumpTarget;
    long long _position;
    long long _showTimes;
    long long _closeTimes;
}

- (void).cxx_destruct;
@property(nonatomic) long long closeTimes; // @synthesize closeTimes=_closeTimes;
@property(nonatomic) long long showTimes; // @synthesize showTimes=_showTimes;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *jumpTarget; // @synthesize jumpTarget=_jumpTarget;
@property(nonatomic) long long jumpType; // @synthesize jumpType=_jumpType;
@property(nonatomic) _Bool canBeClose; // @synthesize canBeClose=_canBeClose;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *adId; // @synthesize adId=_adId;
- (void)updateCloseState;
- (id)initWithXML:(id)arg1;

@end

