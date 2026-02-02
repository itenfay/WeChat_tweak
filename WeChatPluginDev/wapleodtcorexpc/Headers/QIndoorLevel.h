//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QIndoorLevel : NSObject
{
    NSString *_name;
    NSString *_shortName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)descriptionDictionary;
- (id)initWithInternalLevel:(id)arg1;

@end

