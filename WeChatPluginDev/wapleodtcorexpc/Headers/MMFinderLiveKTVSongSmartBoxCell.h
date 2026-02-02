//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel;

@interface MMFinderLiveKTVSongSmartBoxCell
{
    MMUILabel *_actionLabel;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
- (void)onClickedSmartBox;
- (void)customLayoutUI;

@end

