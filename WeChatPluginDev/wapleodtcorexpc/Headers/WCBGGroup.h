//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCBGGroup : NSObject
{
    NSString *_name;
    NSMutableArray *_mediaList;
}

+ (void)initialize;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_name;
+ (id)bgGroupFromServerObject:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList=_mediaList;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

