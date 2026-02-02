//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveKTVSubBoardItem, NSData, NSMutableArray, NSString;

@interface MMFinderLiveKTVBoardItem : NSObject
{
    _Bool _isUpdated;
    _Bool _hasNext;
    _Bool _isDefault;
    unsigned int _boardType;
    NSString *_boardName;
    NSData *_lastBuffer;
    NSMutableArray *_songItems;
    NSMutableArray *_subBoardItems;
    MMFinderLiveKTVSubBoardItem *_selectedSubBoardItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveKTVSubBoardItem *selectedSubBoardItem; // @synthesize selectedSubBoardItem=_selectedSubBoardItem;
@property(retain, nonatomic) NSMutableArray *subBoardItems; // @synthesize subBoardItems=_subBoardItems;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) NSMutableArray *songItems; // @synthesize songItems=_songItems;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(nonatomic) _Bool isUpdated; // @synthesize isUpdated=_isUpdated;
@property(retain, nonatomic) NSString *boardName; // @synthesize boardName=_boardName;
@property(nonatomic) unsigned int boardType; // @synthesize boardType=_boardType;

@end

