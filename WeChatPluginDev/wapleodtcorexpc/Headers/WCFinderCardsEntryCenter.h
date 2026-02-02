//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, WCFinderCardsEntryCenterStoreInfo;

@interface WCFinderCardsEntryCenter : NSObject
{
    WCFinderCardsEntryCenterStoreInfo *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCardsEntryCenterStoreInfo *data; // @synthesize data=_data;
@property(readonly, nonatomic) FinderJumpInfo *jumpInfo;
@property(readonly, nonatomic) _Bool needPreload;
@property(readonly, nonatomic) _Bool isToNewCards;
@property(readonly, nonatomic) _Bool shouldShow;
- (void)updateWithCardHolderEntranceInfo:(id)arg1;
- (id)init;

@end

