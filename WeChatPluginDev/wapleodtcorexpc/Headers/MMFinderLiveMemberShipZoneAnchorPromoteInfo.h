//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderMemberZonePromoteInfoItem;

@interface MMFinderLiveMemberShipZoneAnchorPromoteInfo : NSObject
{
    FinderMemberZonePromoteInfoItem *_memberZoneItem;
}

+ (id)createLiveMemberShipZoneAnchorPromoteInfoFrom:(id)arg1;
@property(retain, nonatomic) FinderMemberZonePromoteInfoItem *memberZoneItem; // @synthesize memberZoneItem=_memberZoneItem;
- (id)promoteKey;

@end

