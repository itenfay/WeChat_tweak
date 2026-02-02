//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface MMFinderLiveModNoticeView
{
    CDUnknownBlockType _liveModNoticeViewBlock;
}

@property(copy, nonatomic) CDUnknownBlockType liveModNoticeViewBlock; // @synthesize liveModNoticeViewBlock=_liveModNoticeViewBlock;
- (void)liveCancelNoticeViewClick:(_Bool)arg1;
- (void)layoutUI;

@end
