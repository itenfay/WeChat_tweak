//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveBriefMusicInfo, MMLRUCache, UIImageView;
@protocol MMFinderLiveMusicHeaderButtonDelegate;

@interface MMFinderLiveMusicHeaderButton : UIView
{
    id <MMFinderLiveMusicHeaderButtonDelegate> _delegate;
    MMLRUCache *_qqMusicCache;
    MMLRUCache *_tingMusicCache;
    FinderLiveBriefMusicInfo *_currentBriefInfo;
    UIView *_musicButton;
    UIImageView *_musicIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *musicIconView; // @synthesize musicIconView=_musicIconView;
@property(retain, nonatomic) UIView *musicButton; // @synthesize musicButton=_musicButton;
@property(retain, nonatomic) FinderLiveBriefMusicInfo *currentBriefInfo; // @synthesize currentBriefInfo=_currentBriefInfo;
@property(retain, nonatomic) MMLRUCache *tingMusicCache; // @synthesize tingMusicCache=_tingMusicCache;
@property(retain, nonatomic) MMLRUCache *qqMusicCache; // @synthesize qqMusicCache=_qqMusicCache;
@property(nonatomic) __weak id <MMFinderLiveMusicHeaderButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setupMusicView;
- (void)onClick;
- (id)objectCacheSongItemForId:(id)arg1;
- (void)setCacheSongItemForId:(id)arg1 item:(id)arg2;
- (void)updateMusicLogo;
- (_Bool)updateCurrentId:(id)arg1;
- (void)layoutMusicIcon;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithCacheCapacity:(unsigned int)arg1;

@end

