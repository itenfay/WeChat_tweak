//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GamePlayTogetherDynamicItemList_GamePlayTogetherDynamicItem;

@interface MMLiveGamePlayTogetherDynamicCardItem
{
    double _contentWidth;
    GamePlayTogetherDynamicItemList_GamePlayTogetherDynamicItem *_internalDynamicItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GamePlayTogetherDynamicItemList_GamePlayTogetherDynamicItem *internalDynamicItem; // @synthesize internalDynamicItem=_internalDynamicItem;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
- (double)heightForCell;
- (id)initWithModel:(id)arg1 contentWidth:(double)arg2;

@end

