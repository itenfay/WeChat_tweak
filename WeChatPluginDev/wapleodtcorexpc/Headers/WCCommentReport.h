//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCCommentReport : NSObject
{
    unsigned char _mScene;
    unsigned long long _endTimeMs;
    unsigned long long _showTimeMs;
    NSString *_cacheCommentText;
}

+ (void)reportDeleteComment:(id)arg1 with:(id)arg2 confirm:(_Bool)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cacheCommentText; // @synthesize cacheCommentText=_cacheCommentText;
@property(nonatomic) unsigned long long showTimeMs; // @synthesize showTimeMs=_showTimeMs;
@property(nonatomic) unsigned long long endTimeMs; // @synthesize endTimeMs=_endTimeMs;
@property(nonatomic) unsigned char mScene; // @synthesize mScene=_mScene;
- (void)reportCancelSendText:(id)arg1 with:(id)arg2 andRefUsr:(id)arg3;
- (void)reportSendText:(id)arg1 with:(id)arg2 andRefUsr:(id)arg3;
- (void)reportCancelSendEmotion:(id)arg1 with:(id)arg2 andRefUsr:(id)arg3;
- (void)reportSendEmotion:(id)arg1 with:(id)arg2 andRefUsr:(id)arg3;
- (id)initWith:(unsigned char)arg1;

@end

