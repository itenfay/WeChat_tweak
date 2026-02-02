//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface MMFinderLiveKTVSubBoardItem : NSObject
{
    _Bool _isUpdated;
    _Bool _hasNext;
    unsigned int _boardType;
    NSString *_boardName;
    NSData *_lastBuffer;
    NSMutableArray *_songItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *songItems; // @synthesize songItems=_songItems;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(nonatomic) _Bool isUpdated; // @synthesize isUpdated=_isUpdated;
@property(retain, nonatomic) NSString *boardName; // @synthesize boardName=_boardName;
@property(nonatomic) unsigned int boardType; // @synthesize boardType=_boardType;

@end

