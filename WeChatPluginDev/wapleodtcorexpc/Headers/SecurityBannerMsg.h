//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SecurityBannerMsg : NSObject
{
    unsigned int _showType;
    NSString *_wording;
    NSString *_linkName;
    NSString *_linkSrc;
}

+ (void)initialize;
+ (void)PBArrayAdd_linkSrc;
+ (void)PBArrayAdd_linkName;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_wording;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *linkSrc; // @synthesize linkSrc=_linkSrc;
@property(retain, nonatomic) NSString *linkName; // @synthesize linkName=_linkName;
@property(nonatomic) unsigned int showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

