//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@protocol WCFinderPatCollectionReusableViewDelegate;

@interface WCFinderPatCollectionReusableView : UICollectionReusableView
{
    id <WCFinderPatCollectionReusableViewDelegate> _delegate;
}

+ (double)getPatMusicHeightWithBgmInfo:(id)arg1 titleWording:(id)arg2 screenWid:(double)arg3 enablePostFeed:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderPatCollectionReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)patPostButtonShow;
- (void)resumeMusicPlay;
- (void)stopMusicPlay;
- (void)playMusicWith:(id)arg1 isPlay:(_Bool)arg2;
- (void)playMusicWith:(id)arg1;
- (void)updatePatMusicWithBgmInfo:(id)arg1 patCount:(unsigned long long)arg2 readTotalCount:(unsigned long long)arg3 titleWording:(id)arg4 enablePostFeed:(_Bool)arg5;

@end

