//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CPNowPlayingTemplate;

@protocol CPNowPlayingTemplateObserver <NSObject>

@optional
- (void)nowPlayingTemplateAlbumArtistButtonTapped:(CPNowPlayingTemplate *)arg1;
- (void)nowPlayingTemplateUpNextButtonTapped:(CPNowPlayingTemplate *)arg1;
@end

