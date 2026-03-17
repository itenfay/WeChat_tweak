//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMLiveViewHiddenStatusContainer : NSObject
{
    NSMutableDictionary *_statuses;
}

@property(retain, nonatomic) NSMutableDictionary *statuses; // @synthesize statuses=_statuses;
- (id)init;

@end

