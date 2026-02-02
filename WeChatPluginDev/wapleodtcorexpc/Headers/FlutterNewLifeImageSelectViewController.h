//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBGMSelectHalfScreenViewController, NSMutableDictionary;
@protocol NewLifePostEndDelegate;

@interface FlutterNewLifeImageSelectViewController
{
    MMBGMSelectHalfScreenViewController *_selectMusicVc;
    NSMutableDictionary *_idMusicMap;
    id <NewLifePostEndDelegate> _postEndDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <NewLifePostEndDelegate> postEndDelegate; // @synthesize postEndDelegate=_postEndDelegate;
@property(retain, nonatomic) NSMutableDictionary *idMusicMap; // @synthesize idMusicMap=_idMusicMap;
@property(retain, nonatomic) MMBGMSelectHalfScreenViewController *selectMusicVc; // @synthesize selectMusicVc=_selectMusicVc;
- (void)postEnd:(id)arg1;

@end

