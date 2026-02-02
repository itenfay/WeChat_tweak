//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmotionSummary;

@interface StoreEmoticonDownloadTask : NSObject
{
    _Bool _isNeedWWANDownload;
    EmotionSummary *_itemSummary;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNeedWWANDownload; // @synthesize isNeedWWANDownload=_isNeedWWANDownload;
@property(retain, nonatomic) EmotionSummary *itemSummary; // @synthesize itemSummary=_itemSummary;
- (id)init;

@end

