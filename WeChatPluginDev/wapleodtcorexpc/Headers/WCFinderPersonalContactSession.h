//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, WCFinderPersonalContactModel;

@interface WCFinderPersonalContactSession : NSObject
{
    WCFinderPersonalContactModel *_model;
    NSMutableArray *_mutItems;
}

+ (id)sessionWithContactModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutItems; // @synthesize mutItems=_mutItems;
@property(retain, nonatomic) WCFinderPersonalContactModel *model; // @synthesize model=_model;
- (id)itemWithTag:(long long)arg1;
- (void)onRedDotInfoChanged;
@property(readonly, nonatomic) NSArray *items;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

