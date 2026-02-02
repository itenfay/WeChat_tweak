//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCStoryTimelineDataUnit : NSObject
{
    long long _unreadFavorCellModelCount;
    long long _readFavorCellModelCount;
    NSArray *_timestampUnreadUnitArray;
    NSArray *_timestampReadUnitArray;
    NSArray *_unreadCornerMessageUnitArray;
    NSArray *_timestampUnreadCellModelArray;
    NSArray *_timestampReadCellModelArray;
    NSArray *_unreadCornerMessageCellModelArray;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *unreadCornerMessageCellModelArray; // @synthesize unreadCornerMessageCellModelArray=_unreadCornerMessageCellModelArray;
@property(copy, nonatomic) NSArray *timestampReadCellModelArray; // @synthesize timestampReadCellModelArray=_timestampReadCellModelArray;
@property(copy, nonatomic) NSArray *timestampUnreadCellModelArray; // @synthesize timestampUnreadCellModelArray=_timestampUnreadCellModelArray;
@property(copy, nonatomic) NSArray *unreadCornerMessageUnitArray; // @synthesize unreadCornerMessageUnitArray=_unreadCornerMessageUnitArray;
@property(copy, nonatomic) NSArray *timestampReadUnitArray; // @synthesize timestampReadUnitArray=_timestampReadUnitArray;
@property(copy, nonatomic) NSArray *timestampUnreadUnitArray; // @synthesize timestampUnreadUnitArray=_timestampUnreadUnitArray;
@property(readonly, nonatomic) long long readFavorCellModelCount; // @synthesize readFavorCellModelCount=_readFavorCellModelCount;
@property(readonly, nonatomic) long long unreadFavorCellModelCount; // @synthesize unreadFavorCellModelCount=_unreadFavorCellModelCount;
- (id)init;

@end

