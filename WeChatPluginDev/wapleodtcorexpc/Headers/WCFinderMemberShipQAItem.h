//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCFinderDataItem;

@interface WCFinderMemberShipQAItem : NSObject
{
    unsigned long long _qaType;
    NSString *_refAnswerContent;
    WCFinderDataItem *_refAnswerObject;
    NSMutableArray *_likeList;
}

+ (id)convertFromFinderMemberQAVO:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_likeList;
+ (void)PBArrayAdd_refAnswerObject;
+ (void)PBArrayAdd_refAnswerContent;
+ (void)PBArrayAdd_qaType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *likeList; // @synthesize likeList=_likeList;
@property(retain, nonatomic) WCFinderDataItem *refAnswerObject; // @synthesize refAnswerObject=_refAnswerObject;
@property(copy, nonatomic) NSString *refAnswerContent; // @synthesize refAnswerContent=_refAnswerContent;
@property(nonatomic) unsigned long long qaType; // @synthesize qaType=_qaType;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

