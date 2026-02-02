//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, WCDataItem;

@interface WCTimelineCommentEmotionReport : NSObject
{
    WCDataItem *_dataItem;
    NSMutableArray *_clickEmojiIconIdList;
    NSMutableArray *_clickEmojiIdList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *clickEmojiIdList; // @synthesize clickEmojiIdList=_clickEmojiIdList;
@property(retain, nonatomic) NSMutableArray *clickEmojiIconIdList; // @synthesize clickEmojiIconIdList=_clickEmojiIconIdList;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)report:(unsigned char)arg1;
- (id)init;

@end

