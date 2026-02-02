//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVMediaSelectionGroup, AVMediaSelectionOption;

@interface TPAVTrackInfo : NSObject
{
    _Bool _isSelected;
    AVMediaSelectionOption *_option;
    AVMediaSelectionGroup *_group;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) AVMediaSelectionGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) AVMediaSelectionOption *option; // @synthesize option=_option;

@end

