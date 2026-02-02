//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCCellGroup, WCCellGroupItem, WCDataItem;

@interface WCListCellStatusInfo : NSObject
{
    _Bool _showsPrivateStatus;
    _Bool _showsGroupedStatus;
    _Bool _showsStarredStatus;
    _Bool _showsFailureStatus;
    _Bool _showsLivePhotoStatus;
    WCDataItem *_dataItem;
    WCCellGroup *_group;
    WCCellGroupItem *_groupItem;
}

+ (id)statusInfoWithDataItem:(id)arg1 inGroup:(id)arg2 groupItem:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showsLivePhotoStatus; // @synthesize showsLivePhotoStatus=_showsLivePhotoStatus;
@property(readonly, nonatomic) _Bool showsFailureStatus; // @synthesize showsFailureStatus=_showsFailureStatus;
@property(readonly, nonatomic) _Bool showsStarredStatus; // @synthesize showsStarredStatus=_showsStarredStatus;
@property(readonly, nonatomic) _Bool showsGroupedStatus; // @synthesize showsGroupedStatus=_showsGroupedStatus;
@property(readonly, nonatomic) _Bool showsPrivateStatus; // @synthesize showsPrivateStatus=_showsPrivateStatus;
@property(readonly, nonatomic) WCCellGroupItem *groupItem; // @synthesize groupItem=_groupItem;
@property(readonly, nonatomic) WCCellGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)calculateStatuses;
- (void)resetStatuses;
- (id)initWithDataItem:(id)arg1 inGroup:(id)arg2 groupItem:(id)arg3;

@end

