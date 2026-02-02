//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMListenSimplePlayableInfo, RingTone;

@interface SimplePlayableInfoItem : NSObject
{
    _Bool _isSelected;
    MMListenSimplePlayableInfo *_info;
    RingTone *_ringtone;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RingTone *ringtone; // @synthesize ringtone=_ringtone;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) MMListenSimplePlayableInfo *info; // @synthesize info=_info;

@end

