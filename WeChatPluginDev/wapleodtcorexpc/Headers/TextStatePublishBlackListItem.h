//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TextStatePublishBlackListItem : NSObject
{
    NSString *_textStateId;
    long long _privacy;
    NSArray *_labelList;
    NSArray *_contactNameList;
}

+ (id)contactListFromContactNameList:(id)arg1;
+ (id)contactNameListFromContactList:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_contactNameList;
+ (void)PBArrayAdd_labelList;
+ (void)PBArrayAdd_privacy;
+ (void)PBArrayAdd_textStateId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contactNameList; // @synthesize contactNameList=_contactNameList;
@property(retain, nonatomic) NSArray *labelList; // @synthesize labelList=_labelList;
@property(nonatomic) long long privacy; // @synthesize privacy=_privacy;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
- (id)contactList;
- (id)initWithModel:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

