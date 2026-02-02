//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCPayOverseaGrayAreaItem : NSObject
{
    NSData *_name;
    NSData *_logoUrl;
    NSData *_clickUrl;
    NSData *_extraInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_extraInfo;
+ (void)PBArrayAdd_clickUrl;
+ (void)PBArrayAdd_logoUrl;
+ (void)PBArrayAdd_name;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSData *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(retain, nonatomic) NSData *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSData *name; // @synthesize name=_name;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

