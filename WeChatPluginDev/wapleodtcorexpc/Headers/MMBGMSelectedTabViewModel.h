//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMBGMPanelPublishContext, MMBGMSelectedConfig;
@protocol MMBGMSelectedTabViewModelDelegate;

@interface MMBGMSelectedTabViewModel : NSObject
{
    id <MMBGMSelectedTabViewModelDelegate> _delegate;
    MMBGMSelectedConfig *_config;
    MMBGMPanelPublishContext *_publishContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMBGMPanelPublishContext *publishContext; // @synthesize publishContext=_publishContext;
@property(retain, nonatomic) MMBGMSelectedConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <MMBGMSelectedTabViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)indexOfMusicInfo:(id)arg1;
- (_Bool)shouldInsertSelectedMusicDataToFirst;
- (_Bool)isReccommentdTabModel;
- (void)setMusicDataToFirst:(id)arg1;
- (void)addMusicData:(id)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (void)loadMoreData;
- (_Bool)hasMoreData;
- (void)loadData;
- (unsigned long long)tabType;
- (id)tabTitle;

@end

