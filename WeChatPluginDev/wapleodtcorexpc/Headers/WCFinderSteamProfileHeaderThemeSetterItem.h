//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderSteamProfileHeaderThemeSetterItem : NSObject
{
    NSObject *_target;
    NSString *_key;
    CDUnknownBlockType _updater;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType updater; // @synthesize updater=_updater;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) __weak NSObject *target; // @synthesize target=_target;
- (void)invoke:(_Bool)arg1;

@end

