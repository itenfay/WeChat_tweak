//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeVoipRciABTestInfo : NSObject
{
    _Bool _enableRci;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool enableRci; // @synthesize enableRci=_enableRci;
- (void)loadInfo;

@end

