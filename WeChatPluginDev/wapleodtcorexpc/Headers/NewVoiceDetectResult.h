//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NewVoiceDetectResult : NSObject
{
    _Bool isSilient_;
    _Bool isNoisy_;
    _Bool isToLoudly_;
    _Bool _isSilient;
    _Bool _isNoisy;
    _Bool _isToLoudly;
}

@property(nonatomic) _Bool isToLoudly; // @synthesize isToLoudly=_isToLoudly;
@property(nonatomic) _Bool isNoisy; // @synthesize isNoisy=_isNoisy;
@property(nonatomic) _Bool isSilient; // @synthesize isSilient=_isSilient;
- (void)dealloc;
- (id)init;

@end

