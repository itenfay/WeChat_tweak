//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface WCFinderMegaVideoAttach : NSObject
{
    _Bool _isLocal;
    double _playPosition;
    double _showTime;
    unsigned long long _maxShowedPercent;
    unsigned long long _playTimes;
    UIImage *_capture;
    NSString *_draft;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *draft; // @synthesize draft=_draft;
@property(retain, nonatomic) UIImage *capture; // @synthesize capture=_capture;
@property(nonatomic) unsigned long long playTimes; // @synthesize playTimes=_playTimes;
@property(nonatomic) unsigned long long maxShowedPercent; // @synthesize maxShowedPercent=_maxShowedPercent;
@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) double playPosition; // @synthesize playPosition=_playPosition;

@end

