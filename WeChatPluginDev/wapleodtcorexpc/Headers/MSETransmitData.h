//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MSETransmitData : NSObject
{
    NSString *_searchText;
    long long _shareType;
}

+ (void)initialize;
+ (void)PBArrayAdd_shareType;
+ (void)PBArrayAdd_searchText;
- (void).cxx_destruct;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

