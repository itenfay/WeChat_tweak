//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCDataItem;

@interface WCTimelineDeleteDataItemWrap : NSObject
{
    WCDataItem *_deleteDataItem;
    struct CGPoint _tableViewContentOffset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGPoint tableViewContentOffset; // @synthesize tableViewContentOffset=_tableViewContentOffset;
@property(readonly, nonatomic) WCDataItem *deleteDataItem; // @synthesize deleteDataItem=_deleteDataItem;
- (id)initWithDeleteDataItem:(id)arg1 tableViewContentOffset:(struct CGPoint)arg2;

@end

