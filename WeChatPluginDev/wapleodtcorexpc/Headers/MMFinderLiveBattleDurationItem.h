//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveBattleDurationItem : NSObject
{
    unsigned int _interval;
    NSString *_displayName;
}

+ (id)itemsWithBackendArray:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) unsigned int interval; // @synthesize interval=_interval;
- (_Bool)isEqual:(id)arg1;
- (id)initWithInterval:(unsigned int)arg1;

@end

