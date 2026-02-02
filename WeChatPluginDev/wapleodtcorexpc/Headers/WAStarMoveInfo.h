//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAAppItemData;

@interface WAStarMoveInfo
{
    unsigned long long _moveType;
    WAAppItemData *_moveItem;
    WAAppItemData *_toPreItem;
    WAAppItemData *_toNextItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAppItemData *toNextItem; // @synthesize toNextItem=_toNextItem;
@property(retain, nonatomic) WAAppItemData *toPreItem; // @synthesize toPreItem=_toPreItem;
@property(retain, nonatomic) WAAppItemData *moveItem; // @synthesize moveItem=_moveItem;
@property(nonatomic) unsigned long long moveType; // @synthesize moveType=_moveType;

@end

