//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRedEnvTextStateInfo : NSObject
{
    _Bool _isExclusive;
    _Bool _enableSetState;
    NSString *_senderUsername;
    NSString *_receiverUsername;
    long long _amount;
    NSString *_wishing;
    NSString *_pagName;
    NSString *_videoUrl;
    NSString *_videoThumbUrl;
    long long _videoWidth;
    long long _videoHeight;
    NSString *_verifyInfo;
    NSString *_sourceName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) NSString *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
@property(nonatomic) long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) long long videoWidth; // @synthesize videoWidth=_videoWidth;
@property(retain, nonatomic) NSString *videoThumbUrl; // @synthesize videoThumbUrl=_videoThumbUrl;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) _Bool enableSetState; // @synthesize enableSetState=_enableSetState;
@property(retain, nonatomic) NSString *pagName; // @synthesize pagName=_pagName;
@property(retain, nonatomic) NSString *wishing; // @synthesize wishing=_wishing;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
@property(nonatomic) _Bool isExclusive; // @synthesize isExclusive=_isExclusive;
@property(retain, nonatomic) NSString *receiverUsername; // @synthesize receiverUsername=_receiverUsername;
@property(retain, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;

@end

