//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FavClickStreamData : NSObject
{
    _Bool _bResume;
    unsigned int _enterPageTimeInS;
    unsigned int _enterPageTime;
    NSString *_sessionId;
    NSString *_className;
    long long _stayTime;
    long long _enterPageTimeInMs;
}

- (void).cxx_destruct;
@property(nonatomic) long long enterPageTimeInMs; // @synthesize enterPageTimeInMs=_enterPageTimeInMs;
@property(nonatomic) long long stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) unsigned int enterPageTime; // @synthesize enterPageTime=_enterPageTime;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
@property(nonatomic) _Bool bResume; // @synthesize bResume=_bResume;
@property(nonatomic) unsigned int enterPageTimeInS; // @synthesize enterPageTimeInS=_enterPageTimeInS;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)jsonString;
- (void)dealloc;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)onViewControllerDidDisappear;
- (void)onViewControllerDidAppear:(id)arg1;
- (id)init;

@end

