//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ProductActivity : NSObject
{
    unsigned int _activity_type;
    NSString *_activity_tag;
    NSString *_activity_content;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *activity_content; // @synthesize activity_content=_activity_content;
@property(retain, nonatomic) NSString *activity_tag; // @synthesize activity_tag=_activity_tag;
@property(nonatomic) unsigned int activity_type; // @synthesize activity_type=_activity_type;

@end

