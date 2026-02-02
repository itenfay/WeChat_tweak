//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@protocol WCFinderMusicHeaderViewDelegate;

@interface WCFinderMusicBaseHeaderView : UICollectionReusableView
{
    id <WCFinderMusicHeaderViewDelegate> _delegate;
}

+ (_Bool)enableUseSourceContactByMusicTopicInfo:(id)arg1 contact:(id)arg2;
+ (_Bool)enablePlayMusicInfo:(id)arg1;
+ (_Bool)hasMusicCopyright:(id)arg1;
+ (id)getSongDescByMusicTopicInfo:(id)arg1;
+ (double)heightWithMusicTopicInfo:(id)arg1 andViewWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderMusicHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getHeaderIconUrl;
- (id)getHeaderTitle;
- (void)updateWithMusicTopicInfo:(id)arg1 fromDataItem:(id)arg2 shareItemInfo:(id)arg3;

@end

