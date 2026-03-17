//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MJMovieTextActionProtocol <NSObject>
@property(nonatomic) _Bool isAppearing;
- (void)updateOnIsPlayingDidChange:(_Bool)arg1;
- (void)updateOnPlaybackTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)updateOnSkimTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)resetPreview;
- (void)reloadData:(id)arg1;
@end

