//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderObjectHotWordInfo, NSString;

@interface WCFinderObjectHotWordInfo : NSObject
{
    FinderObjectHotWordInfo *_hotWordInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_hotWordInfo;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderObjectHotWordInfo *hotWordInfo; // @synthesize hotWordInfo=_hotWordInfo;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

