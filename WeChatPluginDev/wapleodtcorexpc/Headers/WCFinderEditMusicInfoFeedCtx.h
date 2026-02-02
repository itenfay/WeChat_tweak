//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderOriginalTypeItem, NSString;
@protocol WCFinderEditMusicMediaAudioUrlAdapter;

@interface WCFinderEditMusicInfoFeedCtx : NSObject
{
    NSString *_tid;
    NSString *_originalId;
    FinderOriginalTypeItem *_originalItem;
    CDUnknownBlockType _onComplete;
    id <WCFinderEditMusicMediaAudioUrlAdapter> _adapter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <WCFinderEditMusicMediaAudioUrlAdapter> adapter; // @synthesize adapter=_adapter;
@property(copy, nonatomic) CDUnknownBlockType onComplete; // @synthesize onComplete=_onComplete;
@property(retain, nonatomic) FinderOriginalTypeItem *originalItem; // @synthesize originalItem=_originalItem;
@property(retain, nonatomic) NSString *originalId; // @synthesize originalId=_originalId;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;

@end

