//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLivePkTaskedBonusTaskItem : NSObject
{
    unsigned long long _target;
    unsigned long long _current;
    NSString *_targetGiftId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *targetGiftId; // @synthesize targetGiftId=_targetGiftId;
@property(nonatomic) unsigned long long current; // @synthesize current=_current;
@property(nonatomic) unsigned long long target; // @synthesize target=_target;

@end

