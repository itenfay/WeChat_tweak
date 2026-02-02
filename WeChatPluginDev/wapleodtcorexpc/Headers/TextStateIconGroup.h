//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TextStateIconGroup : NSObject
{
    NSString *_groupId;
    NSString *_groupIconURL;
    NSMutableDictionary *_localeToGroupDescriptionDict;
    NSString *_groupDescription;
}

+ (void)initialize;
+ (void)PBArrayAdd_groupIconURL;
+ (void)PBArrayAdd_localeToGroupDescriptionDict;
+ (void)PBArrayAdd_groupId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *groupDescription; // @synthesize groupDescription=_groupDescription;
@property(retain, nonatomic) NSMutableDictionary *localeToGroupDescriptionDict; // @synthesize localeToGroupDescriptionDict=_localeToGroupDescriptionDict;
@property(retain, nonatomic) NSString *groupIconURL; // @synthesize groupIconURL=_groupIconURL;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void)clearCachedDescription;
- (id)initWithInstance:(id)arg1;
- (id)initWithGroup:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

