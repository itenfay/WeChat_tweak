//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GetTransferWordingResponse : NSObject
{
    _Bool _delayConfirmDescUrlflag;
    _Bool _delayConfirmSwitchFlag;
    NSString *_delayConfirmWording;
    NSString *_delayConfirmSwitchWording;
    NSString *_delayHalfPageRemindWording;
    NSString *_delayConfirmSwitchRemindWording;
    NSString *_delayConfirmDescUrl;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool delayConfirmSwitchFlag; // @synthesize delayConfirmSwitchFlag=_delayConfirmSwitchFlag;
@property(copy, nonatomic) NSString *delayConfirmDescUrl; // @synthesize delayConfirmDescUrl=_delayConfirmDescUrl;
@property(nonatomic) _Bool delayConfirmDescUrlflag; // @synthesize delayConfirmDescUrlflag=_delayConfirmDescUrlflag;
@property(copy, nonatomic) NSString *delayConfirmSwitchRemindWording; // @synthesize delayConfirmSwitchRemindWording=_delayConfirmSwitchRemindWording;
@property(copy, nonatomic) NSString *delayHalfPageRemindWording; // @synthesize delayHalfPageRemindWording=_delayHalfPageRemindWording;
@property(copy, nonatomic) NSString *delayConfirmSwitchWording; // @synthesize delayConfirmSwitchWording=_delayConfirmSwitchWording;
@property(copy, nonatomic) NSString *delayConfirmWording; // @synthesize delayConfirmWording=_delayConfirmWording;

@end

