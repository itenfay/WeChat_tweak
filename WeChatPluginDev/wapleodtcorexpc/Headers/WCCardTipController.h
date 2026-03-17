//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCCardTipItem;

@interface WCCardTipController : NSObject
{
    WCCardTipItem *_wcCardTip;
}

- (void)saveWCCardTipStg;
- (id)GetPathOfWCCardTipStorage;
- (id)getCardTip;
- (void)clearWCCardTip;
- (void)setWCCardTip:(id)arg1;
- (void)loadTipStg;
- (id)init;

@end

