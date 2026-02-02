//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMShareSessionItem : NSObject
{
    _Bool _showSuffixIcon;
    NSString *_username;
    NSString *_nickname;
    NSString *_dispalyName;
}

+ (void)initialize;
+ (void)PBArrayAdd_showSuffixIcon;
+ (void)PBArrayAdd_dispalyName;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_username;
- (void).cxx_destruct;
@property(nonatomic) _Bool showSuffixIcon; // @synthesize showSuffixIcon=_showSuffixIcon;
@property(retain, nonatomic) NSString *dispalyName; // @synthesize dispalyName=_dispalyName;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

