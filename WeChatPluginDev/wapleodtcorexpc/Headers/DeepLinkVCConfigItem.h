//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DeepLinkVCConfigItem : NSObject
{
    NSString *linkName;
    unsigned long long actionType;
    NSString *actionName;
}

+ (id)genItemWithLinkName:(id)arg1 actionType:(unsigned long long)arg2 actionName:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType;
@property(retain, nonatomic) NSString *linkName; // @synthesize linkName;
- (id)init;

@end

