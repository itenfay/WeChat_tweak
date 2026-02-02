//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderIdentityInfo, NSString, WCFinderContactFansInteractionData;

@interface WCFinderContactInnerModel : NSObject
{
    FinderIdentityInfo *_userInfo;
    WCFinderContactFansInteractionData *_fansInteractionData;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_fansInteractionData;
+ (void)PBArrayAdd_userInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContactFansInteractionData *fansInteractionData; // @synthesize fansInteractionData=_fansInteractionData;
@property(retain, nonatomic) FinderIdentityInfo *userInfo; // @synthesize userInfo=_userInfo;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

