//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderPoiInteractionInfo, InteractionData, MemberQAUserPagePreviewData, NSArray, NSMutableArray, NSString, WCFinderContact;

@interface WCFinderContactPreviewData : NSObject
{
    _Bool _showFeedPreview;
    _Bool _showLikedList;
    WCFinderContact *_contact;
    NSArray *_dataItems;
    unsigned long long _expectNextFetchTimestamp;
    NSArray *_likeListDataItem;
    InteractionData *_interactionData;
    NSMutableArray *_previewItems;
    MemberQAUserPagePreviewData *_memberQaData;
    FinderPoiInteractionInfo *_poiInteractionInfo;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_poiInteractionInfo;
+ (void)PBArrayAdd_memberQaData;
+ (void)PBArrayAdd_previewItems;
+ (void)PBArrayAdd_interactionData;
+ (void)PBArrayAdd_likeListDataItem;
+ (void)PBArrayAdd_showLikedList;
+ (void)PBArrayAdd_expectNextFetchTimestamp;
+ (void)PBArrayAdd_dataItems;
+ (void)PBArrayAdd_showFeedPreview;
+ (void)PBArrayAdd_contact;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderPoiInteractionInfo *poiInteractionInfo; // @synthesize poiInteractionInfo=_poiInteractionInfo;
@property(retain, nonatomic) MemberQAUserPagePreviewData *memberQaData; // @synthesize memberQaData=_memberQaData;
@property(retain, nonatomic) NSMutableArray *previewItems; // @synthesize previewItems=_previewItems;
@property(retain, nonatomic) InteractionData *interactionData; // @synthesize interactionData=_interactionData;
@property(retain, nonatomic) NSArray *likeListDataItem; // @synthesize likeListDataItem=_likeListDataItem;
@property(nonatomic) _Bool showLikedList; // @synthesize showLikedList=_showLikedList;
@property(nonatomic) unsigned long long expectNextFetchTimestamp; // @synthesize expectNextFetchTimestamp=_expectNextFetchTimestamp;
@property(retain, nonatomic) NSArray *dataItems; // @synthesize dataItems=_dataItems;
@property(nonatomic) _Bool showFeedPreview; // @synthesize showFeedPreview=_showFeedPreview;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
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

