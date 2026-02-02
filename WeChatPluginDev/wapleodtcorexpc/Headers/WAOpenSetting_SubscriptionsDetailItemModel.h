//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAOpenSetting_SubscriptionsDetailItemModel : NSObject
{
    _Bool _isAudioTemplate;
    _Bool _acceptAudio;
    _Bool _isForceNotifyTemplate;
    _Bool _isAcceptWithForceNotify;
    unsigned int _templateType;
    unsigned int _tid;
    NSString *_title;
    NSString *_templateId;
    long long _status;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAcceptWithForceNotify; // @synthesize isAcceptWithForceNotify=_isAcceptWithForceNotify;
@property(nonatomic) _Bool isForceNotifyTemplate; // @synthesize isForceNotifyTemplate=_isForceNotifyTemplate;
@property(nonatomic) _Bool acceptAudio; // @synthesize acceptAudio=_acceptAudio;
@property(nonatomic) _Bool isAudioTemplate; // @synthesize isAudioTemplate=_isAudioTemplate;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) unsigned int tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned int templateType; // @synthesize templateType=_templateType;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

