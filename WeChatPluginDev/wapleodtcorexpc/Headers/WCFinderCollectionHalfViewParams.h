//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderCollectionInfo, FinderPaidCollectionInfo, NSString, WCFinderCollectionHalfViewDisplayInfo;

@interface WCFinderCollectionHalfViewParams : NSObject
{
    _Bool _dismissSelfWhenJumpNewList;
    int _commentScene;
    FinderCollectionInfo *_collectionInfo;
    FinderPaidCollectionInfo *_paidCollection;
    WCFinderCollectionHalfViewDisplayInfo *_displayInfo;
    NSString *_fromTid;
    NSString *_finderUsername;
    NSString *_dataScene;
    CDUnknownBlockType _clickAction;
}

+ (id)paramsWithDisplayInfo:(id)arg1 commentScene:(int)arg2 dataScene:(id)arg3;
+ (id)paramsWithPaidCollection:(id)arg1 commentScene:(int)arg2 dataScene:(id)arg3;
+ (id)paramsWithCollectionInfo:(id)arg1 commentScene:(int)arg2 dataScene:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool dismissSelfWhenJumpNewList; // @synthesize dismissSelfWhenJumpNewList=_dismissSelfWhenJumpNewList;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(retain, nonatomic) NSString *dataScene; // @synthesize dataScene=_dataScene;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *fromTid; // @synthesize fromTid=_fromTid;
@property(retain, nonatomic) WCFinderCollectionHalfViewDisplayInfo *displayInfo; // @synthesize displayInfo=_displayInfo;
@property(retain, nonatomic) FinderPaidCollectionInfo *paidCollection; // @synthesize paidCollection=_paidCollection;
@property(retain, nonatomic) FinderCollectionInfo *collectionInfo; // @synthesize collectionInfo=_collectionInfo;

@end

