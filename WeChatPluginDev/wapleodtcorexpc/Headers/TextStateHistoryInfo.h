//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString, TextStateModel;

@interface TextStateHistoryInfo : NSObject
{
    unsigned int _interactionCount;
    unsigned int _createTime;
    unsigned long long _key;
    NSString *_iconId;
    NSString *_customIconDescription;
    NSString *_topicId;
    NSString *_textStateId;
    NSDate *_createDate;
    NSString *_defaultImageId;
    TextStateModel *_textState;
}

+ (void)initialize;
+ (void)PBArrayAdd_customIconDescription;
+ (void)PBArrayAdd_defaultImageId;
+ (void)PBArrayAdd_interactionCount;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_textStateId;
+ (void)PBArrayAdd_key;
- (void).cxx_destruct;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) TextStateModel *textState; // @synthesize textState=_textState;
@property(retain, nonatomic) NSString *defaultImageId; // @synthesize defaultImageId=_defaultImageId;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(nonatomic) unsigned int interactionCount; // @synthesize interactionCount=_interactionCount;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *customIconDescription; // @synthesize customIconDescription=_customIconDescription;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;
- (_Bool)updateTextStateFromHistory:(id)arg1;
- (id)initWithTextStateModel:(id)arg1;
- (id)initWithHistory:(id)arg1 isSummary:(_Bool)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

