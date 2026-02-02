//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTabFilter : NSObject
{
    unsigned int _type;
    NSString *_name;
}

+ (unsigned int)eventPageIdForType:(unsigned int)arg1;
+ (id)emptyTopicTipsForType:(unsigned int)arg1;
+ (id)emptyLocationTipsForType:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)initWithPoiStreamFilter:(id)arg1;
- (id)initWithTopicFilter:(id)arg1;
- (id)initWithType:(unsigned int)arg1 name:(id)arg2;

@end

