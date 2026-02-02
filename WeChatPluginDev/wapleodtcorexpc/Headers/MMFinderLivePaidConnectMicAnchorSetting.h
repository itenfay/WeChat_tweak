//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MMFinderLivePaidConnectMicAnchorSetting : NSObject
{
    _Bool _bidEnabled;
    _Bool _focusModeOn;
    unsigned int _bidGap;
    unsigned long long _connectDuration;
    unsigned long long _disconnectMethod;
    unsigned long long _connectPrice;
    unsigned long long _bidPrice;
    NSString *_focusUserId;
    NSDictionary *_focusUserIndices;
    unsigned long long _settingSeq;
}

+ (id)fromPurchaseMicSetting:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long settingSeq; // @synthesize settingSeq=_settingSeq;
@property(nonatomic) unsigned int bidGap; // @synthesize bidGap=_bidGap;
@property(retain, nonatomic) NSDictionary *focusUserIndices; // @synthesize focusUserIndices=_focusUserIndices;
@property(retain, nonatomic) NSString *focusUserId; // @synthesize focusUserId=_focusUserId;
@property(nonatomic) _Bool focusModeOn; // @synthesize focusModeOn=_focusModeOn;
@property(nonatomic) unsigned long long bidPrice; // @synthesize bidPrice=_bidPrice;
@property(nonatomic) _Bool bidEnabled; // @synthesize bidEnabled=_bidEnabled;
@property(nonatomic) unsigned long long connectPrice; // @synthesize connectPrice=_connectPrice;
@property(nonatomic) unsigned long long disconnectMethod; // @synthesize disconnectMethod=_disconnectMethod;
@property(nonatomic) unsigned long long connectDuration; // @synthesize connectDuration=_connectDuration;
- (id)settingDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)init;
- (id)toPurchaseMicSetting;

@end

